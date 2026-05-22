/*
 * XREFs of ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18014F544
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F880 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1?CloseDesktop@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18014F23C (--1-$unique_storage@U-$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1-CloseDesktop@@YAH0@ZU-$integr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellGesturesClientProxy::GetDesktop(ShellGesturesClientProxy *this)
{
  unsigned int LastError; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  HDESK v8; // rax
  const char *v9; // r9
  int lpnLengthNeeded; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  HDESK v13; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v14[20]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+54h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  LastError = 0;
  v12 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 32LL) + 32LL);
  if ( *(int *)(v3 + 8) <= 0 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4) + 48);
  v6 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  v6(v5, &v12);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 24LL))(v12, v14);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shellge"
           "sturesclientproxy.cpp",
      (const char *)(unsigned int)v7,
      lpnLengthNeeded);
  v8 = (HDESK)OpenThreadDesktop(v15, 0LL, 0LL, 1LL);
  v13 = v8;
  if ( v8 )
  {
    if ( !GetUserObjectInformationW(v8, 8, (char *)this + 160, 8u, 0LL) )
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x61,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestu"
                                  "res\\processor\\shellgesturesclientproxy.cpp",
                    v9);
  }
  else
  {
    LastError = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\shellge"
           "sturesclientproxy.cpp",
      (const char *)0x80070005LL);
  }
  wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>(&v13);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  return LastError;
}
