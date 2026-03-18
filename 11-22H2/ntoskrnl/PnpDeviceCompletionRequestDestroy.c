/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x140322824
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140322760 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407955BC (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     ExQueueWorkItemFromIo @ 0x1402B75F0 (ExQueueWorkItemFromIo.c)
 *     IopQueueWorkItemProlog @ 0x1402B93D0 (IopQueueWorkItemProlog.c)
 *     IoAllocateWorkItem @ 0x140322880 (IoAllocateWorkItem.c)
 */

__int64 __fastcall PnpDeviceCompletionRequestDestroy(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v3; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = (__int64)IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL));
    if ( result )
    {
      v3 = IopQueueWorkItemProlog(result, (__int64)PnpDeviceCompletionRequestDestroyWorkItem, a1);
      return ExQueueWorkItemFromIo(v3, 1);
    }
  }
  return result;
}
