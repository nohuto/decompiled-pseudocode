/*
 * XREFs of UsbhReleasePdoUxdLock @ 0x1C005ACB8
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C00558C0 (UsbhPdoPnp_QueryId.c)
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 */

__int64 __fastcall UsbhReleasePdoUxdLock(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax

  v2 = PdoExt(a2);
  KeReleaseSemaphore((PRKSEMAPHORE)(v2 + 642), 16, 1, 0);
  return 0LL;
}
