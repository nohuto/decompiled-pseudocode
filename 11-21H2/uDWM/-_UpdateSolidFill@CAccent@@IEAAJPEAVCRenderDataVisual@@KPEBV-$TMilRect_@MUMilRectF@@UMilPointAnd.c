/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180047980
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180047880 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18009873C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x180098D74 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180047B34 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x180097A50 (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, const __m128i *a4, float a5)
{
  __m128i v8; // xmm6
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // rdx
  unsigned int v15; // edi
  __int128 v16; // xmm6
  int v17; // eax
  float v18; // xmm3_4
  int v19; // eax
  float v20; // xmm2_4
  __int64 v21; // rdx
  struct CSolidRectangleInstruction *v22; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-38h] BYREF
  float v24[6]; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v22 = 0LL;
  v8 = _mm_loadu_si128(a4);
  v9 = CRenderDataVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v21 = 924LL;
    goto LABEL_31;
  }
  v24[0] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v24[1] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v24[2] = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v11 = a1[73];
  if ( (v11 & 0x800) != 0 )
    a5 = 0.0;
  v24[3] = a5;
  if ( (v11 & 4) == 0 )
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
    v9 = CSolidRectangleInstruction::Create(&v22);
    v10 = v9;
    if ( v9 < 0 )
    {
      v21 = 989LL;
    }
    else
    {
      *((__m128i *)v22 + 2) = v8;
      *((_OWORD *)v22 + 1) = *(_OWORD *)v24;
      v9 = CRenderDataVisual::AddInstruction(a2, v22);
      v10 = v9;
      if ( v9 >= 0 )
        goto LABEL_8;
      v21 = 992LL;
    }
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  if ( (v11 & 8) != 0 )
  {
    v23 = 0LL;
    v15 = 0;
    v16 = *(_OWORD *)v24;
    while ( CDesktopManager::GetMonitorRectAtIndex(v15, &v23) )
    {
      if ( v23.left || v23.top )
      {
        v17 = 0;
        if ( v23.bottom - v23.top >= 0 )
          v17 = v23.bottom - v23.top;
        v18 = (float)v17;
        v19 = 0;
        if ( v23.right - v23.left >= 0 )
          v19 = v23.right - v23.left;
        v20 = (float)(v23.top - a1[157]);
        v24[0] = (float)(v23.left - a1[156]);
        v24[1] = v20;
        v24[2] = (float)v19 + v24[0];
        v24[3] = v20 + v18;
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
        v9 = CSolidRectangleInstruction::Create(&v22);
        v10 = v9;
        if ( v9 < 0 )
        {
          v21 = 959LL;
          goto LABEL_31;
        }
        *((_OWORD *)v22 + 2) = *(_OWORD *)v24;
        *((_OWORD *)v22 + 1) = v16;
        v9 = CRenderDataVisual::AddInstruction(a2, v22);
        v10 = v9;
        if ( v9 < 0 )
        {
          v21 = 962LL;
          goto LABEL_31;
        }
      }
      ++v15;
    }
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
  v9 = CSolidRectangleInstruction::Create(&v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    v21 = 973LL;
    goto LABEL_31;
  }
  *((_OWORD *)v22 + 2) = _xmm;
  *((_OWORD *)v22 + 1) = *(_OWORD *)v24;
  v9 = CRenderDataVisual::AddInstruction(a2, v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    v21 = 976LL;
    goto LABEL_31;
  }
LABEL_7:
  LOBYTE(v13) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 5)
                                                                               + 16LL)
                                                                 + 160LL))(
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
    v13,
    0LL,
    0LL,
    0);
LABEL_8:
  v10 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
  return v10;
}
