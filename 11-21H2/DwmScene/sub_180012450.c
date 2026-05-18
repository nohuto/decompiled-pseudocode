/*
 * XREFs of sub_180012450 @ 0x180012450
 * Callers:
 *     sub_1800122E4 @ 0x1800122E4 (sub_1800122E4.c)
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 *     sub_18006A884 @ 0x18006A884 (sub_18006A884.c)
 *     sub_18009E1E0 @ 0x18009E1E0 (sub_18009E1E0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_18001298C @ 0x18001298C (sub_18001298C.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

_QWORD *__fastcall sub_180012450(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rbp
  __int64 *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_180043668();
  v4 = *(__int64 **)(a1 + 384);
  for ( i = *(__int64 **)(a1 + 376); i != v4; i += 2 )
  {
    v6 = i[1];
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = i[1];
    }
    v7 = *i;
    v10[1] = v6;
    v10[0] = v7;
    sub_18001298C(v11, v10);
    sub_180010910((__int64)v11);
    sub_180010910((__int64)v10);
    if ( sub_1800122C0(v11) )
      break;
  }
  v8 = sub_18001287C(i);
  if ( v8 == *(_QWORD *)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001298C(a2, v8);
  }
  return a2;
}
