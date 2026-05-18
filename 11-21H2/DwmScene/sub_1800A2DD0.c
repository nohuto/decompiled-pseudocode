/*
 * XREFs of sub_1800A2DD0 @ 0x1800A2DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A2D48 @ 0x1800A2D48 (sub_1800A2D48.c)
 */

__int64 __fastcall sub_1800A2DD0(_DWORD *a1, __int64 *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v2 = *((_DWORD *)a2 + 2);
  v4 = *a2;
  v5 = v2;
  return sub_1800A2D48(a1, &v4);
}
