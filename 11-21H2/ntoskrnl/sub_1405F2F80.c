/*
 * XREFs of sub_1405F2F80 @ 0x1405F2F80
 * Callers:
 *     sub_1405F2E5C @ 0x1405F2E5C (sub_1405F2E5C.c)
 * Callees:
 *     sub_14022FB20 @ 0x14022FB20 (sub_14022FB20.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_1405F327C @ 0x1405F327C (sub_1405F327C.c)
 *     sub_1405F3544 @ 0x1405F3544 (sub_1405F3544.c)
 */

__int64 __fastcall sub_1405F2F80(__int128 *a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( (_WORD)a2 )
    return sub_1405F327C(&a1[12 * v3 + 20], a2);
  v11 = *a1;
  v7 = sub_140362B58(&v11);
  v9 = sub_14022FB20((__int64)(v7 + 2), 2 * ((unsigned __int64)(v8 - v7[1]) >> 20));
  if ( v9 && (v3 = v9 - 1, (_DWORD)v9 != 3) )
    return sub_1405F327C(&a1[12 * v3 + 20], a2);
  else
    return sub_1405F3544(a1, a2, a3);
}
