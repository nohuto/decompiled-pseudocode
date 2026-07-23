/*
 * XREFs of sub_14063A59C @ 0x14063A59C
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_14062DD68 @ 0x14062DD68 (sub_14062DD68.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 *     sub_1409E1FA0 @ 0x1409E1FA0 (sub_1409E1FA0.c)
 *     sub_1409E2AC8 @ 0x1409E2AC8 (sub_1409E2AC8.c)
 *     sub_1409E3B48 @ 0x1409E3B48 (sub_1409E3B48.c)
 *     sub_1409EA760 @ 0x1409EA760 (sub_1409EA760.c)
 *     sub_140A976A8 @ 0x140A976A8 (sub_140A976A8.c)
 *     sub_140A976F4 @ 0x140A976F4 (sub_140A976F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14063A59C(int a1, int a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  char v4; // dl
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+10h] [rbp+10h]

  v6 = a1;
  v2 = 0;
  v3 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v4 = *((_BYTE *)&v7 + v3);
    if ( v4 == 42 )
      return 1LL;
    if ( v4 != 63 && *((_BYTE *)&v6 + v3) != v4 )
      break;
    ++v2;
    ++v3;
    if ( v2 >= 4 )
      return 1LL;
  }
  return 0LL;
}
