/*
 * XREFs of sub_18003276C @ 0x18003276C
 * Callers:
 *     sub_180032900 @ 0x180032900 (sub_180032900.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18002E7AC @ 0x18002E7AC (sub_18002E7AC.c)
 *     sub_18002FF08 @ 0x18002FF08 (sub_18002FF08.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18003276C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-18h]
  _BYTE v15[16]; // [rsp+40h] [rbp-10h] BYREF

  sub_180011C50(*a2 + 56LL, &v13);
  sub_18001265C(v13, &v11);
  if ( v14 )
    sub_180010530((__int64)v14);
  sub_180015604(&v13, &v11);
  v4 = sub_18002FF08((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v5 = (__int64 *)(*(_QWORD *)v4 + 48LL);
  v6 = *(_QWORD **)(*(_QWORD *)v4 + 56LL);
  if ( v6 == *(_QWORD **)(*(_QWORD *)v4 + 64LL) )
  {
    sub_18002E7AC(v5, (__int64)v6, a2);
  }
  else
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *v6 = *a2;
    v6[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v5[1] += 16LL;
  }
  if ( v14 )
    sub_180010574(v14);
  sub_180015604(&v13, &v11);
  v7 = sub_18002FF08((__int64 *)(a1 + 728), (__int64)v15, (__int64)&v13);
  v8 = (__int64)(*(_QWORD *)(*(_QWORD *)v7 + 56LL) - *(_QWORD *)(*(_QWORD *)v7 + 48LL)) >> 4;
  if ( v14 )
    sub_180010574(v14);
  if ( v12 )
    sub_180010530(v12);
  v9 = a2[1];
  if ( v9 )
    sub_180010530(v9);
  return v8 - 1;
}
