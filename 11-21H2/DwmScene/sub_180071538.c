/*
 * XREFs of sub_180071538 @ 0x180071538
 * Callers:
 *     sub_180070A00 @ 0x180070A00 (sub_180070A00.c)
 * Callees:
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18006BC08 @ 0x18006BC08 (sub_18006BC08.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180071538(__int64 a1)
{
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(__int64, _QWORD *); // r8
  __int64 v3; // r10
  _QWORD v5[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-10h]

  sub_180036808(a1, 1);
  v6 = 0LL;
  if ( sub_18006BC08() )
  {
    v5[1] = v3;
    v5[0] = &std::_Func_impl_no_alloc<_lambda_7df625487201977a352489cf8de9dd55_,void,std::wstring const &>::`vftable';
    v6 = v5;
  }
  return v2(v1, v5);
}
