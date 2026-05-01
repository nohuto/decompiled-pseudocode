/*
 * XREFs of ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18040DE9C
 * Callers:
 *     ?Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@67@UUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@UWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@@Z @ 0x1804153F4 (-Initialize@UwpWindowWrapperBase@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowCont.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x18013E3AC (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x18014D6A4 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (bool)>::operator=(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v7);
    v8 = v3;
  }
  if ( v3 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<void,bool>::_Reset_move((__int64)v9, (__int64)v7);
    std::_Func_class<void,bool>::_Reset_move((__int64)v7, a1);
    std::_Func_class<void,bool>::_Reset_move(a1, (__int64)v9);
    std::_Func_class<void,bool>::_Tidy((__int64)v9, v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
  }
  std::_Func_class<void,bool>::_Tidy((__int64)v7, a2);
  return a1;
}
