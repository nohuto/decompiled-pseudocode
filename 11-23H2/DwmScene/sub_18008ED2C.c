/*
 * XREFs of sub_18008ED2C @ 0x18008ED2C
 * Callers:
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_18006DE34 @ 0x18006DE34 (sub_18006DE34.c)
 * Callees:
 *     sub_18008E95C @ 0x18008E95C (sub_18008E95C.c)
 */

char __fastcall sub_18008ED2C(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1944);
  *(_DWORD *)(a1 + 1944) = a2;
  if ( v2 != a2 )
    LOBYTE(v2) = sub_18008E95C(a1);
  return v2;
}
