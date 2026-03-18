/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403A4318
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A4044 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A4134 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A434C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpHvDiscover @ 0x1403A442C (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4AE8 (HalpWdatDiscover.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPluginsCommon(int a1)
{
  __int64 result; // rax

  result = HalpTimerRegisterBuiltinPlugins();
  if ( (int)result >= 0 && a1 == 1 )
  {
    result = HalpHvDiscover();
    if ( (int)result >= 0 )
      return HalpWdatDiscover();
  }
  return result;
}
