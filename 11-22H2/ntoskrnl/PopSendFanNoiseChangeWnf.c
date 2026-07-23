/*
 * XREFs of PopSendFanNoiseChangeWnf @ 0x14086466C
 * Callers:
 *     PopFanUpdateSpeed @ 0x1408023F0 (PopFanUpdateSpeed.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  Buffer = a1;
  return ZwUpdateWnfStateData(&WNF_PO_FAN_NOISE_CHANGE, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
