/*
 * XREFs of sub_180073CE0 @ 0x180073CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 */

_QWORD *__fastcall sub_180073CE0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD v7[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v9[5]; // [rsp+48h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  v5 = sub_180012440(v9, (__int64)&unk_1801D3FC8);
  sub_18004051C(v4, (__int64)v7, -1LL, (__int64)v5);
  sub_18001246C(v8, (_QWORD *)(*(_QWORD *)(a1 + 8) + 320LL));
  *a2 = v7[0];
  a2[1] = v7[1];
  a2[2] = v8[0];
  a2[3] = v8[1];
  return a2;
}
