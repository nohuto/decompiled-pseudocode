/*
 * XREFs of sub_18001E228 @ 0x18001E228
 * Callers:
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_18001E650 @ 0x18001E650 (sub_18001E650.c)
 */

__int64 __fastcall sub_18001E228(__int64 a1, unsigned __int64 a2, __int64 a3, const void *a4)
{
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  _WORD *v10; // rax
  _WORD *v11; // rbp

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    sub_180011B60();
  v7 = *(_QWORD *)(a1 + 24);
  v8 = sub_18001E650(a2, v7);
  v9 = sub_18001217C(v8 + 1);
  v10 = (_WORD *)sub_18001090C(v9);
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 16) = a2;
  v11 = v10;
  memcpy(v10, a4, 2 * a2);
  v11[a2] = 0;
  if ( v7 >= 8 )
    sub_1800100E8(*(void **)a1, 2 * v7 + 2);
  *(_QWORD *)a1 = v11;
  return a1;
}
