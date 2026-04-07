/*
 * XREFs of ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180101EE0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000A3A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x1800E41C4 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180103CE0 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::AddProjectedShadowCaster(CWindowList *this, HWND a2, void *a3, void *a4)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v9; // ebx
  struct CProjectedShadowScene *v10; // rdi
  int ProjectedShadowSceneForDesktop; // eax
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-20h]
  struct CProjectedShadowScene *v15; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+38h] [rbp-8h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v15);
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v10 = v15;
    if ( !v15 )
      goto LABEL_13;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       this,
                                       *((_QWORD *)v10 + 17),
                                       a3 != 0LL,
                                       &v15);
    v9 = ProjectedShadowSceneForDesktop;
    if ( ProjectedShadowSceneForDesktop >= 0 )
    {
      if ( !v15 )
      {
        v9 = -2147019873;
        v14 = 1395;
        v12 = -2147019873;
        goto LABEL_11;
      }
      ProjectedShadowSceneForDesktop = CTopLevelWindow::AddProjectedShadowCaster(
                                         *((CTopLevelWindow **)v10 + 55),
                                         (CProjectedShadowScene::CProjectedShadowSceneInstance **)v15,
                                         a3,
                                         a4);
      v9 = ProjectedShadowSceneForDesktop;
      if ( ProjectedShadowSceneForDesktop >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
        goto LABEL_13;
      }
      v14 = 1391;
    }
    else
    {
      v14 = 1388;
    }
    v12 = ProjectedShadowSceneForDesktop;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v14);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x567u);
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v9;
}
