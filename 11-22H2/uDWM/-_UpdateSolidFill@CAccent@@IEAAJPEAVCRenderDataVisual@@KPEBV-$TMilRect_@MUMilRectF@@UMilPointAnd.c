/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800420C0
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800053C8 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800404D0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180041CAC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800A2090 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x1800A0AA0 (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, const __m128i *a4, float a5)
{
  __m128i v8; // xmm6
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int128 v21; // xmm6
  int v22; // eax
  float v23; // xmm3_4
  int v24; // eax
  float v25; // xmm2_4
  int v26; // edi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-50h]
  struct CRenderDataInstruction *v31; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v32; // [rsp+38h] [rbp-38h] BYREF
  float v33[6]; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v31 = 0LL;
  v8 = _mm_loadu_si128(a4);
  v9 = CRenderDataVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 797LL;
    goto LABEL_30;
  }
  v33[0] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v33[1] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v33[2] = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v11 = a1[73];
  if ( (v11 & 0x800) != 0 )
    a5 = 0.0;
  v33[3] = a5;
  if ( (v11 & 4) != 0 )
  {
    if ( (v11 & 8) != 0 )
    {
      v32 = 0LL;
      v20 = 0;
      v21 = *(_OWORD *)v33;
      while ( 1 )
      {
        if ( !CDesktopManager::GetMonitorRectAtIndex(v20, &v32) )
          goto LABEL_11;
        if ( v32.left || v32.top )
        {
          v22 = 0;
          if ( v32.bottom - v32.top >= 0 )
            v22 = v32.bottom - v32.top;
          v23 = (float)v22;
          v24 = 0;
          if ( v32.right - v32.left >= 0 )
            v24 = v32.right - v32.left;
          v25 = (float)(v32.top - a1[147]);
          v33[0] = (float)(v32.left - a1[146]);
          v33[1] = v25;
          v33[2] = (float)v24 + v33[0];
          v33[3] = v25 + v23;
          Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
          v26 = CSolidRectangleInstruction::Create(&v31);
          if ( v26 < 0 )
          {
            v29 = 832LL;
            goto LABEL_27;
          }
          *((_OWORD *)v31 + 2) = *(_OWORD *)v33;
          *((_OWORD *)v31 + 1) = v21;
          v26 = CRenderDataVisual::AddInstruction(a2, v31, v27, v28);
          if ( v26 < 0 )
          {
            v29 = 835LL;
LABEL_27:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)v26,
              v30);
            v10 = v26;
            goto LABEL_7;
          }
        }
        ++v20;
      }
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
    v9 = CSolidRectangleInstruction::Create(&v31);
    v10 = v9;
    if ( v9 < 0 )
    {
      v19 = 846LL;
    }
    else
    {
      *((_OWORD *)v31 + 2) = _xmm;
      *((_OWORD *)v31 + 1) = *(_OWORD *)v33;
      v9 = CRenderDataVisual::AddInstruction(a2, v31, v16, v17);
      v10 = v9;
      if ( v9 >= 0 )
      {
LABEL_11:
        LOBYTE(v18) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 6)
                                                                                     + 24LL)
                                                                       + 160LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL),
          v18,
          0LL,
          0LL,
          0);
        goto LABEL_6;
      }
      v19 = 849LL;
    }
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v9,
      v30);
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
  v9 = CSolidRectangleInstruction::Create(&v31);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 862LL;
    goto LABEL_30;
  }
  *((__m128i *)v31 + 2) = v8;
  *((_OWORD *)v31 + 1) = *(_OWORD *)v33;
  v9 = CRenderDataVisual::AddInstruction(a2, v31, v13, v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 865LL;
    goto LABEL_30;
  }
LABEL_6:
  v10 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v31);
  return v10;
}
