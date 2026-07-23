/*
 * XREFs of sub_140A81184 @ 0x140A81184
 * Callers:
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 *     sub_140A80B3C @ 0x140A80B3C (sub_140A80B3C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140A81184(__int64 a1)
{
  return a1 && *(_WORD *)a1 == 3 && *(_QWORD *)(a1 + 8) && *(int *)(a1 + 4) >= 0;
}
