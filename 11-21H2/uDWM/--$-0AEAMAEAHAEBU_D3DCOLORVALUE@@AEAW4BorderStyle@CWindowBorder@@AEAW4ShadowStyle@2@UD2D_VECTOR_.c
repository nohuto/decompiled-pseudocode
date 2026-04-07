/*
 * XREFs of ??$?0AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@2@UD2D_VECTOR_2F@@MV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@QEAA@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@4@$$QEAUD2D_VECTOR_2F@@$$QEAM$$QEAV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18003A588
 * Callers:
 *     ??$make_shared@VCCachedBorderBrush@CWindowBorder@@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@2@AEAW4ShadowStyle@2@UD2D_VECTOR_2F@@MV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@CWindowBorder@@AEAW4ShadowStyle@4@$$QEAUD2D_VECTOR_2F@@$$QEAM$$QEAV?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Z @ 0x18003A4B4 (--$make_shared@VCCachedBorderBrush@CWindowBorder@@AEAMAEAHAEBU_D3DCOLORVALUE@@AEAW4BorderStyle@2.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180010920 (-InternalAddRef@-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        __int128 *a4,
        int *a5,
        int *a6,
        _QWORD *a7,
        int *a8,
        __int64 *a9)
{
  int v11; // edx
  int v12; // xmm1_4
  int v13; // r10d
  int v14; // r8d
  __int128 v15; // xmm0
  __int64 *v16; // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vftable';
  v11 = *a3;
  v12 = *a8;
  v13 = *a6;
  v14 = *a5;
  *(_DWORD *)(a1 + 16) = *a2;
  *(_DWORD *)(a1 + 20) = v11;
  *(_DWORD *)(a1 + 24) = v13;
  v15 = *a4;
  *(_DWORD *)(a1 + 44) = v14;
  *(_OWORD *)(a1 + 28) = v15;
  *(_QWORD *)(a1 + 48) = *a7;
  *(_DWORD *)(a1 + 56) = v12;
  v16 = (__int64 *)(a1 + 64);
  *v16 = *a9;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::InternalAddRef(v16);
  return a1;
}
