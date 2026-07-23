/*
 * XREFs of PopSetupMixedRealitytNotification @ 0x140864828
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupMixedRealitytNotification()
{
  unsigned __int64 Buffer; // [rsp+50h] [rbp+8h] BYREF
  char v2; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 0xFFFFFFFF00000001uLL;
  ZwUpdateWnfStateData(&WNF_SEB_MIXED_REALITY, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return ExSubscribeWnfStateChange(
           (__int64)&v2,
           (__int64)&WNF_SEB_MIXED_REALITY,
           1,
           0,
           (__int64)PopWnfMixedRealityCallback,
           0LL);
}
