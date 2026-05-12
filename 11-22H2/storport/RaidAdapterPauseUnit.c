/*
 * XREFs of RaidAdapterPauseUnit @ 0x1C0036A6C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     RaidSetUnitPauseTimer @ 0x1C0060B90 (RaidSetUnitPauseTimer.c)
 */

__int64 __fastcall RaidAdapterPauseUnit(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 result; // rax

  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit )
    return RaidSetUnitPauseTimer(Unit, (unsigned int)(1000 * a3));
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      return WPP_SF_DDD(
               WPP_GLOBAL_Control->AttachedDevice,
               52LL,
               &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
               v4,
               BYTE1(a2),
               BYTE2(a2));
  }
  return result;
}
