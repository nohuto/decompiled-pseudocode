/*
 * XREFs of ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x180009E10
 * Callers:
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003495C (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002AD28 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowsPolicyManager::GetUserSid(CWindowsPolicyManager *this, DWORD a2, struct TSSession **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  EnterCriticalSection(&stru_18005C5D8);
  v5 = TsSessionFromSessionId(a2, 1, &v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *((_QWORD *)v10 + 138);
    if ( v7 )
    {
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v10,
        v7,
        -1LL);
      if ( v10 )
      {
        *a3 = v10;
        LeaveCriticalSection(&stru_18005C5D8);
        return 0;
      }
      else
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x304,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x8007000ELL);
        LeaveCriticalSection(&stru_18005C5D8);
      }
    }
    else
    {
      LeaveCriticalSection(&stru_18005C5D8);
      return (unsigned int)-2147467259;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FE,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v5);
    LeaveCriticalSection(&stru_18005C5D8);
  }
  return v6;
}
