/*
 * XREFs of ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VRenderDeviceGeneric@Engine@Spectre@@$0A@@?$shared_ptr@VRenderDeviceGeneric@Engine@Spectre@@@std@@QEAA@PEAVRenderDeviceGeneric@Engine@Spectre@@@Z @ 0x180015530 (--$-0VRenderDeviceGeneric@Engine@Spectre@@$0A@@-$shared_ptr@VRenderDeviceGeneric@Engine@Spectre@.c)
 *     ??1DeviceDescription@Engine@Spectre@@QEAA@XZ @ 0x1800179FC (--1DeviceDescription@Engine@Spectre@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@RenderDevice@Engine@Spectre@@MEAAXAEBUDeviceDescription@23@AEBUOutputDescription@23@@Z @ 0x180026AC0 (-Initialize@RenderDevice@Engine@Spectre@@MEAAXAEBUDeviceDescription@23@AEBUOutputDescription@23@.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ??0RenderDeviceGeneric@Engine@Spectre@@QEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x1800526F0 (--0RenderDeviceGeneric@Engine@Spectre@@QEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spect.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Engine::Engine::CreateDevice<Spectre::Engine::RenderDeviceGeneric>(
        Spectre::Engine::Engine *this,
        __int64 a2,
        const struct Spectre::Engine::DeviceDescription *a3,
        const struct Spectre::Engine::OutputDescription *a4)
{
  void *v8; // rax
  Spectre::Engine::RenderDeviceGeneric *v9; // r10
  Spectre::Engine::RenderDevice *v10; // r14
  _QWORD *v11; // rax
  Spectre::Engine::RenderDevice *v13[2]; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v14[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v16[24]; // [rsp+58h] [rbp-18h] BYREF

  v8 = operator new(0x1028uLL);
  if ( v8 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      v14,
      (_QWORD *)this + 58);
    v8 = (void *)Spectre::Engine::RenderDeviceGeneric::RenderDeviceGeneric(v9);
  }
  std::shared_ptr<Spectre::Engine::RenderDeviceGeneric>::shared_ptr<Spectre::Engine::RenderDeviceGeneric>(
    v13,
    (__int64)v8);
  v10 = v13[0];
  Spectre::Engine::Lockable::GetExclusiveLock((char *)v13[0] + 24, v16);
  Spectre::Engine::RenderDevice::Initialize(v10, a3, a4);
  std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(v14, v13);
  Spectre::Engine::Engine::CreateDeviceInternal(this);
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  *(_OWORD *)v14 = 0LL;
  v11 = std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
          &v15,
          v13);
  Spectre::Engine::Engine::InvokeCallback(this, 7LL, v11, v14);
  *(_QWORD *)a2 = v10;
  *(Spectre::Engine::RenderDevice **)(a2 + 8) = v13[1];
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v16);
  Spectre::Engine::DeviceDescription::~DeviceDescription(a3);
  return a2;
}
