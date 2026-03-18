/*
 * XREFs of KeInitializeIRTimer @ 0x14036F5F8
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x14031E390 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x140384654 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x1405990F0 (PopPowerButtonWorkCallback.c)
 *     NtCreateTimer2 @ 0x140786180 (NtCreateTimer2.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14080A8A0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopThermalZoneAdd @ 0x140823850 (PopThermalZoneAdd.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14031E51C (KiInitializeTimer2.c)
 *     ExCheckValidIRTimerId @ 0x14036F64C (ExCheckValidIRTimerId.c)
 */

__int64 __fastcall KeInitializeIRTimer(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax

  KiInitializeTimer2(a1, a2, a3, a5 | 2);
  v7 = *a4;
  *(_BYTE *)(a1 + 2) = v7;
  v8 = a4[2];
  *(_BYTE *)(a1 + 3) = a4[2];
  result = ExCheckValidIRTimerId(v7, v8);
  if ( !(_BYTE)result )
    __fastfail(5u);
  return result;
}
