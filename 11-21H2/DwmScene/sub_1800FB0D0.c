/*
 * XREFs of sub_1800FB0D0 @ 0x1800FB0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800FACAC @ 0x1800FACAC (sub_1800FACAC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FB0D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 (__fastcall *v4)(__int64, void ***); // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  void **v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+38h] [rbp-38h]
  void ***v12; // [rsp+68h] [rbp-8h]

  v3 = a2[1];
  v4 = *(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)a1 + 48LL);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  v5 = *a2;
  v12 = 0LL;
  v9[0] = v5;
  v9[1] = v3;
  if ( sub_1800FACAC() )
  {
    v10 = &std::_Func_impl_no_alloc<_lambda_67085dfa66b26479f227a386c4cd5720_,void,>::`vftable';
    v11 = 0LL;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *(_QWORD *)&v11 = v6;
    v12 = &v10;
    *((_QWORD *)&v11 + 1) = v7;
  }
  sub_180010910((__int64)v9);
  return v4(a1, &v10);
}
