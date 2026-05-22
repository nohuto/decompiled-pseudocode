/*
 * XREFs of ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800CED9C
 * Callers:
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CDF8C (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x1800CE86C (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800CF4B0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800D0B20 (-Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801E9AE8 (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801EB510 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801EDD50 (-Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801EF0A8 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801F01D8 (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801F0BF0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801F2A50 (-Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<MPCButtonHoldHelper>::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( a2 )
    return (**a2)(a2, 1LL);
  return result;
}
