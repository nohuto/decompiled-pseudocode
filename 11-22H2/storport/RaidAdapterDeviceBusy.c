/*
 * XREFs of RaidAdapterDeviceBusy @ 0x1C003511C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     RaidBusyDeviceQueue @ 0x1C004011C (RaidBusyDeviceQueue.c)
 */

__int64 __fastcall RaidAdapterDeviceBusy(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 result; // rax

  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit )
    return RaidBusyDeviceQueue(Unit + 656, a3);
  result = (__int64)&WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    result = HIDWORD(WPP_GLOBAL_Control->Timer);
    if ( (result & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      return WPP_SF_DDD(
               WPP_GLOBAL_Control->AttachedDevice,
               54LL,
               &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
               v4,
               BYTE1(a2),
               BYTE2(a2));
  }
  return result;
}
