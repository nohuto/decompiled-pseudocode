/*
 * XREFs of PktMonClientAddEdge @ 0x1C00D2FC4
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C0111C64 (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0111DC0 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C011B78C (ndisPktMonMiniportRegister.c)
 * Callees:
 *     MediaTypeToPacketType @ 0x1C001C550 (MediaTypeToPacketType.c)
 *     PktMonClientAddEdgeEx @ 0x1C00D2FFC (PktMonClientAddEdgeEx.c)
 */

__int64 __fastcall PktMonClientAddEdge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // eax
  int v7; // r9d
  int v8; // r10d

  v6 = MediaTypeToPacketType(a5);
  return PktMonClientAddEdgeEx(v8, v7, a6, v7, v6, a6);
}
