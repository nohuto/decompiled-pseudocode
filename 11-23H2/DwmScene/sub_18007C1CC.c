/*
 * XREFs of sub_18007C1CC @ 0x18007C1CC
 * Callers:
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18007C218 @ 0x18007C218 (sub_18007C218.c)
 */

_QWORD *__fastcall sub_18007C1CC(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = (__int64 *)sub_18007C218(v7);
  v3 = *v2;
  *v2 = 0LL;
  *a1 = v3;
  v4 = v2[1];
  v2[1] = 0LL;
  v5 = v8;
  a1[1] = v4;
  if ( v5 )
    sub_180010530(v5);
  return a1;
}
