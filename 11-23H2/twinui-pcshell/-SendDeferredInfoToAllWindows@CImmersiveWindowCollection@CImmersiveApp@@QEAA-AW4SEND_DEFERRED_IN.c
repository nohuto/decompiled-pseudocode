/*
 * XREFs of ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180024A4C
 * Callers:
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18001FB24 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180024624 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002497C (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180057860 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x1802D0E80 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C3EB0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1803C59D8 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180022CD4 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180024C50 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180024F70 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180024FD4 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18004DB5C (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(__int64 a1)
{
  unsigned int v1; // r14d
  const struct APPLICATION_VIEW_DATA *v3; // r8
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  int v14; // r8d
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-48h]
  __int128 i; // [rsp+40h] [rbp-38h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 176)
    && (CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
     || !ImmersiveApplicationLayout::AreAppViewDataEqual(
           (ImmersiveApplicationLayout *)(a1 + 32),
           (const struct APPLICATION_VIEW_DATA *)(a1 + 76),
           v3))
    && *(_DWORD *)(a1 + 16) <= *(_DWORD *)(a1 + 24)
    && *(_DWORD *)(a1 + 20) <= *(_DWORD *)(a1 + 28) )
  {
    v1 = 1;
    if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1) )
      CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 248), (const struct tagRECT *)(a1 + 16));
    v5 = 0LL;
    v6 = *(_OWORD *)(a1 + 92);
    v17 = *(_OWORD *)(a1 + 76);
    v7 = *(_OWORD *)(a1 + 108);
    v18 = v6;
    for ( i = v7; v5 < *(_QWORD *)(a1 + 176); ++v5 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5);
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v8 + 64LL))(v8, a1 + 16, &v17);
      if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
        && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
        McTemplateU0q_EventWriteTransfer(v11, &WindowLayoutChange_Start, v10);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v5);
          v13 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            McTemplateU0qq_EventWriteTransfer(
              (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
              &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
              0LL,
              v13,
              v17,
              *((_QWORD *)&v17 + 1),
              v18,
              *((_QWORD *)&v18 + 1),
              i,
              *((_QWORD *)&i + 1));
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
              McTemplateU0qq_EventWriteTransfer(
                (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
                &PerfTrack_ModernApp_ResizeResponsive_Start,
                0LL,
                v13,
                v17,
                *((_QWORD *)&v17 + 1),
                v18,
                *((_QWORD *)&v18 + 1),
                i,
                *((_QWORD *)&i + 1));
          }
        }
      }
    }
    v14 = *(_DWORD *)(a1 + 116);
    v15 = *(_OWORD *)(a1 + 92);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 76);
    v16 = *(_QWORD *)(a1 + 108);
    *(_OWORD *)(a1 + 48) = v15;
    *(_QWORD *)(a1 + 64) = v16;
    *(_DWORD *)(a1 + 72) = v14;
    CopyRect((LPRECT)a1, (const RECT *)(a1 + 16));
  }
  return v1;
}
