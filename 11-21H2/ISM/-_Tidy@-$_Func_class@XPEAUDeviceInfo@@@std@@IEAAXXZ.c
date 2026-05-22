/*
 * XREFs of ?_Tidy@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ @ 0x180047FE4
 * Callers:
 *     ?_Swap@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXAEAV12@@Z @ 0x180042EE8 (-_Swap@-$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXAEAV12@@Z.c)
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x180043C78 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 *     ??1?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAA@XZ @ 0x1801AE730 (--1-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAA@XZ.c)
 *     ??1GameInputProcessor@@UEAA@XZ @ 0x1801AE73C (--1GameInputProcessor@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,DeviceInfo *>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
