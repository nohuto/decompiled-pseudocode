/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180039CEC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180017304 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180039B9C (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800C3EE0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x1800C45D4 (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800C488C (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800CCC18 (-UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ.c)
 *     ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CF224 (-PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107060 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::SettingsChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *a2)
{
  int updated; // eax
  unsigned int v5; // r13d
  unsigned int v6; // esi
  struct _RTL_GENERIC_TABLE *v7; // r14
  _QWORD *v8; // rdi
  CImmersiveIconicBitmapRegistry *v9; // r13
  __int64 *v10; // rbx
  CProjectedShadowScene *v11; // rbx
  CGlobalLightSet *v12; // rbx
  __int64 v13; // rcx
  CTopLevelWindow *v15; // rcx
  CTopLevelWindow **v16; // r14
  MagnifierExperienceHelper *v17; // rcx
  int v18; // eax
  CImmersiveIconicBitmapRegistry *IconicResourceNoRef; // r14
  unsigned int v20; // edx
  CImmersiveIconicBitmapRegistry *v21; // [rsp+30h] [rbp-20h] BYREF
  struct _RTL_GENERIC_TABLE *v22; // [rsp+38h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+48h] BYREF
  int v25; // [rsp+A0h] [rbp+50h]
  PVOID RestartKey; // [rsp+A8h] [rbp+58h] BYREF

  RestartKey = 0LL;
  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v24 = *((_DWORD *)a2 + 1);
  updated = CDesktopManager::UpdateSettings(CDesktopManager::s_pDesktopManagerInstance, &v24);
  v5 = updated;
  v25 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1B5Bu, 0LL);
  }
  else
  {
    v6 = v24 & 0x20;
    if ( (v24 & 0x20) != 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58) + 48LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58));
    v21 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    if ( v24 )
    {
      v7 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
      v22 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
      v8 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &RestartKey);
      if ( v8 )
      {
        v9 = v21;
        do
        {
          v10 = (__int64 *)v8[10];
          if ( v10 != v8 + 10 )
          {
            do
            {
              v15 = (CTopLevelWindow *)v10[55];
              if ( v15 )
                CTopLevelWindow::OnSettingsUpdated(v15, v24);
              v16 = (CTopLevelWindow **)v10[61];
              if ( v16 )
              {
                CTopLevelWindow::OnSettingsUpdated(v16[11], v24);
                if ( (v24 & 0x10) != 0 )
                  CWindowIconic::OnColorizationUpdated((CWindowIconic *)v16, 0);
                v18 = CVisual::RenderRecursive(v16[11]);
                if ( v18 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x2A0u, 0LL);
              }
              if ( CWindowData::IsImmersiveWindow((CWindowData *)v10) )
              {
                if ( *((_DWORD *)v10 + 130) )
                {
                  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v9, (HWND)v10[5]);
                  v21 = IconicResourceNoRef;
                  DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove((char *)v9 + 16, &v21);
                  if ( IconicResourceNoRef )
                    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(
                      IconicResourceNoRef,
                      v20);
                }
              }
              v10 = (__int64 *)*v10;
            }
            while ( v10 != v8 + 10 );
            v7 = v22;
          }
          v11 = (CProjectedShadowScene *)v8[6];
          if ( v11 && v6 )
          {
            v21 = (CImmersiveIconicBitmapRegistry *)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            CProjectedShadowScene::PositionProjectedShadowReceiverVisual(v11);
            CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v21);
          }
          v12 = (CGlobalLightSet *)v8[7];
          if ( v12 && v6 )
          {
            v21 = (CImmersiveIconicBitmapRegistry *)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            CGlobalLightSet::PositionCoordinateSpaceVisual(v12);
            CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v21);
          }
          v13 = v8[2];
          if ( v13 )
          {
            if ( v6 )
            {
              v17 = *(MagnifierExperienceHelper **)(v13 + 160);
              if ( v17 )
                MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(v17);
            }
          }
          v8 = RtlEnumerateGenericTableWithoutSplaying(v7, &RestartKey);
        }
        while ( v8 );
        v5 = v25;
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v5;
}
