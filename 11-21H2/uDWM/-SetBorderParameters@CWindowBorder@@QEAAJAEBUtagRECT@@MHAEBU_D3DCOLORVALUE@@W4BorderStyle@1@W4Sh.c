/*
 * XREFs of ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x180035748
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180038698 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x18002746C (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800361F4 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x180037704 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBorder::SetBorderParameters(
        __int64 a1,
        struct tagPOINT *a2,
        float a3,
        int a4,
        float *a5,
        int a6,
        int a7)
{
  int v9; // edx
  float *v10; // rax
  int v11; // ecx
  CVisual *v12; // rcx
  __int64 v13; // rdx
  __int128 v15; // xmm0
  struct Windows::UI::Composition::ISpriteVisual *v16; // rdx
  int v17; // eax
  unsigned int v18; // esi
  std::_Ref_count_base *v19[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct tagPOINT v21; // [rsp+50h] [rbp+8h] BYREF

  v9 = a6;
  v10 = a5;
  v11 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) != 0 ? a7 : 0;
  if ( a3 == *(float *)(a1 + 320)
    && a4 == *(_DWORD *)(a1 + 324)
    && *a5 == *(float *)(a1 + 332)
    && a5[1] == *(float *)(a1 + 336)
    && a5[2] == *(float *)(a1 + 340)
    && a5[3] == *(float *)(a1 + 344)
    && a6 == *(_DWORD *)(a1 + 348)
    && v11 == *(_DWORD *)(a1 + 328) )
  {
    goto LABEL_9;
  }
  *(float *)(a1 + 320) = a3;
  *(_DWORD *)(a1 + 324) = a4;
  v15 = *(_OWORD *)v10;
  *(_DWORD *)(a1 + 348) = v9;
  *(_DWORD *)(a1 + 328) = v11;
  *(_OWORD *)(a1 + 332) = v15;
  *(_OWORD *)v19 = 0LL;
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(a1 + 288, v19);
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
  v16 = *(struct Windows::UI::Composition::ISpriteVisual **)(a1 + 280);
  if ( !v16 || (v17 = CWindowBorder::CreateAndAttachBorderBrush((CWindowBorder *)a1, v16), v18 = v17, v17 >= 0) )
  {
LABEL_9:
    v12 = *(CVisual **)(a1 + 248);
    *(_OWORD *)(a1 + 304) = *(_OWORD *)&a2->x;
    if ( v12 )
    {
      v21 = *a2;
      CVisual::SetOffset(v12, &v21);
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) + 16LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 16) + 360LL))(
        *(_QWORD *)(v13 + 16),
        *(unsigned int *)(v13 + 24));
      CWindowBorder::SetClipRectangle(
        (CWindowBorder *)a1,
        *(struct CRectangleGeometryProxy **)(a1 + 264),
        (const struct tagRECT *)a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x281,
      (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v17);
    return v18;
  }
}
