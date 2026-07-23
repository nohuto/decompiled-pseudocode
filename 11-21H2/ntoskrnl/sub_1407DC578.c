/*
 * XREFs of sub_1407DC578 @ 0x1407DC578
 * Callers:
 *     sub_1407D8870 @ 0x1407D8870 (sub_1407D8870.c)
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1407DC578(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
