/*
 * XREFs of sub_1800715A4 @ 0x1800715A4
 * Callers:
 *     sub_180070A00 @ 0x180070A00 (sub_180070A00.c)
 * Callees:
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800715A4(__int64 a1)
{
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64, _QWORD *); // r8
  __int64 v3; // r10
  _QWORD v5[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-10h]

  sub_180036808(a1, 1);
  v6 = 0LL;
  if ( sub_18006BC20() )
  {
    v5[1] = v3;
    v5[0] = &std::_Func_impl_no_alloc<_lambda_fc5806797b07904940ba13a2a5c07b95_,void,std::wstring const &>::`vftable';
    v6 = v5;
  }
  return v2(v1, v5);
}
