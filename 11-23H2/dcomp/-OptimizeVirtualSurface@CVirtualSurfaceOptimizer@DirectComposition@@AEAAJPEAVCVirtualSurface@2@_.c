/*
 * XREFs of ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ @ 0x18002E8C4 (-UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?SampleFragmentationState@CVirtualSurface@DirectComposition@@QEAAXPEAUVirtualSurfaceFragmentationState@2@@Z @ 0x180037E64 (-SampleFragmentationState@CVirtualSurface@DirectComposition@@QEAAXPEAUVirtualSurfaceFragmentatio.c)
 *     ?PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z @ 0x180037F58 (-PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z.c)
 *     ?SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ @ 0x180038200 (-SynchronizeMarshalerState@CVirtualSurface@DirectComposition@@QEAAJXZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800E9380 (McTemplateU0x_EventWriteTransfer.c)
 *     ?ReclumpVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z @ 0x1800FE7E4 (-ReclumpVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1800FE8DC (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfaceOptimizer::OptimizeVirtualSurface(
        DirectComposition::CVirtualSurfaceOptimizer *this,
        struct DirectComposition::CVirtualSurface *a2,
        char a3,
        bool *a4)
{
  __int64 v8; // rax
  int updated; // edi
  int v10; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  bool v15; // al
  _BYTE v16[16]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]
  unsigned int v19; // [rsp+40h] [rbp-28h]

  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    (DirectComposition::SwapDeviceContextState *)v16,
    (const struct DirectComposition::CDxDevice *)((*((_QWORD *)a2 + 13) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)a2 + 13) >> 64)));
  v8 = *((_QWORD *)a2 + 13);
  *a4 = 0;
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(v8 + 24) + 96LL));
  updated = DirectComposition::CDevice::UpdateLastConfirmedBatchId(*(DirectComposition::CDevice **)(*((_QWORD *)a2 + 13)
                                                                                                  + 24LL));
  if ( updated >= 0 && DirectComposition::g_VSAllowPushDown )
    updated = DirectComposition::CVirtualSurfaceOptimizer::PushDownClumps(this, a2);
  DirectComposition::CVirtualSurface::SampleFragmentationState(
    a2,
    (struct DirectComposition::VirtualSurfaceFragmentationState *)&v17);
  if ( a3 || v19 >= 8 )
  {
    v12 = v19;
    *((_OWORD *)a2 + 17) = 0LL;
    *((_QWORD *)a2 + 36) = 0LL;
    v13 = v17 / v12;
    v14 = v18 / v12;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      McTemplateU0qq_EventWriteTransfer(v12, v18 % v12, (unsigned int)v13, (unsigned int)v14);
    v15 = (unsigned int)v14 < 0x40000 && *((_DWORD *)a2 + 62) > 8u;
    if ( (unsigned int)v13 < 0x3C || v15 )
    {
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        McTemplateU0x_EventWriteTransfer(v12, &DCOMPEVENT_RECLUMP_START, a2);
      if ( updated >= 0 )
        updated = DirectComposition::CVirtualSurfaceOptimizer::ReclumpVirtualSurface(this, a2);
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        McTemplateU0x_EventWriteTransfer(v12, &DCOMPEVENT_RECLUMP_STOP, a2);
    }
    *a4 = 1;
  }
  v10 = DirectComposition::CVirtualSurface::SynchronizeMarshalerState(a2);
  if ( updated >= 0 )
    updated = v10;
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v16);
  return (unsigned int)updated;
}
