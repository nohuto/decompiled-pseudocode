/*
 * XREFs of ?_Tidy@?$_Func_class@XPEAUDeviceInfo@@@std@@IEAAXXZ @ 0x18005257C
 * Callers:
 *     ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@$0A@@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x18003441C (--$-4V-$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU-$_Ph@$00.c)
 *     ??1?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAA@XZ @ 0x1801CCB50 (--1-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAA@XZ.c)
 *     ??1GameInputProcessor@@UEAA@XZ @ 0x1801CCB5C (--1GameInputProcessor@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
