/*
 * XREFs of ?_OnCancelled@CSnapAssistViewController@@AEAAJXZ @ 0x1804B46F0
 * Callers:
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x1804B4440 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1804B44B0 (-OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSnapAssistViewController::_OnCancelled(CSnapAssistViewController *this)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 176) )
  {
    v1 = *((_QWORD *)this + 18);
    v8 = v1;
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    v7 = 0LL;
    v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v1)(
           v1,
           &GUID_e8127611_f3b8_5321_bca4_3293938bbab9,
           &v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 176LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
        (const char *)(unsigned int)v2);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v7);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
      return v3;
    }
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 177LL;
      goto LABEL_8;
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v7);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
  }
  return 0LL;
}
