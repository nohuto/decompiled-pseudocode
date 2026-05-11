/*
 * XREFs of ExitIrpThreadAndQueue @ 0x1C000962C
 * Callers:
 *     DeviceStop @ 0x1C002AA30 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C003C780 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x1C002A23C (CleanupPendingIrpQ.c)
 */

LONG_PTR __fastcall ExitIrpThreadAndQueue(__int64 a1)
{
  LONG_PTR result; // rax

  result = CleanupPendingIrpQ();
  if ( *(_QWORD *)(a1 + 696) )
  {
    *(_BYTE *)(a1 + 704) = 1;
    KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 664), 0, 1, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 696), Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(*(PVOID *)(a1 + 696));
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  return result;
}
