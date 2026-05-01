/*
 * XREFs of winrt::make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___ @ 0x1801830DC
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800DBDF8 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??0TouchEdgeGripperHost@@QEAA@AEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@AEBV?$function@$$A6AXXZ@2@@Z @ 0x180183250 (--0TouchEdgeGripperHost@@QEAA@AEBV-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall winrt::make_self_TouchEdgeGripperHost__lambda_e16a4bade3739a0d698c6031a316e206___lambda_a4da1f0f89255fbad3a15aa44999bedc___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v11; // [rsp+28h] [rbp-51h]
  _QWORD v12[8]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v13[8]; // [rsp+70h] [rbp-9h] BYREF

  v11 = operator new(0x100uLL);
  v6 = *a3;
  v13[0] = off_1807CE9B0;
  v13[1] = v6;
  v13[7] = v13;
  v7 = *a2;
  v12[0] = off_1807CE980;
  v12[1] = v7;
  v12[7] = v12;
  TouchEdgeGripperHost::TouchEdgeGripperHost(v11, v12, v13);
  *v11 = &winrt::impl::heap_implements<TouchEdgeGripperHost>::`vftable';
  *a1 = v11;
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v12,
    v8);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v13,
    v9);
  return a1;
}
