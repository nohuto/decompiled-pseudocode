/*
 * XREFs of sub_18004FA08 @ 0x18004FA08
 * Callers:
 *     sub_1800446D8 @ 0x1800446D8 (sub_1800446D8.c)
 *     sub_18004F228 @ 0x18004F228 (sub_18004F228.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_180060990 @ 0x180060990 (sub_180060990.c)
 *     sub_18009C1D0 @ 0x18009C1D0 (sub_18009C1D0.c)
 * Callees:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 */

__int64 __fastcall sub_18004FA08(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 16);
  sub_18001CAA0((__int64 *)(a1 + 16), (__int64)v8, a2);
  v4 = a2;
  v5 = v9;
  if ( !sub_18001CB40(v6, v9, v4) || v5 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v5 + 64);
}
