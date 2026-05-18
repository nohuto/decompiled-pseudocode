/*
 * XREFs of sub_18004FA5C @ 0x18004FA5C
 * Callers:
 *     sub_18004F360 @ 0x18004F360 (sub_18004F360.c)
 *     sub_18007264C @ 0x18007264C (sub_18007264C.c)
 *     sub_180082CD8 @ 0x180082CD8 (sub_180082CD8.c)
 * Callees:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 */

__int64 __fastcall sub_18004FA5C(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)(a1 + 2088);
  sub_18001CAA0((__int64 *)(a1 + 2088), (__int64)v8, a2);
  v4 = a2;
  v5 = v9;
  if ( !sub_18001CB40(v6, v9, v4) || v5 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v5 + 64);
}
