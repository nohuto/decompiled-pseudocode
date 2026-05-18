/*
 * XREFs of sub_180059D64 @ 0x180059D64
 * Callers:
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 *     sub_18009F5A0 @ 0x18009F5A0 (sub_18009F5A0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180059D64(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
