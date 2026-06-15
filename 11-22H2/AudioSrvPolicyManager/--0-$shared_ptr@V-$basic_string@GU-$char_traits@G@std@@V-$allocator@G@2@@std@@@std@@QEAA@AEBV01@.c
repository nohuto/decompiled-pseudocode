/*
 * XREFs of ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180015D80
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001E900 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Copy @ 0x18001EE40 (std--_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_--_Copy.c)
 *     _lambda_bc5d681da67d9384ebd56f302790ab0c_::_lambda_bc5d681da67d9384ebd56f302790ab0c_ @ 0x18002C0CC (_lambda_bc5d681da67d9384ebd56f302790ab0c_--_lambda_bc5d681da67d9384ebd56f302790ab0c_.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DFA0 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Copy @ 0x180030870 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Copy.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003096C (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Copy @ 0x180030C90 (std--_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Copy @ 0x180030EC0 (std--_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Copy @ 0x180030F50 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Copy.c)
 *     PbmAllowMediaPlaybackForApp @ 0x180031380 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180031B50 (PbmReportApplicationState.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
