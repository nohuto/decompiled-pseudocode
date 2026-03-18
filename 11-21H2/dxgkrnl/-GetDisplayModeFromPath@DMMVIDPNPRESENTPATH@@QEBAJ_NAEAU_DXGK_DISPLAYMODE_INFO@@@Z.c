/*
 * XREFs of ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C01E76A8
 * Callers:
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C01E7604 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0010B2C (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0011EA0 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C01BE2E0 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x1C01E78C0 (-DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
        DMMVIDPNPRESENTPATH *this,
        char a2,
        struct _D3DDDI_RATIONAL *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rbp
  int v13; // r13d
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  int v18; // r12d
  int v19; // ecx
  UINT Numerator; // edx
  int v21; // eax
  unsigned int v22; // edx
  struct _D3DDDI_RATIONAL v23; // rax
  unsigned int v24; // ebx
  __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v27; // [rsp+70h] [rbp+8h]
  struct _D3DDDI_RATIONAL v28; // [rsp+70h] [rbp+8h]
  __int64 v30; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 11);
  v6 = *(_QWORD *)(v3 + 40);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    v6 = *(_QWORD *)(v3 + 40);
  }
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v6 + 64) + 48);
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *(_QWORD *)(v7 + 8);
  }
  v9 = *((_QWORD *)this + 11);
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v10 + 96), 1u);
    v11 = *(_QWORD *)(v9 + 104);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = *(_DWORD **)(v11 + 144);
  v26[0] = v11;
  if ( v12 )
  {
    v13 = v12[18];
    if ( v13 == 2 )
      WdLogSingleEntry0(1LL);
    v14 = *((_QWORD *)this + 12);
    v15 = *(_QWORD *)(v14 + 104);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
      v16 = *(_QWORD *)(v14 + 104);
    }
    else
    {
      v16 = 0LL;
    }
    v30 = v16;
    v17 = *(_QWORD *)(v16 + 144);
    if ( v17
      && (v27 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)this + 29)),
          DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v27))
      && (v18 = *((_DWORD *)this + 28), DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, v18)) )
    {
      v19 = 16;
      Numerator = a3[5].Numerator;
      a3->Numerator = v12[19];
      a3->Denominator = v12[20];
      a3[1].Numerator = v12[24];
      v21 = 0;
      if ( (unsigned int)(v13 - 3) > 1 )
        v19 = 0;
      v22 = v19 & 0xFFFFFFDF | Numerator & 0xFFFFFFCF;
      if ( v13 == 4 )
        v21 = 32;
      a3[5].Numerator = v21 | v22;
      a3[2] = *(struct _D3DDDI_RATIONAL *)(v17 + 152);
      a3[3].Numerator = (int)(*(_DWORD *)(v17 + 120) << 29) >> 29;
      a3[3].Denominator = v27;
      ConvertDMMScalingToGdiScaling(v18, &a3[4]);
      v23 = *(struct _D3DDDI_RATIONAL *)(v17 + 92);
      if ( ((*(_DWORD *)(v17 + 120) >> 3) & 0x3F) != 0 )
      {
        v28.Numerator = *(_QWORD *)(v17 + 92);
        v28.Denominator = ((*(_DWORD *)(v17 + 120) >> 3) & 0x3F) * v23.Denominator;
        v23 = v28;
      }
      a3[7] = v23;
      a3[8] = *(struct _D3DDDI_RATIONAL *)(v17 + 144);
      a3[9].Numerator = *(_DWORD *)(v17 + 160);
      a3[1].Denominator = DmmMapVSyncFromRationalToInteger(
                            a3 + 2,
                            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v17 + 120) << 29) >> 29),
                            0LL);
      if ( a2 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 112LL) )
          a3[9].Denominator = ADAPTER_DISPLAY::DetermineHdrPixelFormatFromColorSpace(v8, *(unsigned int *)(v17 + 136));
        else
          a3[9].Denominator = 0;
      }
      v24 = 0;
    }
    else
    {
      v24 = 1075708679;
      WdLogSingleEntry2(2LL, this, 1075708679LL);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v30, 0LL);
  }
  else
  {
    v24 = 1075708679;
    WdLogSingleEntry2(2LL, this, 1075708679LL);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v26, 0LL);
  return v24;
}
