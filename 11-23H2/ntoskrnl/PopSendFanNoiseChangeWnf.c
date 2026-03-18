/*
 * XREFs of PopSendFanNoiseChangeWnf @ 0x1408642AC
 * Callers:
 *     PopFanUpdateSpeed @ 0x140847E90 (PopFanUpdateSpeed.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_FAN_NOISE_CHANGE, (__int64)&v2);
}
