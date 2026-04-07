/*
 * XREFs of ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1801093D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x1800AD908 (--$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCa.c)
 *     ?SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800C6374 (-SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_.c)
 *     ?GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800E5D3C (-GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::CaptureWindow(CWindowList *this, struct IDwmWindow *a2, float a3)
{
  CBaseObject *v5; // rbx
  int SyncedWindowData; // eax
  unsigned int v7; // edi
  int v8; // r9d
  CTopLevelWindow *v9; // rcx
  const struct CVisualProxy *CanvasRootVisualProxy; // rsi
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-68h]
  CLegacyVisualCaptureRenderTargetProxy *v14; // [rsp+50h] [rbp-38h] BYREF
  struct CWindowData *v15; // [rsp+58h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp-28h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v13 = 6293;
LABEL_3:
    v8 = SyncedWindowData;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v13);
    goto LABEL_13;
  }
  if ( !v15
    || (v9 = (CTopLevelWindow *)*((_QWORD *)v15 + 55)) == 0LL
    || (CanvasRootVisualProxy = CTopLevelWindow::GetCanvasRootVisualProxy(v9)) == 0LL )
  {
    v7 = -2147024890;
    v13 = 6299;
    v8 = -2147024890;
    goto LABEL_12;
  }
  v11 = CCompositor::CreateProxy<CLegacyVisualCaptureRenderTargetProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
          &v14);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x189Cu);
    v5 = v14;
    goto LABEL_13;
  }
  v5 = v14;
  SyncedWindowData = CLegacyVisualCaptureRenderTargetProxy::SyncCaptureBits(v14, CanvasRootVisualProxy, a3);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v13 = 6301;
    goto LABEL_3;
  }
LABEL_13:
  if ( v5 )
    CBaseObject::Release(v5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v7;
}
