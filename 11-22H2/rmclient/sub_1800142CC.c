/*
 * XREFs of sub_1800142CC @ 0x1800142CC
 * Callers:
 *     sub_1800128FC @ 0x1800128FC (sub_1800128FC.c)
 * Callees:
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 *     sub_180016454 @ 0x180016454 (sub_180016454.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_1800142CC(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // r8d
  unsigned int v4; // ebx

  v1 = a1 + 64;
  sub_18001F1C4(a1 + 64);
  sub_180016454(*(_DWORD *)(a1 + 32) & 0xFFFFFFFC, *(_DWORD *)(a1 + 80), v3, a1);
  if ( a1 )
    v4 = -1073740008;
  else
    v4 = 0;
  *(_DWORD *)(v1 + 8) = 0;
  RtlReleaseSRWLockExclusive(v1);
  return v4;
}
