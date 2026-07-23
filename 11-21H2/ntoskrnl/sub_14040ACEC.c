/*
 * XREFs of sub_14040ACEC @ 0x14040ACEC
 * Callers:
 *     sub_140400C48 @ 0x140400C48 (sub_140400C48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040ACEC(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 4 * ((unsigned __int64)a2 >> 5) + 32) >> (a2 & 0x1F)) & 1;
}
