/*
 * XREFs of ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@$0A@@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x18003441C
 * Callers:
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x1800342B8 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18004BE5C (-_Reset_move@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ @ 0x18005257C (-_Tidy@-$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

__int64 __fastcall ____4V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std___0A____function___A6AXPEAUDeviceInfo___Z_std__QEAAAEAV01___QEAV___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__1__Z(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 (__fastcall **v5)(); // [rsp+20h] [rbp-39h] BYREF
  __int128 v6; // [rsp+28h] [rbp-31h]
  char v7; // [rsp+38h] [rbp-21h]
  __int64 v8; // [rsp+40h] [rbp-19h]
  __int64 (__fastcall ***v9)(); // [rsp+58h] [rbp-1h]
  _BYTE v10[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  v2 = *a2;
  v11 = 0LL;
  v5 = ___7___Func_impl_no_alloc_V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std__XPEAUDeviceInfo___std__6B_;
  v7 = *((_BYTE *)a2 + 16);
  v8 = *((_QWORD *)a2 + 3);
  v9 = &v5;
  v6 = v2;
  std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v10, &v5);
  std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(&v5, a1);
  std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(a1, v10);
  std::_Func_class<void,DeviceInfo *>::_Tidy(v10);
  std::_Func_class<void,DeviceInfo *>::_Tidy(&v5);
  return a1;
}
