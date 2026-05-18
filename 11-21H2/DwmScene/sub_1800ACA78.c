/*
 * XREFs of sub_1800ACA78 @ 0x1800ACA78
 * Callers:
 *     sub_1800AD694 @ 0x1800AD694 (sub_1800AD694.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180029710 @ 0x180029710 (sub_180029710.c)
 *     sub_1800ACB98 @ 0x1800ACB98 (sub_1800ACB98.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800ACA78(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  char v4; // al
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _BYTE *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v12[7]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp-1h]
  _BYTE v14[56]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE *v15; // [rsp+A8h] [rbp+3Fh]

  v2 = *a2;
  v13 = 0LL;
  v11 = v2;
  v4 = sub_1800ACB98(&v11);
  if ( v4 )
  {
    v12[1] = v5;
    v12[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
    v13 = v12;
  }
  v6 = (_QWORD *)((unsigned __int64)v12 & -(__int64)(v4 != 0));
  if ( v6 == v12 || (v7 = *(_QWORD **)(a1 + 56), v7 == (_QWORD *)a1) )
  {
    v15 = 0LL;
    sub_180029710((__int64)v14, (__int64)v12);
    sub_180029710((__int64)v12, a1);
    sub_180029710(a1, (__int64)v14);
    if ( v15 )
    {
      v8 = v14;
      LOBYTE(v8) = v15 != v14;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v15 + 32LL))(v15, v8);
    }
    v7 = v13;
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v6;
  }
  if ( v7 )
  {
    v9 = v12;
    LOBYTE(v9) = v7 != v12;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v9);
  }
  return a1;
}
