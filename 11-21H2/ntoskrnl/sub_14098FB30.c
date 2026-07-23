/*
 * XREFs of sub_14098FB30 @ 0x14098FB30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140818DF4 @ 0x140818DF4 (sub_140818DF4.c)
 *     sub_14081CE58 @ 0x14081CE58 (sub_14081CE58.c)
 *     sub_14081CF98 @ 0x14081CF98 (sub_14081CF98.c)
 *     sub_1408289F4 @ 0x1408289F4 (sub_1408289F4.c)
 *     sub_14082910C @ 0x14082910C (sub_14082910C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 sub_14098FB30()
{
  int v0; // edi
  int v1; // ecx
  _DWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7[5]; // [rsp+24h] [rbp-14h] BYREF

  v7[0] = 0;
  v6 = 0;
  v0 = sub_14082910C(3, v7);
  if ( v0 >= 0 )
  {
    sub_14081CE58(2);
    sub_140A48330(v1);
    LOBYTE(v2) = 1;
    dword_140D050EC = v7[0];
    v0 = sub_140818DF4(1, v2, &v6);
    sub_140A47CF8(v4, v3);
    sub_14081CF98(2);
    sub_1408289F4();
  }
  return (unsigned int)v0;
}
