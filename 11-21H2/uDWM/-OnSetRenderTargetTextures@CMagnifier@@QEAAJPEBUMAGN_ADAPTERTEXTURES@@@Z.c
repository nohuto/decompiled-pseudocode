/*
 * XREFs of ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800C6334
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800C6CF0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800C5C10 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800C60F8 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800C85E8 (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z.c)
 *     ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z @ 0x1800C8670 (-SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetRenderTargetTextures(CMagnifier *this, const struct MAGN_ADAPTERTEXTURES *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-98h]
  _OWORD v24[6]; // [rsp+30h] [rbp-88h] BYREF
  int v25; // [rsp+90h] [rbp-28h]

  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)this + 42);
  if ( *(_DWORD *)a2 <= v5 )
  {
    if ( v4 > 6 )
      v4 = 6;
    *((_DWORD *)this + 42) = v4;
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 2);
    v19 = *((_DWORD *)a2 + 3);
    v20 = 0;
    for ( *((_DWORD *)this + 44) = v19;
          v20 < *((_DWORD *)this + 42);
          *(_OWORD *)((char *)this + v21 + 200) = *(_OWORD *)((char *)a2 + v21 + 32) )
    {
      v21 = v20++;
      v21 *= 32LL;
      *(_OWORD *)((char *)this + v21 + 184) = *(_OWORD *)((char *)a2 + v21 + 16);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL)
                                                                                         + 672LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
            a2);
    v13 = v15;
    if ( v15 < 0 )
    {
      v23 = 398;
      goto LABEL_28;
    }
  }
  else
  {
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 41);
      v7 = *(_OWORD *)((char *)this + 84);
      v24[0] = *(_OWORD *)((char *)this + 68);
      v8 = *(_OWORD *)((char *)this + 100);
      v24[1] = v7;
      v9 = *(_OWORD *)((char *)this + 116);
      v24[2] = v8;
      v10 = *(_OWORD *)((char *)this + 132);
      v24[3] = v9;
      v11 = *(_OWORD *)((char *)this + 148);
      v24[4] = v10;
      v24[5] = v11;
      v25 = v6;
      v12 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)&g_MilColorTransfIdentity);
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x15Cu);
        return v13;
      }
      v14 = CMagnifierRenderTargetProxy::SetTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
      v13 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x15Eu);
        return v13;
      }
      v15 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
      v13 = v15;
      if ( v15 < 0 )
      {
        v23 = 352;
LABEL_28:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, v23);
        return v13;
      }
      v16 = (CBaseObject *)*((_QWORD *)this + 3);
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *((_QWORD *)this + 3) = 0LL;
      }
      *((_DWORD *)this + 42) = 0;
      v15 = CMagnifier::Initialize((CBaseObject **)this);
      v13 = v15;
      if ( v15 < 0 )
      {
        v23 = 357;
        goto LABEL_28;
      }
      v15 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)v24);
      v13 = v15;
      if ( v15 < 0 )
      {
        v23 = 358;
        goto LABEL_28;
      }
      v4 = *(_DWORD *)a2;
    }
    if ( v4 > 6 )
      v4 = 6;
    v17 = 0;
    *((_DWORD *)this + 42) = v4;
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 43) = *((_DWORD *)a2 + 2);
    for ( *((_DWORD *)this + 44) = *((_DWORD *)a2 + 3);
          v17 < *((_DWORD *)this + 42);
          *(_OWORD *)((char *)this + v18 + 200) = *(_OWORD *)((char *)a2 + v18 + 32) )
    {
      v18 = v17++;
      v18 *= 32LL;
      *(_OWORD *)((char *)this + v18 + 184) = *(_OWORD *)((char *)a2 + v18 + 16);
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL)
                                                                                                 + 648LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL),
            *((_QWORD *)this + 7),
            a2);
    v13 = v15;
    if ( v15 < 0 )
    {
      v23 = 376;
      goto LABEL_28;
    }
  }
  return v13;
}
