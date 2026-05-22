/*
 * XREFs of ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110
 * Callers:
 *     ??$MakeAndInitialize2@VSharedLight@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedLight@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x180007888 (--$MakeAndInitialize2@VSharedLight@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEA.c)
 *     ?RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z @ 0x180058CBC (-RuntimeClassInitialize@Visual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_NPEAX@Z.c)
 *     ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18005D944 (-RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z.c)
 *     ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18008ABA4 (--$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@_ea_18008ABA4.c)
 *     ?RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@I_NPEAX@Z @ 0x18015787C (-RuntimeClassInitialize@VisualReference@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345.c)
 *     ?RuntimeClassInitialize@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x180183E6C (-RuntimeClassInitialize@CompositionProjectedShadowCaster@Composition@UI@Windows@@QE_ea_180183E6C.c)
 *     ?RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_NPEAX1@Z @ 0x18018A1F0 (-RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 *     ?RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x180197D74 (-RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x1801983E4 (-RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJP_ea_1801983E4.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80 (-ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ?ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z @ 0x18005B708 (-ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxqttx_EventWriteTransfer @ 0x1800F7268 (McTemplateU0qqxqttx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
        Windows::UI::Composition::ProxyObject *this,
        DirectComposition::CDevice **a2,
        int a3,
        void *a4,
        bool a5)
{
  int v9; // ebx
  int v10; // r9d
  int *v11; // r14
  __int64 v13; // rcx
  int v14; // edi
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // edx

  v9 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(
         this,
         (struct Windows::UI::Composition::Compositor *)a2);
  if ( v9 < 0 )
  {
    v20 = 124;
    goto LABEL_11;
  }
  LOBYTE(v10) = a5;
  v11 = (int *)((char *)this + 128);
  v9 = DirectComposition::CDevice::ChannelOpenSharedResource(a2[57], a4, a3, v10, (unsigned int *)this + 32);
  if ( v9 < 0 )
  {
    v20 = 135;
LABEL_11:
    DoStackCaptureDirect(v9, v20);
    Microsoft::WRL2::ContextRuntimeClass::Dispose(this);
    return (unsigned int)v9;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 1) != 0 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *v11;
    v15 = *v11;
    v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    McTemplateU0qqxqttx_EventWriteTransfer(v19, v18, v17, v14, v15, a3, 0, 1, (char)this);
  }
  if ( (*(unsigned __int8 (__fastcall **)(Windows::UI::Composition::ProxyObject *))(*(_QWORD *)this + 104LL))(this) )
    DirectComposition::CDevice::ResourceSetCallbackId(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *v11,
      *((_DWORD *)this + 30));
  return 0;
}
