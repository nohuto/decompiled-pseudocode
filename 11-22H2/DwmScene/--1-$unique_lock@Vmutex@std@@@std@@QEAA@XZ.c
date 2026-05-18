/*
 * XREFs of ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 *     ?SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ @ 0x1800369E0 (-SendPerformanceSummaryTimer@Engine@1Spectre@@IEAAXXZ.c)
 *     ??1Display@Engine@Spectre@@QEAA@XZ @ 0x1800572C4 (--1Display@Engine@Spectre@@QEAA@XZ.c)
 *     ?RenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800581C0 (-RenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z @ 0x180058314 (-SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z.c)
 *     ?WaitForPresent@Display@Engine@Spectre@@QEAAXXZ @ 0x1800583DC (-WaitForPresent@Display@Engine@Spectre@@QEAAXXZ.c)
 *     ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0 (-CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRe.c)
 *     ?CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@AEAVFrameBuffer@34@@Z @ 0x1800C5080 (-CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVI.c)
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 *     ?UpdateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXMMMM@Z @ 0x1800CB0F0 (-UpdateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXMMMM@Z.c)
 *     ?lock@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0D84 (-lock@SharedMutex@Utils@Spectre@@QEAAXXZ.c)
 *     ?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0E04 (-lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ.c)
 *     _Spectre::DeleteDevice::Engine::DeleteDevice_::_1_::dtor$11 @ 0x1800E5B2D (_Spectre--DeleteDevice--Engine--DeleteDevice_--_1_--dtor$11.c)
 *     _Spectre::Engine::D3D11::RenderOutputD3D11::Present_::_1_::dtor$0 @ 0x1800E5F4B (_Spectre--Engine--D3D11--RenderOutputD3D11--Present_--_1_--dtor$0.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::CopyBackBufferPixels_::_1_::dtor$1 @ 0x1800F1694 (_Spectre--Engine--D3D11--RenderDeviceD3D11--CopyBackBufferPixels_--_1_--dtor$1.c)
 *     _Spectre::Engine::D3D11::RenderDeviceD3D11::CopyRenderTargetPixels_::_1_::dtor$0 @ 0x1800F16CA (_Spectre--Engine--D3D11--RenderDeviceD3D11--CopyRenderTargetPixels_--_1_--dtor$0.c)
 *     _Spectre::Engine::D3D11::RenderOutputD3D11::UpdateRenderTarget_::_1_::dtor$1 @ 0x1800F1898 (_Spectre--Engine--D3D11--RenderOutputD3D11--UpdateRenderTarget_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

int __fastcall std::unique_lock<std::mutex>::~unique_lock<std::mutex>(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return _Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
