/*
 * XREFs of ?RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ @ 0x140077038
 * Callers:
 *     ?AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140076CF8 (-AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x14006E49C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCDeviceOrientationNotificationsHandler@@@Z @ 0x140076764 (--$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakRefer.c)
 *     ??$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@01@@Z @ 0x140076848 (--$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ??1?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@QEAA@XZ @ 0x140076A88 (--1-$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceOrientationNotificationsHandler::RegisterDeviceOrientationNotification(
        CDeviceOrientationNotificationsHandler *this)
{
  wil::details **v2; // rsi
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  struct wil::details::wnf_subscription_state_base *v8; // rdx
  wil::details *v9; // rbx
  wil::details *v10; // r14
  DWORD LastError; // edi
  struct wil::details::wnf_subscription_state_base *v12; // rdx
  wil::details *v14; // [rsp+20h] [rbp-59h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-51h] BYREF
  _BYTE v16[8]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v17[15]; // [rsp+38h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = (wil::details **)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
    return 0LL;
  v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  v3 = wil::com_weak_query<CDeviceOrientationNotificationsHandler *>(&v14, &v15);
  v4 = *v3;
  *v3 = 0LL;
  v5 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v14);
  v17[0] = off_1400A5D10;
  v17[1] = this;
  v17[13] = v17;
  v9 = 0LL;
  if ( (int)wil::details::make_wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>(v6, (__int64)v16, v7, &v14) >= 0 )
    v9 = v14;
  if ( v2 == &v14 )
  {
    if ( v9 )
      wil::details::delete_wnf_subscription_state(v9, v8);
  }
  else
  {
    v10 = *v2;
    if ( *v2 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v10, v12);
      SetLastError(LastError);
    }
    *v2 = v9;
  }
  wistd::function<void (WNF_AUDIO_ORIENTATION_STATE const &)>::~function<void (WNF_AUDIO_ORIENTATION_STATE const &)>((__int64)v16);
  if ( *v2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
