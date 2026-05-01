/*
 * XREFs of ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x18010E25C
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1800F69A4 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ??0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E164 (--0VirtualDestopSwitcherViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService.c)
 *     ??0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x18010E31C (--0TaskViewViewChangeNotificationProxy@@QEAA@PEAUIMultitaskingViewVisibilityService@@V-$function.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18010E48C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::operator=(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  _BYTE v6[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v7; // [rsp+58h] [rbp-1h]
  _BYTE v8[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v9; // [rsp+98h] [rbp+3Fh]

  v3 = 0LL;
  v7 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v6);
    v7 = v3;
  }
  if ( v3 == v6 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v9 = 0LL;
    std::_Func_class<void,>::_Reset_move(v8, v6);
    std::_Func_class<void,>::_Reset_move(v6, a1);
    std::_Func_class<void,>::_Reset_move(a1, v8);
    std::_Func_class<void,>::_Tidy(v8);
  }
  else
  {
    v7 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
  }
  std::_Func_class<void,>::_Tidy(v6);
  return a1;
}
