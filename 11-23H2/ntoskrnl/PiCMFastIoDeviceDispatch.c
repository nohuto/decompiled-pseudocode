/*
 * XREFs of PiCMFastIoDeviceDispatch @ 0x1406D06F0
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x14022BA20 (IoIs32bitProcess.c)
 *     PiCMHandleIoctl @ 0x1406D0760 (PiCMHandleIoctl.c)
 */

char __fastcall PiCMFastIoDeviceDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  BOOLEAN v9; // al

  v9 = IoIs32bitProcess(0LL);
  *a8 = PiCMHandleIoctl(a3, a8 + 2, a7, v9);
  return 1;
}
