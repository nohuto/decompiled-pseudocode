/*
 * XREFs of ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800CA898
 * Callers:
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800CAAD0 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800CB438 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcmp_0 @ 0x18006634C (memcmp_0.c)
 *     ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800AD388 (-Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ??$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x1800AD590 (--$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceP.c)
 *     ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z @ 0x1800CCD38 (-SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetColorEffect(CMagnifier *this, const struct MilColorTransform *a2)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  CColorTransformResourceProxy **v7; // r14
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v3 = 0;
  if ( !memcmp_0(&g_MilColorTransfIdentity, a2, 0x64uLL) )
  {
    v5 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), 0LL);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xAAu);
      return v3;
    }
    *(_OWORD *)((char *)this + 68) = g_MilColorTransfIdentity;
    *(_OWORD *)((char *)this + 84) = xmmword_18012AF90;
    *(_OWORD *)((char *)this + 100) = xmmword_18012AFA0;
    *(_OWORD *)((char *)this + 116) = xmmword_18012AFB0;
    *(_OWORD *)((char *)this + 132) = xmmword_18012AFC0;
    *(_OWORD *)((char *)this + 148) = xmmword_18012AFD0;
    v6 = 1065353216;
    goto LABEL_15;
  }
  if ( memcmp_0((char *)this + 68, a2, 0x64uLL) )
  {
    v7 = (CColorTransformResourceProxy **)((char *)this + 40);
    if ( *((_QWORD *)this + 5)
      || (v8 = CCompositor::CreateProxy<CColorTransformResourceProxy>(
                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                 (CBaseObject **)this + 5),
          v3 = v8,
          v8 >= 0) )
    {
      v9 = CColorTransformResourceProxy::Update(*v7, a2);
      v3 = v9;
      if ( v9 >= 0 )
      {
        v10 = CMagnifierRenderTargetProxy::SetColorTransform(*((CMagnifierRenderTargetProxy **)this + 3), *v7);
        v3 = v10;
        if ( v10 >= 0 )
        {
          *(_OWORD *)((char *)this + 68) = *(_OWORD *)a2;
          *(_OWORD *)((char *)this + 84) = *((_OWORD *)a2 + 1);
          *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 2);
          *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 3);
          *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 4);
          *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 5);
          v6 = *((_DWORD *)a2 + 24);
LABEL_15:
          *((_DWORD *)this + 41) = v6;
          return v3;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xBAu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB8u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xB5u);
    }
  }
  return v3;
}
