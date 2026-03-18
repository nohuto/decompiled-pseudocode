/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x1C005A3E8
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C0054FF0 (UsbhPdoPnp_QueryId.c)
 *     UsbhUpdateUxdSettings @ 0x1C005A420 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 642), 16, 1, 0);
  return 0LL;
}
