/*
 * XREFs of HalpTimerRegisterBuiltinPlugins @ 0x1403A434C
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403A4318 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpHpetDiscover @ 0x1403777E0 (HalpHpetDiscover.c)
 *     HalSocRequestConfigurationData @ 0x140377DC8 (HalSocRequestConfigurationData.c)
 *     HalpTimerRegister @ 0x140378AB4 (HalpTimerRegister.c)
 *     HalpRtcDiscover @ 0x140378F98 (HalpRtcDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x1403A43D0 (HalpHvWatchdogDiscover.c)
 *     HalpTscDiscover @ 0x1403A45A8 (HalpTscDiscover.c)
 *     HalpArtDiscover @ 0x1403A46D8 (HalpArtDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403A47BC (HalpApicTimerDiscover.c)
 *     HalpPmTimerDiscover @ 0x1403A4938 (HalpPmTimerDiscover.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPlugins(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _QWORD v3[18]; // [rsp+20h] [rbp-39h] BYREF
  char v4; // [rsp+C0h] [rbp+67h] BYREF

  if ( !a1 )
    return HalpTscDiscover();
  if ( a1 != 1 )
    return 0LL;
  result = HalpPmTimerDiscover();
  if ( (int)result >= 0 )
  {
    result = HalpRtcDiscover();
    if ( (int)result >= 0 )
    {
      result = HalpHpetDiscover();
      if ( (int)result >= 0 )
      {
        result = HalpApicTimerDiscover();
        if ( (int)result >= 0 )
        {
          v4 = 1;
          if ( (int)HalSocRequestConfigurationData(2, v2, &v4) >= 0 && v4 )
          {
            memset(v3, 0, sizeof(v3));
            LODWORD(v3[15]) = 0;
            LODWORD(v3[16]) = 0;
            v3[1] = PdcCreateWatchdogAroundClientCall;
            v3[0] = 0x9000000001LL;
            v3[4] = Halp8254TimerArm;
            v3[3] = xHalTimerWatchdogStop;
            v3[5] = xHalTimerWatchdogStop;
            HIDWORD(v3[12]) = 16;
            v3[13] = 1193182LL;
            LODWORD(v3[17]) = 4;
            HIDWORD(v3[14]) = 320;
            HalpTimerRegister((__int64)v3, 0LL);
          }
          result = HalpArtDiscover();
          if ( (int)result >= 0 )
            return HalpHvWatchdogDiscover();
        }
      }
    }
  }
  return result;
}
