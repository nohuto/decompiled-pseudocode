/*
 * XREFs of UsbhSetResumePending @ 0x1C001EC44
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x1C0010A20 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 */

void __fastcall UsbhSetResumePending(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al

  v3 = a1;
  v4 = (KSPIN_LOCK *)FdoExt(a1);
  Log(v3, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
  v5 = KeAcquireSpinLockRaiseToDpc(v4 + 618);
  *(_BYTE *)(a2 + 2838) = 0;
  LOBYTE(v3) = v5;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock(v4 + 618, v3);
}
