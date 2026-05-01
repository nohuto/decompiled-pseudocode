/*
 * XREFs of ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1803CE39C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_808f8076f8742639e20918e7f95659f2___::Run @ 0x180052E50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_808f8076f8742639e20918e7f95659f2___--Run.c)
 *     _lambda_8642074a08b00918dbc99c393cacc902_::operator() @ 0x1803CD4E4 (_lambda_8642074a08b00918dbc99c393cacc902_--operator().c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180187820 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801878C0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x1803CE8D8 (-GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z.c)
 *     ?IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z @ 0x1803CEB80 (-IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z.c)
 */

__int64 __fastcall EdpHelpers::GetEnterpriseIdForWindow(EdpHelpers *this, LPVOID *a2, unsigned __int16 **a3)
{
  unsigned int v5; // edx
  bool IsLocalOrRemoteDebuggerPresent; // al
  int ContextForWindow; // eax
  const char *v9; // r9
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned __int16 **v12; // r8
  int ProcessImageName; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  DWORD LastError; // ebx
  char *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r9
  _BYTE v20[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  DWORD dwProcessId; // [rsp+68h] [rbp+28h] BYREF
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return 2147500037LL;
  IsLocalOrRemoteDebuggerPresent = EdpHelpers::IsLocalOrRemoteDebuggerPresent(dwProcessId, v5);
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v20, IsLocalOrRemoteDebuggerPresent ? -1 : 5000);
  v23 = 0LL;
  ContextForWindow = EdpGetContextForWindow(this, &v23);
  v10 = ContextForWindow;
  if ( ContextForWindow == -2147024891 )
  {
    pv = 0LL;
    v11 = (unsigned int)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    ProcessImageName = EdpHelpers::GetProcessImageName(dwProcessId, v11, v12);
    v10 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v14 = 189LL;
      goto LABEL_10;
    }
    v15 = v23;
    if ( v23 )
    {
      LastError = GetLastError();
      EdpFreeContext(v15);
      SetLastError(LastError);
    }
    v23 = 0LL;
    ProcessImageName = EdpGetContextForBinaryPath(pv, &v23);
    v10 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v14 = 191LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
        (const char *)(unsigned int)ProcessImageName);
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_22;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  else if ( ContextForWindow < 0 )
  {
    v19 = (unsigned int)ContextForWindow;
    v18 = 193LL;
    goto LABEL_17;
  }
  v17 = *(char **)(v23 + 8);
  if ( !v17 )
  {
LABEL_21:
    v10 = 0;
    goto LABEL_22;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v17,
    0xFFFFFFFFFFFFFFFFuLL,
    v9);
  if ( pv )
  {
    *a2 = pv;
    goto LABEL_21;
  }
  v10 = -2147024882;
  v18 = 201LL;
  v19 = 2147942414LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
    (const char *)v19);
LABEL_22:
  if ( v23 )
    EdpFreeContext(v23);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v20);
  return v10;
}
