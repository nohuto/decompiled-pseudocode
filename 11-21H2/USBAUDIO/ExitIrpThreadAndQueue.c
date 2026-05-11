/*
 * XREFs of ExitIrpThreadAndQueue @ 0x1C0002B40
 * Callers:
 *     DeviceStop @ 0x1C0028840 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0028A60 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x1C00321C8 (CleanupPendingIrpQ.c)
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
