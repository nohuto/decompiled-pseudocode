/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001D898
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18000EAA4 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x18001370C (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18001373C (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001DAC4 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800BF0D0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800C84C8 (-UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CAB6C (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::SettingsChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *a2)
{
  int updated; // eax
  unsigned int v5; // r15d
  __int64 *v6; // r13
  struct _RTL_GENERIC_TABLE *v7; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  char *v10; // r14
  char *v11; // rbx
  CProjectedShadowScene *v12; // rbx
  CGlobalLightSet *v13; // rbx
  __int64 v14; // rcx
  MagnifierExperienceHelper *v15; // rcx
  CTopLevelWindow *v16; // rcx
  __int64 v17; // rbp
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rbp
  unsigned int v19; // edx
  int v21; // eax
  PVOID RestartKey; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+88h] [rbp+20h] BYREF

  RestartKey = 0LL;
  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CDesktopManager::UpdateSettings(CDesktopManager::s_pDesktopManagerInstance, *((unsigned int *)a2 + 1));
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1AFFu);
  }
  else
  {
    if ( (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 56) + 48LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56));
    v6 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
    v7 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    while ( 1 )
    {
      v8 = RtlEnumerateGenericTableWithoutSplaying(v7, &RestartKey);
      v9 = v8;
      if ( !v8 )
        break;
      v10 = (char *)(v8 + 10);
      v11 = (char *)v8[10];
      if ( v11 != (char *)(v8 + 10) )
      {
        do
        {
          v16 = (CTopLevelWindow *)*((_QWORD *)v11 + 55);
          if ( v16 )
            CTopLevelWindow::OnSettingsUpdated(v16, *((_DWORD *)a2 + 1));
          v17 = *((_QWORD *)v11 + 61);
          if ( v17 )
          {
            CTopLevelWindow::OnSettingsUpdated(*(CTopLevelWindow **)(v17 + 88), *((_DWORD *)a2 + 1));
            v21 = CVisual::RenderRecursive(*(CVisual **)(v17 + 88));
            if ( v21 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x29Cu);
          }
          if ( CWindowData::IsImmersiveWindow((CWindowData *)v11) )
          {
            if ( *((_DWORD *)v11 + 130) )
            {
              IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                                      (CImmersiveIconicBitmapRegistry *)v6,
                                      *((HWND *)v11 + 5));
              v23 = (struct _RTL_CRITICAL_SECTION *)IconicResourceNoRef;
              DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(v6 + 2, &v23);
              if ( IconicResourceNoRef )
                CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(
                  IconicResourceNoRef,
                  v19);
            }
          }
          v11 = *(char **)v11;
        }
        while ( v11 != v10 );
      }
      v12 = (CProjectedShadowScene *)v9[6];
      if ( v12 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        v23 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CProjectedShadowScene::PositionProjectedShadowReceiverVisual(v12);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
      }
      v13 = (CGlobalLightSet *)v9[7];
      if ( v13 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        v23 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CGlobalLightSet::PositionCoordinateSpaceVisual(v13);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
      }
      v14 = v9[2];
      if ( v14 && (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      {
        v15 = *(MagnifierExperienceHelper **)(v14 + 160);
        if ( v15 )
          MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(v15);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return v5;
}
