/*
 * XREFs of ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004BFC0
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004BEE0 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1?CloseDesktop@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180154528 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1-CloseDesktop@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellGesturesClientProxy::GetDesktop(ShellGesturesClientProxy *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  HDESK v7; // rax
  HDESK v8; // rbx
  const char *v9; // r9
  unsigned int LastError; // ebx
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  HDESK v14; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v15[20]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 32LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 16);
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) + 48);
  v5 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  v5(v4, &v13);
  v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 24LL))(v13, v15);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor"
                    "\\shellgesturesclientproxy.cpp",
      (const char *)(unsigned int)v6,
      v12);
  v7 = (HDESK)OpenThreadDesktop(v16, 0LL, 0LL, 1LL);
  v8 = v7;
  v14 = v7;
  if ( v7 )
  {
    if ( GetUserObjectInformationW(v7, 8, (char *)this + 160, 8u, 0LL) )
    {
      CloseDesktop(v8);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x61,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgesture"
                                "s\\processor\\shellgesturesclientproxy.cpp",
                  v9);
  }
  else
  {
    LastError = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\she"
               "llgesturesclientproxy.cpp",
      (const char *)0x80070005LL);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>>(&v14);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  return LastError;
}
