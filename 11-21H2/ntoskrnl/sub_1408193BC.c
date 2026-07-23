/*
 * XREFs of sub_1408193BC @ 0x1408193BC
 * Callers:
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 * Callees:
 *     sub_140762AB4 @ 0x140762AB4 (sub_140762AB4.c)
 */

char __fastcall sub_1408193BC(int a1)
{
  __int64 v1; // rcx
  char v2; // r10
  char v4; // al

  v1 = sub_140762AB4(a1);
  if ( v1 )
  {
    v4 = v2;
    if ( *(_BYTE *)(v1 + 19) != v2 )
      return 1;
    return v4;
  }
  return v2;
}
