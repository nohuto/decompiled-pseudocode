/*
 * XREFs of sub_140210110 @ 0x140210110
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140210110(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 120);
  return (v1 & 0x20000) != 0 && (v1 & 0x100000) == 0;
}
