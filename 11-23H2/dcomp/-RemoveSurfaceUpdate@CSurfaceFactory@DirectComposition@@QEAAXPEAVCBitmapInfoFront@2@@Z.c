/*
 * XREFs of ?RemoveSurfaceUpdate@CSurfaceFactory@DirectComposition@@QEAAXPEAVCBitmapInfoFront@2@@Z @ 0x1800FBC28
 * Callers:
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 *     ??_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z @ 0x18002A2D0 (--_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CSurfaceFactory::RemoveSurfaceUpdate(
        DirectComposition::CSurfaceFactory *this,
        struct DirectComposition::CBitmapInfoFront *a2)
{
  _QWORD *i; // rcx

  for ( i = (_QWORD *)((char *)this + 320);
        (struct DirectComposition::CBitmapInfoFront *)*i != a2;
        i = (_QWORD *)(*i + 104LL) )
  {
    ;
  }
  *i = *((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 13) = 0LL;
}
