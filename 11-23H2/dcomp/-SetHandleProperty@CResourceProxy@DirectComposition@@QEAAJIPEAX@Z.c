/*
 * XREFs of ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C
 * Callers:
 *     ?CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnknown@@@Z @ 0x180004714 (-CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnk.c)
 *     ?Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z @ 0x180013C00 (-Reclaim@CAtlasSurfacePool@DirectComposition@@QEAAJPEA_N@Z.c)
 *     ?CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x180035574 (-CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z.c)
 *     ?Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039250 (-Hide@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?SetViewData@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAX0@Z @ 0x1800E7930 (-SetViewData@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAX0@Z.c)
 *     ?Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@_NIAEBU_GUID@@I@Z @ 0x1800E7D48 (-Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMA.c)
 *     ?CreateSurfaceFromHandle@CDevice@DirectComposition@@UEAAJPEAXPEAPEAUIUnknown@@@Z @ 0x1800F0A70 (-CreateSurfaceFromHandle@CDevice@DirectComposition@@UEAAJPEAXPEAPEAUIUnknown@@@Z.c)
 *     ?Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x1800F2080 (-Initialize@CDDisplayRenderTargetProxy@DirectComposition@@QEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DX.c)
 *     ?SetFlipManager@?$CCaptureRenderTargetProxyBase@UIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@DirectComposition@@UEAAJPEAX@Z @ 0x1800F52B0 (-SetFlipManager@-$CCaptureRenderTargetProxyBase@UIDCompositionVirtualMonitorCaptureRenderTargetI.c)
 *     ?SetInputSink@CInteractionProxy@DirectComposition@@UEAAJPEAX@Z @ 0x1800F9030 (-SetInputSink@CInteractionProxy@DirectComposition@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z @ 0x18001A2D4 (-ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CResourceProxy::SetHandleProperty(
        DirectComposition::CResourceProxy *this,
        unsigned int a2,
        void *a3)
{
  struct DirectComposition::CProxyTable *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned int v8; // edi
  DirectComposition::CDeviceLock *v9; // rsi
  unsigned int v10; // ebx

  v5 = DirectComposition::CProxyTable::FromProxy((void *)(((unsigned __int64)this - 8) & -(__int64)(this != 0LL)));
  if ( v5 )
  {
    v7 = *(_QWORD *)v5;
    v8 = *(_DWORD *)(v6 + 12);
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
  }
  v9 = (DirectComposition::CDeviceLock *)(v7 + 96);
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(v7 + 96));
  v10 = DirectComposition::CDevice::ResourceSetHandleProperty((DirectComposition::CDevice *)v7, v8, a2, a3);
  if ( v9 )
    DirectComposition::CDeviceLock::Leave(v9);
  return v10;
}
