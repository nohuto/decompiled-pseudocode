/*
 * XREFs of ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18002EAC4
 * Callers:
 *     PbmRegisterPlaybackManagerNotifications @ 0x180031860 (PbmRegisterPlaybackManagerNotifications.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180028B0C (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002E76C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterSoundLevelNotificationClient(
        struct _RTL_CRITICAL_SECTION *a1,
        struct CProcess *a2,
        int a3)
{
  CApplicationManager *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = v6;
  v7 = CApplicationManager::Register(v5, a2);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v7);
    }
    AudPolicyLogError("CApplicationManager::RegisterSoundLevelNotificationClient", 490, v7);
  }
  else
  {
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 1, a3);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  return (unsigned int)v7;
}
