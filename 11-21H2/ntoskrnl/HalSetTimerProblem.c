/*
 * XREFs of HalSetTimerProblem @ 0x140522930
 * Callers:
 *     HalpSfiTimerArm @ 0x140522AA0 (HalpSfiTimerArm.c)
 *     HalpSfiTimerInitialize @ 0x140522BA0 (HalpSfiTimerInitialize.c)
 *     HalpRtcArmTimer @ 0x140522D70 (HalpRtcArmTimer.c)
 *     HalpHpetAcknowledgeInterrupt @ 0x1405230C0 (HalpHpetAcknowledgeInterrupt.c)
 *     HalpHpetArmTimer @ 0x140523100 (HalpHpetArmTimer.c)
 *     HalpHpetSetMatchValue @ 0x14052314C (HalpHpetSetMatchValue.c)
 * Callees:
 *     <none>
 */

void __fastcall HalSetTimerProblem(__int64 a1, int a2, int a3)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // r8

  if ( a1 )
  {
    v4 = (ULONG_PTR *)HalpRegisteredTimers;
    while ( v4 != &HalpRegisteredTimers )
    {
      v5 = v4;
      v4 = (ULONG_PTR *)*v4;
      if ( v5[9] == a1 )
      {
        *((_DWORD *)v5 + 69) = a2;
        *((_DWORD *)v5 + 70) = a3;
        return;
      }
    }
  }
}
