/*
 * XREFs of ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC
 * Callers:
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C000AA1C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C000C9E4 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000CE0C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00162B0 (NtDCompositionGetFrameStatistics.c)
 *     DCompositionIsShellProcess @ 0x1C0071E50 (DCompositionIsShellProcess.c)
 *     DCompositionDwmInitialize @ 0x1C0080360 (DCompositionDwmInitialize.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00805D0 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     NtDCompositionGetTargetStatistics @ 0x1C0080B80 (NtDCompositionGetTargetStatistics.c)
 *     NtDCompositionGetStatistics @ 0x1C0080E30 (NtDCompositionGetStatistics.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00951A0 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00951F4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0095358 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00953E0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C00AC3A0 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     DCompositionForceRender @ 0x1C00D27C0 (DCompositionForceRender.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00DD2FC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     DCompositionDDAChange @ 0x1C0210E80 (DCompositionDDAChange.c)
 *     NtDCompositionBoostCompositorClock @ 0x1C02111C0 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C02112B0 (NtDCompositionCommitSynchronizationObject.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C0211480 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0211AD0 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionGetFrameId @ 0x1C0211BC0 (NtDCompositionGetFrameId.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x1C0211F70 (NtDCompositionSetBlurredWallpaperSurface.c)
 *     NtDCompositionWaitForCompositorClock @ 0x1C0212230 (NtDCompositionWaitForCompositorClock.c)
 *     NtDesktopCaptureBits @ 0x1C02123B0 (NtDesktopCaptureBits.c)
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Release(DirectComposition::CConnection *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    DirectComposition::CConnection::`scalar deleting destructor'(this, a2);
  return v2;
}
