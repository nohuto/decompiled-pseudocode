/*
 * XREFs of ?InvalidatePreviousSurfaces@CBitmapInfoFront@DirectComposition@@AEAAXAEBUtagRECT@@@Z @ 0x180038EDC
 * Callers:
 *     ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z @ 0x180038DEC (-ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z.c)
 * Callees:
 *     ?UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z @ 0x180037924 (-UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z.c)
 */

void __fastcall DirectComposition::CBitmapInfoFront::InvalidatePreviousSurfaces(
        DirectComposition::CBitmapInfoFront *this,
        const struct tagRECT *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  _QWORD *v5; // rbx
  __int64 v7; // rdi

  v5 = (_QWORD *)((char *)this + 128);
  v7 = 0LL;
  do
  {
    if ( !*v5 )
      break;
    DirectComposition::UnionRectInternal(
      (DirectComposition::CBitmapInfoFront *)((char *)this + 16 * v7 + 8 * (unsigned int)v7 + 136),
      (struct tagRECT *)((char *)this + 16 * v7 + 8 * (unsigned int)v7 + 136),
      a2,
      a4);
    v7 = (unsigned int)(v7 + 1);
    v5 += 3;
  }
  while ( (unsigned int)v7 < 3 );
}
