/*
 * XREFs of ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A58F4
 * Callers:
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800A71E0 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801BF890 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C33F4 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C4ED0 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800A6AB4 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<MPCButtonHoldHelper>::operator()();
  }
  return a1;
}
