/*
 * XREFs of ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203EE0
 * Callers:
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1C01FEC18 (--1CPTPEngine@@UEAA@XZ.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C01FF354 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01FF558 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C02002A0 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0202358 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1C0202630 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0203798 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z @ 0x1C0203AD8 (-SendLastActionTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0203B20 (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C0203D58 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x1C0204004 (-SendTotalTimeTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_TELEM_TOTALTIME@@_K@Z.c)
 *     ?SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z @ 0x1C0204048 (-SendWarpbackTelemetry@CBasePTPEngine@@IEAAXW4tagPTP_ACTION@@UtagPOINT@@1K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBasePTPEngine::SendTelemetryOutput(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // xmm1_8
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = a1 + 1168;
  v4 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 1176) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 1172) = a2;
  *(_QWORD *)(a1 + 1192) = v4;
  v5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)v3 = 2;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v3);
  *(_OWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  return result;
}
