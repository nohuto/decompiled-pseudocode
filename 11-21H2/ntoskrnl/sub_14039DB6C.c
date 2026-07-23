/*
 * XREFs of sub_14039DB6C @ 0x14039DB6C
 * Callers:
 *     sub_14039DB1C @ 0x14039DB1C (sub_14039DB1C.c)
 * Callees:
 *     sub_14039D79C @ 0x14039D79C (sub_14039D79C.c)
 *     sub_14039DC1C @ 0x14039DC1C (sub_14039DC1C.c)
 *     sub_14039DC38 @ 0x14039DC38 (sub_14039DC38.c)
 *     sub_14039DC8C @ 0x14039DC8C (sub_14039DC8C.c)
 */

__int64 __fastcall sub_14039DB6C(__int64 a1, __int64 a2, char a3, __int64 a4, char a5, unsigned int a6, __int64 a7)
{
  char v7; // bl
  unsigned int v8; // eax
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v7 = a4;
  v15 = 0LL;
  v14 = 0LL;
  if ( a5 )
  {
    LOBYTE(a4) = a3;
    sub_14039DC38(&v14, a1, a2, a4);
  }
  v8 = sub_14039DC1C(a6, a7);
  if ( v8 > 0xB || (dword_140D0689C & 0x80u) == 0 || v7 && v11 + 1 > 0xC )
    return sub_14039D79C((__int64)&v14, v7, a5, v11, v12, v8);
  LOBYTE(v10) = a5;
  LOBYTE(v9) = v7;
  return sub_14039DC8C((unsigned int)&v14, v9, v10, v11, v12, v8);
}
