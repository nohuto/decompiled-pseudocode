/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403A44F8
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A4224 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A4314 (HalpInitializeTimers.c)
 * Callees:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A452C (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpHvDiscover @ 0x1403A460C (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4CC8 (HalpWdatDiscover.c)
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
