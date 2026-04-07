/*
 * XREFs of ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1801021E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x1800A879C (--$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCa.c)
 *     ?SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800C17A4 (-SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::CaptureWindow(CWindowList *this, struct IDwmWindow *a2, float a3)
{
  CBaseObject *v5; // rbx
  int SyncedWindowData; // eax
  unsigned int v7; // edi
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rax
  const struct CVisualProxy *v11; // rsi
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-68h]
  CLegacyVisualCaptureRenderTargetProxy *v15; // [rsp+50h] [rbp-38h] BYREF
  struct CWindowData *v16; // [rsp+58h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp-28h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v16);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 6194;
LABEL_3:
    v8 = SyncedWindowData;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v14);
    goto LABEL_14;
  }
  if ( !v16
    || (v9 = *((_QWORD *)v16 + 55)) == 0
    || (v10 = *(_QWORD *)(v9 + 272)) == 0
    || (v11 = *(const struct CVisualProxy **)(v10 + 16)) == 0LL )
  {
    v7 = -2147024890;
    v14 = 6200;
    v8 = -2147024890;
    goto LABEL_13;
  }
  v12 = CCompositor::CreateProxy<CLegacyVisualCaptureRenderTargetProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v15);
  v7 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1839u);
    v5 = v15;
    goto LABEL_14;
  }
  v5 = v15;
  SyncedWindowData = CLegacyVisualCaptureRenderTargetProxy::SyncCaptureBits(v15, v11, a3);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 6202;
    goto LABEL_3;
  }
LABEL_14:
  if ( v5 )
    CBaseObject::Release(v5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v7;
}
