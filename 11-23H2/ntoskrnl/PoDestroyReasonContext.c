/*
 * XREFs of PoDestroyReasonContext @ 0x14032D55C
 * Callers:
 *     NtCancelTimer @ 0x14032E4C0 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x14032E830 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14032EAB4 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x140361260 (ExpDeleteTimer.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036E00C (PopPowerRequestCreateUserModeRequest.c)
 *     NtSetTimer @ 0x1403B2B00 (NtSetTimer.c)
 *     PoCreatePowerRequest @ 0x1403C6AC0 (PoCreatePowerRequest.c)
 *     PoRegisterSystemState @ 0x14058E190 (PoRegisterSystemState.c)
 *     PopPowerRequestDelete @ 0x1407A6980 (PopPowerRequestDelete.c)
 *     NtSetThreadExecutionState @ 0x1407A8F10 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x14084E210 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x140982E00 (PoDeleteThermalRequest.c)
 *     PopPowerAggregatorInitialize @ 0x140B51C3C (PopPowerAggregatorInitialize.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140B71EFC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_DWORD *)P )
    goto LABEL_5;
  v2 = (void *)P[1];
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  if ( *(_DWORD *)P )
  {
LABEL_5:
    v3 = (void *)P[3];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x78435250u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
