/*
 * XREFs of ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038698
 * Callers:
 *     ?CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180038780 (-CloneVisualTree@CWindowBorder@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x180035748 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180037568 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowBorder::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bp
  int v6; // esi
  int v7; // r8d
  int BorderStructure; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)a2, a3);
  if ( v6 < 0 )
  {
    v11 = 543LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v7 = *(_DWORD *)(a1 + 348);
  if ( (v3 & 8) != 0 )
    v7 = 1;
  v6 = CWindowBorder::SetBorderParameters(
         a2,
         (struct tagPOINT *)(a1 + 304),
         *(float *)(a1 + 320),
         *(_DWORD *)(a1 + 324),
         (float *)(a1 + 332),
         v7,
         *(_DWORD *)(a1 + 328));
  if ( v6 < 0 )
  {
    v11 = 558LL;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(a1 + 256) )
    Microsoft::WRL::ComPtr<CVisual>::operator=((CBaseObject **)(a2 + 256), **(volatile signed __int32 ***)(a2 + 48));
  if ( !*(_QWORD *)(a1 + 248) )
    return 0LL;
  if ( *(_QWORD *)(a2 + 248) )
    return 0LL;
  BorderStructure = CWindowBorder::CreateBorderStructure((CWindowBorder *)a2);
  v9 = BorderStructure;
  if ( BorderStructure >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE0,
    (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)BorderStructure);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x239,
    (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)v9);
  return v9;
}
