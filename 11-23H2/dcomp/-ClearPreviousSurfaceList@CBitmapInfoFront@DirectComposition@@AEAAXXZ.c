/*
 * XREFs of ?ClearPreviousSurfaceList@CBitmapInfoFront@DirectComposition@@AEAAXXZ @ 0x18000CBF0
 * Callers:
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

void __fastcall DirectComposition::CBitmapInfoFront::ClearPreviousSurfaceList(
        DirectComposition::CBitmapInfoFront *this)
{
  __int64 *v2; // rbx
  __int64 i; // rdi
  __int64 v4; // rcx

  v2 = (__int64 *)((char *)this + 128);
  for ( i = 0LL; i < 3; ++i )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( *(DirectComposition::CBitmapInfoFront **)(v4 + 96) == this )
      *(_QWORD *)(v4 + 96) = 0LL;
    CMILRefCountBaseT<IUnknown>::InternalRelease(v4);
    *v2 = 0LL;
    v2 += 3;
  }
}
