/*
 * XREFs of ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180002BB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x180009060 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x1800091E0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E250 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18000F9EC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015A88 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016084 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E1BC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x1800393FC (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RpcSetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this, int a2)
{
  int Process; // eax
  unsigned int v3; // ebx
  DWORD v4; // eax
  unsigned int v5; // edi
  bool v6; // bl
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  struct IAudioProcess *v14; // [rsp+50h] [rbp-20h] BYREF
  struct TSSession *v15; // [rsp+58h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int Data; // [rsp+98h] [rbp+28h] BYREF
  HKEY phkResult; // [rsp+A0h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp+38h] BYREF

  Data = a2;
  v14 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, 0LL, &v14);
  v3 = Process;
  if ( Process >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v14 + 48LL))(v14);
    v5 = v4;
    if ( v4 )
    {
      if ( !TsSessionIdAreAccessibilityAudioSettingsInitialized(v4) )
        TsSessionIdInitAccessibilityAudioSettings(v5, 0);
      v6 = Data != 0;
      if ( TsSessionIdGetAccessibilityAudioMonoMixState(v5) != v6 )
      {
        v7 = RpcImpersonateClient(0LL);
        if ( v7 )
        {
          v3 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 563LL,
                 (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                 (const char *)v7);
          goto LABEL_22;
        }
        phkResult = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &phkResult,
          0LL);
        v8 = RegOpenCurrentUser(0xF003Fu, &phkResult);
        if ( v8 )
        {
          v3 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 568LL,
                 (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                 (const char *)v8);
LABEL_11:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkResult);
          RpcRevertToSelf();
          goto LABEL_22;
        }
        hKey = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &hKey,
          0LL);
        v9 = RegCreateKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
        if ( v9 )
        {
          v10 = 571LL;
LABEL_14:
          v3 = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 v10,
                 (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
                 (const char *)v9);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
          goto LABEL_11;
        }
        v9 = RegSetValueExW(hKey, L"AccessibilityMonoMixState", 0, 4u, (const BYTE *)&Data, 4u);
        if ( v9 )
        {
          v10 = 573LL;
          goto LABEL_14;
        }
        v12 = Data;
        CApplicationManager::Lock(v11, v16);
        if ( (int)TsSessionFromSessionId(v5, 1, &v15) >= 0 && *((_DWORD *)v15 + 268) )
          *((_DWORD *)v15 + 269) = v12;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v16);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkResult);
        RpcRevertToSelf();
      }
    }
    v3 = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x222,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)Process);
LABEL_22:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v14);
  return v3;
}
