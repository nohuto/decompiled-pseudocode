/*
 * XREFs of ?GetWindowImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x180097C38
 * Callers:
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180097BE0 (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180097E50 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Win32ApplicationViewHelpers::GetWindowImageName(_QWORD *a1, HWND a2)
{
  char *v3; // rbx
  int v4; // eax
  const char *v5; // r9
  char *v7; // [rsp+28h] [rbp-51h] BYREF
  __int128 v8; // [rsp+30h] [rbp-49h]
  char *v9; // [rsp+40h] [rbp-39h]
  _BYTE v10[8]; // [rsp+48h] [rbp-31h] BYREF
  void **v11; // [rsp+50h] [rbp-29h] BYREF
  __int128 v12; // [rsp+58h] [rbp-21h]
  void ***v13; // [rsp+B8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  DWORD dwProcessId; // [rsp+F0h] [rbp+77h] BYREF
  int v16; // [rsp+F8h] [rbp+7Fh] BYREF

  *a1 = 0LL;
  dwProcessId = 0;
  if ( GetWindowThreadProcessId(a2, &dwProcessId) )
  {
    v3 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
    v9 = v3;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v16 = 0;
      v7 = v3;
      *(_QWORD *)&v8 = &v7;
      *((_QWORD *)&v8 + 1) = &v16;
      v11 = &wistd::__function::__func<_lambda_e1bdf235c2021226f8c53f8fb7bf9230_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
      v12 = v8;
      v13 = &v11;
      v4 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
             a1,
             v10);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1E,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
          (const char *)(unsigned int)v4,
          1);
      if ( !*a1 )
        wil::details::in1diag3::_Throw_NullAlloc(
          retaddr,
          (void *)0x1F,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\Win32ApplicationViewHelpers.h",
          v5);
    }
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
  }
  return a1;
}
