/*
 * XREFs of ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0
 * Callers:
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 *     ?UpdateRenderTarget@RenderDevice@Engine@Spectre@@UEAAXPEAXMMMM@Z @ 0x180027360 (-UpdateRenderTarget@RenderDevice@Engine@Spectre@@UEAAXPEAXMMMM@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180032880 (-ApplySceneStandardContent@Engine@1Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?FrameTick@Engine@1Spectre@@QEAAXXZ @ 0x180033BC4 (-FrameTick@Engine@1Spectre@@QEAAXXZ.c)
 *     ?Initialize@Engine@1Spectre@@IEAAXAEBUEngineDescription@12@@Z @ 0x1800349C0 (-Initialize@Engine@1Spectre@@IEAAXAEBUEngineDescription@12@@Z.c)
 *     ?Shutdown@Engine@1Spectre@@QEAAXXZ @ 0x180036EAC (-Shutdown@Engine@1Spectre@@QEAAXXZ.c)
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z @ 0x180040794 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@@Z.c)
 *     ?CreateInstance@Scene@Engine@Spectre@@SA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4ThreadingMode@Lockable@23@@Z @ 0x180040828 (-CreateInstance@Scene@Engine@Spectre@@SA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@PEAV223@W4T.c)
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0 (-CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRe.c)
 * Callees:
 *     ??0?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@AEAVMutex@Engine@Spectre@@@Z @ 0x180029DF8 (--0-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@AEAVMutex@Engine@Spectre@@@Z.c)
 *     ??4?$atomic@Vid@thread@std@@@std@@QEAA?AVid@thread@1@V231@@Z @ 0x180029F40 (--4-$atomic@Vid@thread@std@@@std@@QEAA-AVid@thread@1@V231@@Z.c)
 */

__int64 __fastcall Spectre::Engine::Lockable::GetExclusiveLock(Spectre::Engine::Mutex *a1, __int64 a2)
{
  _Thrd_id_t v4; // eax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  std::unique_lock<Spectre::Engine::Mutex>::unique_lock<Spectre::Engine::Mutex>(a2, a1);
  v4 = _Thrd_id();
  std::atomic<std::thread::id>::operator=((__int64)a1 + 28, (__int64)&v6, v4);
  return a2;
}
