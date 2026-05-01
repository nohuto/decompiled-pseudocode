/*
 * XREFs of ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180312B9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_375889774bd0955ecdd63be67b1c3b02___::Run @ 0x180091BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_375889774bd0955ecdd63be67b1c3b02___--Run.c)
 *     _lambda_45515fc8494d7051ed1d2c04434d8f2b_::operator() @ 0x180311CC0 (_lambda_45515fc8494d7051ed1d2c04434d8f2b_--operator().c)
 * Callees:
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180030B38 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180030BD8 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x1800640A0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUEDP_CONTEXT@@P6AXPEAU1@@Z$1?EdpFreeContext@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180311C6C (--1-$unique_storage@U-$resource_policy@PEAUEDP_CONTEXT@@P6AXPEAU1@@Z$1-EdpFreeContext@@YAX0@ZU-$.c)
 *     ?GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z @ 0x180313128 (-GetProcessImageName@EdpHelpers@@YAJKPEAPEAG@Z.c)
 *     ?IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z @ 0x1803133A4 (-IsLocalOrRemoteDebuggerPresent@EdpHelpers@@YA_NK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EdpHelpers::GetEnterpriseIdForWindow(EdpHelpers *this, _QWORD *a2, unsigned __int16 **a3)
{
  unsigned int v5; // edx
  bool IsLocalOrRemoteDebuggerPresent; // al
  int ContextForWindow; // eax
  unsigned __int16 **v9; // r8
  const char *v10; // r9
  unsigned int v11; // ebx
  int ProcessImageName; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  DWORD LastError; // ebx
  __int64 v16; // r9
  char *v17; // rdx
  void *v18; // rax
  _BYTE v19[32]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  DWORD dwProcessId; // [rsp+68h] [rbp+28h] BYREF
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF
  void *v23; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return 2147500037LL;
  IsLocalOrRemoteDebuggerPresent = EdpHelpers::IsLocalOrRemoteDebuggerPresent(dwProcessId, v5);
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v19, IsLocalOrRemoteDebuggerPresent ? -1 : 5000);
  v22 = 0LL;
  ContextForWindow = EdpGetContextForWindow(this, &v22);
  v11 = ContextForWindow;
  if ( ContextForWindow == -2147024891 )
  {
    v23 = 0LL;
    ProcessImageName = EdpHelpers::GetProcessImageName(dwProcessId, (unsigned int)&v23, v9);
    v11 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v13 = 189LL;
LABEL_10:
      v16 = (unsigned int)ProcessImageName;
      goto LABEL_18;
    }
    v14 = v22;
    if ( v22 )
    {
      LastError = GetLastError();
      EdpFreeContext(v14);
      SetLastError(LastError);
    }
    v22 = 0LL;
    ProcessImageName = EdpGetContextForBinaryPath(v23, &v22);
    v11 = ProcessImageName;
    if ( ProcessImageName < 0 )
    {
      v13 = 191LL;
      goto LABEL_10;
    }
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v23);
  }
  else if ( ContextForWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
      (const char *)(unsigned int)ContextForWindow);
    goto LABEL_21;
  }
  v17 = *(char **)(v22 + 8);
  if ( v17 )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
      &v23,
      v17,
      0xFFFFFFFFFFFFFFFFuLL,
      v10);
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      *a2 = v18;
      v11 = 0;
      goto LABEL_20;
    }
    v11 = -2147024882;
    v16 = 2147942414LL;
    v13 = 201LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\EdpHelpers.h",
      (const char *)v16);
LABEL_20:
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v23);
    goto LABEL_21;
  }
  v11 = 0;
LABEL_21:
  wil::details::unique_storage<wil::details::resource_policy<EDP_CONTEXT *,void (*)(EDP_CONTEXT *),&void EdpFreeContext(EDP_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,EDP_CONTEXT *,EDP_CONTEXT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<EDP_CONTEXT *,void (*)(EDP_CONTEXT *),&void EdpFreeContext(EDP_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,EDP_CONTEXT *,EDP_CONTEXT *,0,std::nullptr_t>>(&v22);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v19);
  return v11;
}
