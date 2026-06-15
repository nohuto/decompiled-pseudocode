/*
 * XREFs of ??$make_wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@01@@Z @ 0x140076848
 * Callers:
 *     ?RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ @ 0x140077038 (-RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@@Z @ 0x1400769EC (--0-$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@QEAA@$$QEAV-$function@$$.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x140077250 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1400772FC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  void *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  __int64 v8; // r8
  unsigned int v9; // ebx
  void *v10; // rdx
  int v11; // ebx
  unsigned int v12; // r8d
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v15)(_QWORD, _QWORD); // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v19; // [rsp+80h] [rbp+20h] BYREF

  v19 = a3;
  v14 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6
    || (v7 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>(
                                                       v6,
                                                       a2)) == 0LL )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL);
    return v9;
  }
  v8 = v14;
  if ( v14 != -1 )
    goto LABEL_9;
  v19 = 0;
  v9 = NtQueryWnfStateData(&WNF_AUDC_ORIENTATION, 0LL, 0LL, &v14, 0LL, &v19) | 0x10000000;
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -805306333 )
  {
    v8 = v14;
LABEL_9:
    v15 = v7 + 1;
    v16 = 0LL;
    v17 = 1;
    v11 = RtlSubscribeWnfStateChangeNotification(
            &v16,
            WNF_AUDC_ORIENTATION,
            v8,
            _lambda_f009824708dbe55f35ab228094a3f5e0_::_lambda_invoker_cdecl_);
    if ( v17 )
      wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
        v15,
        v16);
    if ( v11 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v9 = wil::details::in1diag3::Return_NtStatus(retaddr, v10, v12, (const char *)(unsigned int)v11, (int)v7);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
    (const char *)v9);
LABEL_7:
  (**v7)(v7, 1LL);
  return v9;
}
