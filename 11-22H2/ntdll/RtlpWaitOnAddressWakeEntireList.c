/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x180050654
 * Callers:
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800500C4 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x1800505FC (RtlpOptimizeWaitOnAddressWaitList.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009FBE0 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  NTSTATUS result; // eax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = _InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !result )
        result = ZwAlertThreadByThreadId(*(HANDLE *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
