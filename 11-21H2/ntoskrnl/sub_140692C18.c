/*
 * XREFs of sub_140692C18 @ 0x140692C18
 * Callers:
 *     sub_140692980 @ 0x140692980 (sub_140692980.c)
 *     PsInsertSiloContext @ 0x140692A50 (PsInsertSiloContext.c)
 *     PsReplaceSiloContext @ 0x1409AB820 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140692C18(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
