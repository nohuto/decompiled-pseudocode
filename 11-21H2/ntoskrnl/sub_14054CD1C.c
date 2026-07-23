/*
 * XREFs of sub_14054CD1C @ 0x14054CD1C
 * Callers:
 *     sub_14039DB1C @ 0x14039DB1C (sub_14039DB1C.c)
 * Callees:
 *     sub_14039DC1C @ 0x14039DC1C (sub_14039DC1C.c)
 *     sub_14054CBD0 @ 0x14054CBD0 (sub_14054CBD0.c)
 *     sub_14054CFC4 @ 0x14054CFC4 (sub_14054CFC4.c)
 */

void __fastcall sub_14054CD1C(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r10d
  char v14; // r11
  __int64 v15[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v15, 0, 32);
  if ( a5 )
  {
    v15[0] = a1;
    v8 = a3 == 0 ? 4 : 0;
    v9 = v8 | 2;
    if ( a1 )
      v9 = v8;
    v15[1] = v9;
  }
  v10 = sub_14039DC1C(a6, a7);
  if ( v10 + ((dword_140D0688C >> 8) & 0xF) + 5 > 0xE || (dword_140D0689C & 0x80u) == 0 || v14 && v13 + 1 > 0xC )
  {
    LOBYTE(v11) = v14;
    sub_14054CFC4((unsigned int)v15, a2, v11, v12, v13, (__int64)a7, v10);
  }
  else
  {
    sub_14054CBD0(v15, a2, v14, v12, v13, a7, v10);
  }
}
