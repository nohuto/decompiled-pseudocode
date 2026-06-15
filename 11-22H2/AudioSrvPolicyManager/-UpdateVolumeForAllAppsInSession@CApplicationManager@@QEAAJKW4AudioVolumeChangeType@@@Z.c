/*
 * XREFs of ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006C20
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006780 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007EE0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CD30 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Do_call @ 0x18001EF60 (std--_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_--_Do_call.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x1800287A8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x18002DC18 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18002FBA0 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x180032C1C (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180032E08 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x1800086C0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x1800087D0 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationManager::UpdateVolumeForAllAppsInSession(__int64 a1, int a2, unsigned int a3)
{
  int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // r15
  _QWORD *v6; // r14
  __int64 v7; // rbp
  struct _RTL_CRITICAL_SECTION *v8; // r12
  _QWORD *v9; // rsi
  __int64 v10; // r15
  _QWORD *v11; // rdi
  _QWORD *i; // rbx
  __int64 v13; // rcx
  AudioStateMonitorManager *v14; // rcx
  int v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+50h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+58h] [rbp-60h]
  __int64 v21; // [rsp+60h] [rbp-58h]
  __int64 v22; // [rsp+68h] [rbp-50h]
  int v23; // [rsp+C0h] [rbp+8h]
  __int64 v26; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a2;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v18 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v19 = v5;
  v6 = *(_QWORD **)(a1 + 72);
  while ( v6 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    if ( *(_DWORD *)(v7 + 212) == v3 )
    {
      EnterCriticalSection(v5);
      v20 = v5;
      v8 = (struct _RTL_CRITICAL_SECTION *)(v7 + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
      v21 = v7 + 32;
      v9 = *(_QWORD **)(v7 + 72);
      if ( v9 )
      {
        do
        {
          v10 = v9[2];
          v9 = (_QWORD *)*v9;
          if ( !*(_DWORD *)(v10 + 416) )
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 24));
            v22 = v10 + 24;
            v11 = *(_QWORD **)(v10 + 72);
            for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
            {
              v13 = i[3];
              v26 = 0LL;
              if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL))(
                     v13,
                     &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                     &v17) >= 0 )
              {
                if ( v17 )
                {
                  v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
                          v17,
                          &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                          &v26);
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                  if ( v23 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26) != 2 )
                  {
                    LOBYTE(v16) = 0;
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v26 + 152LL))(
                      v26,
                      a3,
                      0LL,
                      0xFFFFFFFFLL,
                      v16,
                      0LL);
                  }
                }
              }
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            }
            v14 = *(AudioStateMonitorManager **)(v10 + 704);
            v8 = (struct _RTL_CRITICAL_SECTION *)(v7 + 32);
            if ( v14 )
              AudioStateMonitorManager::RecalculateVolume(v14);
            if ( v10 != -24 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 24));
          }
        }
        while ( v9 );
        v3 = a2;
        v5 = v18;
      }
      CApplication::NotifyVolumePolicyChange((CApplication *)v7);
      if ( v8 )
        LeaveCriticalSection(v8);
      if ( v5 )
        LeaveCriticalSection(v5);
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
