/*
 * XREFs of ?InitializeGutterDirtiness@CBitmapInfoBack@DirectComposition@@QEAAXPEAV12@@Z @ 0x1800EA5FC
 * Callers:
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBitmapInfoBack::InitializeGutterDirtiness(
        DirectComposition::CBitmapInfoBack *this,
        struct DirectComposition::CBitmapInfoBack *a2)
{
  __int64 v2; // rax
  int v3; // eax

  v2 = *((_QWORD *)this + 2);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 104);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a2 + 120);
  v3 = *(_DWORD *)(v2 + 88);
  if ( (v3 & 1) == 0 )
  {
    *((_DWORD *)this + 26) = 0x7FFFFFFF;
    *((_DWORD *)this + 27) = 0x80000000;
  }
  if ( (v3 & 4) == 0 )
  {
    *((_DWORD *)this + 28) = 0x7FFFFFFF;
    *((_DWORD *)this + 29) = 0x80000000;
  }
  if ( (v3 & 2) == 0 )
  {
    *((_DWORD *)this + 30) = 0x7FFFFFFF;
    *((_DWORD *)this + 31) = 0x80000000;
  }
  if ( (v3 & 8) == 0 )
  {
    *((_DWORD *)this + 32) = 0x7FFFFFFF;
    *((_DWORD *)this + 33) = 0x80000000;
  }
}
