/*
 * XREFs of sub_18009BD28 @ 0x18009BD28
 * Callers:
 *     sub_18009C708 @ 0x18009C708 (sub_18009C708.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     sub_18009BE08 @ 0x18009BE08 (sub_18009BE08.c)
 */

__int64 __fastcall sub_18009BD28(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v11[7]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp-1h]
  _BYTE v13[56]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+3Fh]

  v2 = *a2;
  v12 = 0LL;
  v10 = v2;
  v4 = sub_18009BE08(&v10);
  if ( v4 )
  {
    v11[1] = v6;
    v11[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
    v12 = v11;
  }
  v7 = (_QWORD *)((unsigned __int64)v11 & -(__int64)(v4 != 0));
  if ( v7 == v11 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v14 = 0LL;
    sub_18002771C((__int64)v13, (__int64)v11);
    sub_18002771C((__int64)v11, a1);
    sub_18002771C(a1, (__int64)v13);
    sub_18001DE1C((__int64)v13, v8);
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v7;
  }
  sub_18001DE1C((__int64)v11, v5);
  return a1;
}
