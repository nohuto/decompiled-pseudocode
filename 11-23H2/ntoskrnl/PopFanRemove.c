/*
 * XREFs of PopFanRemove @ 0x140997510
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140352030 (IoCancelIrp.c)
 */

NTSTATUS __fastcall PopFanRemove(__int64 a1)
{
  NTSTATUS result; // eax

  *(_BYTE *)(a1 + 440) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  result = KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
  if ( *(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 0;
    _InterlockedDecrement(&dword_140C3C908);
  }
  return result;
}
