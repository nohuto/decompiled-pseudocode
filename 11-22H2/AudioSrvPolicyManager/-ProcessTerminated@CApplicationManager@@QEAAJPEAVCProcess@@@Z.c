/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_::_Do_call @ 0x18002B240 (std--_Func_impl_no_alloc__lambda_a57db9963e5a44e7e98dd749c7c1930c__void_--_Do_call.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006C20 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x1800097E0 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18000A1F0 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     ?ClearCastingState@CProcess@@QEAAXXZ @ 0x180026590 (-ClearCastingState@CProcess@@QEAAXXZ.c)
 *     ?ClearDialogSessionState@CProcess@@QEAAXXZ @ 0x1800265C8 (-ClearDialogSessionState@CProcess@@QEAAXXZ.c)
 *     ?ClearSmtcSubscriptions@CProcess@@QEAAXXZ @ 0x180026600 (-ClearSmtcSubscriptions@CProcess@@QEAAXXZ.c)
 *     ?ClearVoipCallState@CProcess@@QEAAXXZ @ 0x180026620 (-ClearVoipCallState@CProcess@@QEAAXXZ.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x180027E3C (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180028230 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180028CFC (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180028DBC (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18002E8F0 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002F7CC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180039014 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180039784 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x180039A30 (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // rsi
  struct CApplication *v4; // rbx
  unsigned int v5; // edx
  CApplicationManager *v7; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = this;
  v3 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
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
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 32);
  v4 = (struct CApplication *)*((_QWORD *)a2 + 28);
  LODWORD(v7) = 0;
  CProcess::MarkAsTerminated(a2);
  if ( TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 41), *((_DWORD *)a2 + 40), 0, 1.0, (int *)&v7);
    if ( (_DWORD)v7 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 41), 3u);
  }
  if ( v4 && TsSessionIsActiveMediaApplication(v4) )
    CApplicationManager::ReevaluateActiveMediaAppStatusForApplication(v3, v4);
  if ( (*((_BYTE *)a2 + 448) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 124) )
  {
    CProcess::ClearSmtcSubscriptions(a2);
    if ( v4 )
      CApplication::OnSmtcSubscriptionChanged(v4, v5);
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
  CProcess::ClearCastingState(a2);
  CProcess::ClearVoipCallState(a2);
  CProcess::ClearDialogSessionState(a2);
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return 0LL;
}
