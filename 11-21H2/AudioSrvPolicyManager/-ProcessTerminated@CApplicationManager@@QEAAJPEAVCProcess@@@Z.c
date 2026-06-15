/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Do_call @ 0x18001D5C0 (std--_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_--_Do_call.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180015DD8 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163A4 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x18001681C (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001709C (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180019180 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A47C (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A53C (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x18001D110 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180024E94 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180024F20 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18002E750 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18002F164 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18002F7A4 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x18002FC64 (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // r13
  struct CApplication *v4; // r15
  signed __int32 v5; // eax
  signed __int32 v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rdx
  _DWORD *v14; // rax
  unsigned int i; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  _QWORD v20[16]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  CApplicationManager *v22; // [rsp+D0h] [rbp+67h] BYREF
  char *v23; // [rsp+D8h] [rbp+6Fh]
  char *v24; // [rsp+E0h] [rbp+77h]

  v22 = this;
  v3 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x27u,
      &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
      *((_DWORD *)a2 + 40));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  v23 = (char *)v3 + 32;
  v4 = (struct CApplication *)*((_QWORD *)a2 + 28);
  LODWORD(v22) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 24));
  v24 = (char *)a2 + 24;
  CProcess::CleanupProcessTerminationWatcher(a2, 0);
  *((_DWORD *)a2 + 104) = 2;
  do
    v5 = *((_DWORD *)a2 + 5);
  while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 5, v5 + 1, v5) );
  do
    v6 = *((_DWORD *)a2 + 5);
  while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 5, v6 + 1, v6) );
  v20[0] = off_180047FA8;
  v20[1] = a2;
  v20[7] = v20;
  v7 = QueueGenericWorkItem(v20);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE6D,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)a2);
  if ( a2 != (struct CProcess *)-24LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 24));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 592));
  if ( *((_QWORD *)a2 + 80) )
  {
    v8 = 0;
    v9 = *((_DWORD *)a2 + 162);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(*((_QWORD *)a2 + 79) + 8LL * v8);
        if ( v10 )
          break;
        if ( ++v8 >= v9 )
          goto LABEL_26;
      }
      do
      {
        v11 = v10;
        if ( *(_QWORD *)(v10 + 16) )
        {
          v10 = *(_QWORD *)(v10 + 16);
        }
        else
        {
          v12 = *((_DWORD *)a2 + 162);
          LODWORD(v13) = *(_DWORD *)(v10 + 24) % v12;
          do
          {
            v13 = (unsigned int)(v13 + 1);
            v10 = 0LL;
            if ( (unsigned int)v13 >= v12 )
              break;
            v10 = *(_QWORD *)(*((_QWORD *)a2 + 79) + 8 * v13);
          }
          while ( !v10 );
        }
        (*(void (__fastcall **)(_QWORD, struct CProcess *, _QWORD))(**(_QWORD **)(v11 + 8) + 24LL))(
          *(_QWORD *)(v11 + 8),
          a2,
          *(_QWORD *)v11);
      }
      while ( v10 );
    }
  }
LABEL_26:
  if ( a2 != (struct CProcess *)-592LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 592));
  if ( TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), 0, 1.0, (int *)&v22);
    if ( (_DWORD)v22 )
      CApplicationManager::UpdateVolumeForAllAppsInSession(v3, *((unsigned int *)a2 + 41), 3LL);
  }
  if ( v4 && TsSessionIsActiveMediaApplication(v4) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
    if ( !(unsigned int)CApplication::GetActiveProcessCount(v4) )
      CApplicationManager::UpdateActiveMediaAppForSession(v3, v4, 1);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  }
  if ( (*((_BYTE *)a2 + 448) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  v14 = (_DWORD *)((char *)a2 + 496);
  if ( *((_DWORD *)a2 + 124) )
  {
    for ( i = 0; i < 2; ++i )
      *v14++ = 0;
    if ( v4 )
      CApplication::OnSmtcSubscriptionChanged((DWORD *)v4);
  }
  if ( (*((_DWORD *)a2 + 112) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 113) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 113) = 0;
  }
  if ( *((_DWORD *)a2 + 114) )
    *((_DWORD *)a2 + 114) = 0;
  *((_DWORD *)a2 + 122) = 0;
  v16 = *((_DWORD *)a2 + 127);
  if ( v16 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 28), -v16);
    *((_DWORD *)a2 + 127) = 0;
  }
  v17 = *((_DWORD *)a2 + 128);
  if ( v17 > 0 )
  {
    CApplication::VoipCallStateChanged(*((CApplication **)a2 + 28), -v17);
    *((_DWORD *)a2 + 128) = 0;
  }
  v18 = *((_DWORD *)a2 + 129);
  if ( v18 > 0 )
  {
    CApplication::DialogSessionStateChanged(*((CApplication **)a2 + 28), -v18);
    *((_DWORD *)a2 + 129) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  if ( v3 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  return 0LL;
}
