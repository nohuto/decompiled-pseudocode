/*
 * XREFs of sub_180054530 @ 0x180054530
 * Callers:
 *     sub_180054C28 @ 0x180054C28 (sub_180054C28.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180067640 @ 0x180067640 (sub_180067640.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180054530(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // r10
  __int64 *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10[4]; // [rsp+40h] [rbp-20h] BYREF

  v8 = 0LL;
  v5 = a4[1];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a4[1];
  }
  *(_QWORD *)&v8 = *a4;
  *((_QWORD *)&v8 + 1) = v5;
  v9[0] = *a3;
  v9[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v6 = sub_18001875C(v10, a2);
  return sub_180067640(a1, v6, v9, &v8);
}
