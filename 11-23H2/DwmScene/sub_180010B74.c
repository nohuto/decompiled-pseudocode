/*
 * XREFs of sub_180010B74 @ 0x180010B74
 * Callers:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 * Callees:
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001187C @ 0x18001187C (sub_18001187C.c)
 *     sub_180011B60 @ 0x180011B60 (sub_180011B60.c)
 */

__int64 __fastcall sub_180010B74(__int64 a1, size_t a2, __int64 a3, const void *a4)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // r14

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180011B60();
  v7 = *(_QWORD *)(a1 + 24);
  v8 = sub_18001187C(a2, v7);
  v9 = (_BYTE *)sub_18001090C(v8 + 1);
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = v8;
  v10 = v9;
  memcpy(v9, a4, a2);
  v10[a2] = 0;
  if ( v7 >= 0x10 )
    sub_1800100E8(*(void **)a1, v7 + 1);
  *(_QWORD *)a1 = v10;
  return a1;
}
