/*
 * XREFs of sub_18001EC48 @ 0x18001EC48
 * Callers:
 *     sub_18001FA7C @ 0x18001FA7C (sub_18001FA7C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_18001E650 @ 0x18001E650 (sub_18001E650.c)
 *     sub_18001F224 @ 0x18001F224 (sub_18001F224.c)
 */

__int64 *__fastcall sub_18001EC48(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  void *v14; // rbx

  v4 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    sub_180011B60();
  v7 = a1[3];
  v8 = v4 + a2;
  v9 = sub_18001E650(v4 + a2, v7, 0x7FFFFFFFFFFFFFFEuLL);
  v10 = sub_18001217C(v9 + 1);
  v11 = sub_18001090C(v10);
  a1[2] = v8;
  v13 = v11;
  a1[3] = v9;
  if ( v7 < 8 )
  {
    sub_18001F224(v12, v11, a1, v4, a4);
  }
  else
  {
    v14 = (void *)*a1;
    sub_18001F224(v12, v11, *a1, v4, a4);
    sub_1800100E8(v14, 2 * v7 + 2);
  }
  *a1 = v13;
  return a1;
}
