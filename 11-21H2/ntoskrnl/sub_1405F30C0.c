/*
 * XREFs of sub_1405F30C0 @ 0x1405F30C0
 * Callers:
 *     sub_1405F2F0C @ 0x1405F2F0C (sub_1405F2F0C.c)
 *     sub_1405F3028 @ 0x1405F3028 (sub_1405F3028.c)
 * Callees:
 *     sub_14022FB20 @ 0x14022FB20 (sub_14022FB20.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140365700 @ 0x140365700 (sub_140365700.c)
 *     sub_1405F32FC @ 0x1405F32FC (sub_1405F32FC.c)
 *     sub_1405F36B0 @ 0x1405F36B0 (sub_1405F36B0.c)
 */

__int64 __fastcall sub_1405F30C0(__int128 *a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v13; // rax
  int v14; // r9d
  int v15; // r10d
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  if ( (_WORD)a2 )
  {
    v11 = 0;
  }
  else
  {
    v16 = *a1;
    v8 = sub_140362B58(&v16);
    v10 = sub_14022FB20((__int64)(v8 + 2), 2 * ((unsigned __int64)(v9 - v8[1]) >> 20));
    if ( !v10 )
      return sub_1405F36B0(a1, a2, a3, a4);
    v11 = v10 - 1;
    if ( v11 == 2 )
      return sub_1405F36B0(a1, a2, a3, a4);
  }
  v13 = sub_140365700((__int64)&a1[12 * v11 + 20], a2);
  if ( v13 )
    return sub_1405F32FC(v15 + (int)a1 + 320, v13, a2, v14, a4);
  else
    return -1LL;
}
