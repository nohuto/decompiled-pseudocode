/*
 * XREFs of ?TsSessionIdSetUserDuckingPreference@@YAXKM@Z @ 0x180038C74
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001E710 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?GetUserPreferenceFromdB@CDuckingManager@@SA?AW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@M@Z @ 0x1800216A4 (-GetUserPreferenceFromdB@CDuckingManager@@SA-AW4__MIDL___MIDL_itf_audiopolicyp_0000_0000_0001@@M.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdSetUserDuckingPreference(__int64 a1, float a2)
{
  DWORD v2; // ebx
  struct TSSession *v3; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+58h] [rbp+20h] BYREF

  v2 = a1;
  CApplicationManager::Lock(a1, &v4);
  if ( (int)TsSessionFromSessionId(v2, 1, &v3) >= 0 )
    *((_DWORD *)v3 + 272) = CDuckingManager::GetUserPreferenceFromdB(a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v4);
}
