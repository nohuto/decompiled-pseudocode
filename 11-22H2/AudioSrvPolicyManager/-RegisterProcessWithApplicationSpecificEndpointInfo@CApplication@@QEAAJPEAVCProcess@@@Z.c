/*
 * XREFs of ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180028B64
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180027C58 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BC10 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x18000BD90 (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VApplicationSpecificEndpointInfo@@UIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationSpecificEndpointInfo@@AEAPEAVCProcess@@@Z @ 0x180023E5C (--$MakeAndInitialize@VApplicationSpecificEndpointInfo@@UIApplicationSpecificEndpointInfo@@AEAPEA.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002490C (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(
        CApplication *this,
        struct CProcess *a2)
{
  unsigned __int16 *ApplicationName; // r14
  __int64 v5; // r8
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  const char *v9; // r9
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13[2]; // [rsp+20h] [rbp-68h] BYREF
  struct IAudioProcess *v14; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v15[16]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v14 = a2;
    ApplicationName = (unsigned __int16 *)ApplicationSpecificEndpointInfo::GetApplicationName(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    *(_QWORD *)v13 = (char *)this + 32;
    std::wstring::wstring(v16, ApplicationName, v5);
    v6 = *(_QWORD *)std::map<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>::_Try_emplace<std::wstring,>(
                      (__int64 *)this + 88,
                      (__int64)v15,
                      (__int64)v16);
    std::wstring::~wstring(v16);
    if ( *(_QWORD *)(v6 + 64)
      || (*(_QWORD *)(v6 + 64) = 0LL,
          v7 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationSpecificEndpointInfo,IApplicationSpecificEndpointInfo,CProcess * &>(
                 (_QWORD *)(v6 + 64),
                 &v14),
          v8 = v7,
          v7 >= 0) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 64) + 64LL))(
              *(_QWORD *)(v6 + 64),
              *((unsigned int *)a2 + 40));
      v12 = v11;
      if ( v11 >= 0 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v13);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B8,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v11);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v13);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B5,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v7);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v13);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9BC,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v9);
  }
  return result;
}
