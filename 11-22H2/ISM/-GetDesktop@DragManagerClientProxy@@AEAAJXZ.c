/*
 * XREFs of ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18004CCB0
 * Callers:
 *     ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18004CBC0 (-OnConnected@DragManagerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1?CloseDesktop@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180162808 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHDESK__@@P6AHPEAU1@@Z$1-CloseDesktop@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragManagerClientProxy::GetDesktop(DragManagerClientProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rcx
  HDESK v8; // rax
  HDESK v9; // rbx
  const char *v10; // r9
  unsigned int LastError; // ebx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  HDESK v15; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v16[20]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 32LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 16);
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) + 48);
  v5 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  v5(v4, &v14);
  v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 24LL))(v14, v16);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\d"
                    "ragmanagerclientproxy.cpp",
      (const char *)(unsigned int)v6,
      v13);
  v7 = v17;
  *((_DWORD *)this + 36) = v17;
  v8 = (HDESK)OpenThreadDesktop(v7, 0LL, 0LL, 1LL);
  v9 = v8;
  v15 = v8;
  if ( v8 )
  {
    if ( GetUserObjectInformationW(v8, 8, (char *)this + 136, 8u, 0LL) )
    {
      CloseDesktop(v9);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x96,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgesture"
                                "s\\system\\dragmanagerclientproxy.cpp",
                  v10);
  }
  else
  {
    LastError = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\dragma"
               "nagerclientproxy.cpp",
      (const char *)0x80070005LL);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDESK__ *,int (*)(HDESK__ *),&int CloseDesktop(HDESK__ *),wistd::integral_constant<unsigned __int64,0>,HDESK__ *,HDESK__ *,0,std::nullptr_t>>>(&v15);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  return LastError;
}
