/*
 * XREFs of ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x180037D20
 * Callers:
 *     ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x18001C930 (-GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z.c)
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003CBFC (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18000EF30 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F6B0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionGetUserSid(DWORD a1, unsigned __int16 **a2)
{
  int v4; // eax
  const char *v5; // r9
  unsigned int v6; // ebx
  char *v7; // rdx
  unsigned __int16 *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v11; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  EnterCriticalSection(&stru_180061648);
  v12 = &stru_180061648;
  v4 = TsSessionFromSessionId(a1, 1, &v11);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = (char *)*((_QWORD *)v11 + 138);
    if ( v7 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v11,
        v7,
        0xFFFFFFFFFFFFFFFFuLL,
        v5);
      v8 = (unsigned __int16 *)v11;
      if ( v11 )
      {
        v11 = 0LL;
        *a2 = v8;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v11);
        v6 = 0;
      }
      else
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x304,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x8007000ELL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v11);
      }
    }
    else
    {
      v6 = -2147467259;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FE,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  return v6;
}
