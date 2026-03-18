/*
 * XREFs of KeInitializeGate @ 0x140293234
 * Callers:
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x1408372A0 (MiInitializePartition.c)
 *     MiZeroHugeRangeCore @ 0x140A2DEFC (MiZeroHugeRangeCore.c)
 *     MmScrubMemory @ 0x140A46AC4 (MmScrubMemory.c)
 *     KiInitializeProcessor @ 0x140A8EC24 (KiInitializeProcessor.c)
 *     sub_140B0F838 @ 0x140B0F838 (sub_140B0F838.c)
 *     sub_140B18070 @ 0x140B18070 (sub_140B18070.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = a2;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  return result;
}
