/*
 * XREFs of ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800DA9A8
 * Callers:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000FDF4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x1800D81A4 (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x1800D87C4 (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 */

__int64 __fastcall ATL::CComSafeArray<float,4>::SetAt(SAFEARRAY **a1, LONG a2, _DWORD *a3)
{
  LONG v7; // edx
  LONG LowerBound; // esi

  if ( !*a1 )
    return 2147500037LL;
  LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(a1, a2);
  if ( a2 < LowerBound || a2 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(a1, v7) )
    return 2147942487LL;
  *((_DWORD *)(*a1)->pvData + a2 - LowerBound) = *a3;
  return 0LL;
}
