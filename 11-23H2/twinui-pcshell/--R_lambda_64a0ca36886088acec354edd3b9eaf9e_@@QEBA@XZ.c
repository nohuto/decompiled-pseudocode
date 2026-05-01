/*
 * XREFs of ??R_lambda_64a0ca36886088acec354edd3b9eaf9e_@@QEBA@XZ @ 0x18024FE10
 * Callers:
 *     ??1?$lambda_call@V_lambda_64a0ca36886088acec354edd3b9eaf9e_@@@details@wil@@QEAA@XZ @ 0x18024F750 (--1-$lambda_call@V_lambda_64a0ca36886088acec354edd3b9eaf9e_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008610C (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ShimTemporaryShortcutDeleted@PEAG@PinManagerTelemetry@@SAX$$QEAPEAG@Z @ 0x18069AB18 (--$ShimTemporaryShortcutDeleted@PEAG@PinManagerTelemetry@@SAX$$QEAPEAG@Z.c)
 */

void __fastcall _lambda_64a0ca36886088acec354edd3b9eaf9e_::operator()(__int64 a1)
{
  void **v2; // rax
  HRESULT v3; // eax
  const WCHAR *v4; // rax
  bool v5; // cf
  void *v6; // [rsp+20h] [rbp-50h] BYREF
  _SHFILEOPSTRUCTW FileOp; // [rsp+28h] [rbp-48h] BYREF
  void *v8; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( *(_QWORD *)a1 )
  {
    v8 = 0LL;
    v2 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v8);
    v3 = SHGetNameFromIDList(*(LPCITEMIDLIST *)a1, SIGDN_FILESYSPATH, (PWSTR *)v2);
    if ( v3 >= 0 )
    {
      v4 = (const WCHAR *)(a1 + 8);
      v5 = *(_QWORD *)(a1 + 32) < 8uLL;
      memset(&FileOp, 0, sizeof(FileOp));
      FileOp.wFunc = 3;
      if ( !v5 )
        v4 = *(const WCHAR **)v4;
      FileOp.pFrom = v4;
      FileOp.fFlags = 1556;
      if ( SHFileOperationW(&FileOp) || FileOp.fAnyOperationsAborted )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x346,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)0x80004005LL);
      v6 = v8;
      PinManagerTelemetry::ShimTemporaryShortcutDeleted<unsigned short *>(&v6);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x340,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v8);
  }
}
