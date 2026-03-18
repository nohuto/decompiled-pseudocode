/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C00C9CF4
 * Callers:
 *     RIMGetCurrentPowerInputMode @ 0x1C0005D44 (RIMGetCurrentPowerInputMode.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01A822C (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01AAAC4 (rimLidClosedPolicyUpdateStateAndApply.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 (*__fastcall ApiSetGetPowerTransitionsState(void *a1))(void)
{
  __int64 (*result)(void); // rax

  memset(a1, 0, 0x40uLL);
  result = qword_1C02962A8;
  if ( qword_1C02962A8 )
  {
    result = (__int64 (*)(void))qword_1C02962A8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02962B0;
      if ( qword_1C02962B0 )
        return (__int64 (*)(void))qword_1C02962B0(a1);
    }
  }
  return result;
}
