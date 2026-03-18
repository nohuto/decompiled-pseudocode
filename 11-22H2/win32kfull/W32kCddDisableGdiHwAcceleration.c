/*
 * XREFs of W32kCddDisableGdiHwAcceleration @ 0x1C00B0100
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 W32kCddDisableGdiHwAcceleration()
{
  unsigned __int64 v0; // rbx

  v0 = 0LL;
  if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    v0 = *((_QWORD *)PtiCurrentShared() + 81);
  return (v0 >> 34) & 1;
}
