/*
 * XREFs of UsbhDisconnectPdoFromHub @ 0x1C002A2DC
 * Callers:
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

_DWORD *__fastcall UsbhDisconnectPdoFromHub(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *result; // rax

  v2 = *((_QWORD *)PdoExt(a1) + 148);
  FdoExt(v2);
  Log(v2, 8, 1346653997, a1, v2);
  result = PdoExt(a1);
  *((_QWORD *)result + 148) = 0LL;
  return result;
}
