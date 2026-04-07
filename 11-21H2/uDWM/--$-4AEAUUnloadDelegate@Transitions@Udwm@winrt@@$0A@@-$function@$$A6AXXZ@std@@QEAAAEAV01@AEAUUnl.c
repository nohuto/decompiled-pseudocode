/*
 * XREFs of ??$?4AEAUUnloadDelegate@Transitions@Udwm@winrt@@$0A@@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAUUnloadDelegate@Transitions@Udwm@winrt@@@Z @ 0x1800FF4CC
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800FF930 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18009BC08 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::function<void (void)>::operator=<winrt::Udwm::Transitions::UnloadDelegate &,0>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v8[8]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v9[56]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+3Fh]

  v7 = *a2;
  v2 = v7;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  v10 = 0LL;
  v8[0] = &std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::`vftable';
  v8[1] = v2;
  v8[7] = v8;
  std::_Func_class<void,>::_Reset_move((__int64)v9, (__int64)v8);
  std::_Func_class<void,>::_Reset_move((__int64)v8, a1);
  std::_Func_class<void,>::_Reset_move(a1, (__int64)v9);
  std::_Func_class<void,>::_Tidy((__int64)v9, v4);
  std::_Func_class<void,>::_Tidy((__int64)v8, v5);
  return a1;
}
