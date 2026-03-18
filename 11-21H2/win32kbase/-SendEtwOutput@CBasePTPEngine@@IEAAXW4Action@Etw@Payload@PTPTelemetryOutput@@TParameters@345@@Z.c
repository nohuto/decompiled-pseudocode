/*
 * XREFs of ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0203810
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C020273C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0204350 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C02043C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBasePTPEngine::SendEtwOutput(__int64 a1, int a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 16);
  v4 = a1 + 1168;
  *(_OWORD *)(a1 + 1176) = *(_OWORD *)a3;
  *(_DWORD *)(a1 + 1192) = v3;
  *(_DWORD *)(a1 + 1172) = a2;
  v5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)v4 = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v4);
  *(_OWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  return result;
}
