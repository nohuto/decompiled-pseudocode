/*
 * XREFs of KeInitializeIRTimer @ 0x14036F798
 * Callers:
 *     ExAllocateTimerInternal2 @ 0x14031E620 (ExAllocateTimerInternal2.c)
 *     PopInitializeIRTimer @ 0x140384834 (PopInitializeIRTimer.c)
 *     PopPowerButtonWorkCallback @ 0x1405995E0 (PopPowerButtonWorkCallback.c)
 *     NtCreateTimer2 @ 0x140786370 (NtCreateTimer2.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14080AB70 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopThermalZoneAdd @ 0x140823B50 (PopThermalZoneAdd.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 *     ExCheckValidIRTimerId @ 0x14036F7EC (ExCheckValidIRTimerId.c)
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
