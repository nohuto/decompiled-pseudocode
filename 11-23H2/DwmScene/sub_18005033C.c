/*
 * XREFs of sub_18005033C @ 0x18005033C
 * Callers:
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18004DF24 @ 0x18004DF24 (sub_18004DF24.c)
 *     sub_18004E718 @ 0x18004E718 (sub_18004E718.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18005033C(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+10h]

  v8 = a2;
  sub_18004E718(a2);
  v4 = **(_QWORD **)(a1 + 18560);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    sub_18004DF24(a2, (__int64)v6, (_QWORD *)(v4 + 32));
    sub_18001D3F8(&v7);
    v4 = v7;
  }
  return a2;
}
