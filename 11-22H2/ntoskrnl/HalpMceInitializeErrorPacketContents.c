/*
 * XREFs of HalpMceInitializeErrorPacketContents @ 0x140A8B3A8
 * Callers:
 *     HalpMceInitializeErrorPacket @ 0x140A8B33C (HalpMceInitializeErrorPacket.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A950A4 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A951E4 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 */

GUID *__fastcall HalpMceInitializeErrorPacketContents(GUID *a1)
{
  GUID *result; // rax

  memset(a1, 0, 0x174uLL);
  *(_DWORD *)a1[1].Data4 = HalpMceErrorSourceId;
  result = a1 + 5;
  *(_QWORD *)&a1[3].Data1 = a1 + 5;
  a1[2] = MCE_NOTIFY_TYPE_GUID;
  a1->Data1 = 1095059543;
  *(_DWORD *)&a1->Data2 = 3;
  *(_DWORD *)a1->Data4 = 372;
  *(_DWORD *)a1[3].Data4 = 1;
  a1[4].Data1 = 80;
  *(_DWORD *)&a1[4].Data2 = 292;
  return result;
}
