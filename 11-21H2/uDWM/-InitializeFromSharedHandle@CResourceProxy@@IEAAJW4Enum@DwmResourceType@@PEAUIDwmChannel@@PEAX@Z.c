/*
 * XREFs of ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x18000D300
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18000D224 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18005EB3C (--$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfac.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x1800A9330 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A9460 (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800A9598 (--$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVC.c)
 *     ??$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemoteAppRenderTargetProxy@@@Z @ 0x1800A96CC (--$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x18000D3A4 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceProxy::InitializeFromSharedHandle(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)a3 + 112LL))(a3, a4, a2, &v11);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xB5u);
  }
  else
  {
    v9 = CResource::WrapExistingResource(a3, v7, v11, a1 + 16);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB7u);
    else
      v8 = 0;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 120LL))(a3);
  return v8;
}
