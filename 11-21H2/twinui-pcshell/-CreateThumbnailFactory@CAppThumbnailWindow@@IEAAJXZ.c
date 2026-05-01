/*
 * XREFs of ?CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ @ 0x18049C7B8
 * Callers:
 *     ?Initialize@CAppThumbnailWindow@@IEAAJXZ @ 0x18049CE2C (-Initialize@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::CreateThumbnailFactory(CAppThumbnailWindow *this)
{
  __int64 *v2; // rsi
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  LPVOID v8; // rcx
  LPVOID v9; // rbx
  __int64 (__fastcall *v10)(LPVOID, _QWORD, __int64, __int64 *); // rbp
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return 0LL;
  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_SwitchThumbnailDeviceManager, 0LL, 1u, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)this + 3);
    v8 = ppv;
    *((_QWORD *)this + 3) = ppv;
    if ( v8 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 8LL))(v8);
      v8 = ppv;
    }
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v8 = ppv;
    }
    (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v8 + 184LL))(v8, 2LL);
    v9 = ppv;
    v10 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 56LL);
    v11 = *v2;
    *v2 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v4 = v10(v9, *((_QWORD *)this + 20), 0xFFFFFFFFLL, v2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_15;
    }
    v6 = 147LL;
  }
  else
  {
    v6 = 139LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
    (const char *)(unsigned int)v4);
LABEL_15:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
  return v5;
}
