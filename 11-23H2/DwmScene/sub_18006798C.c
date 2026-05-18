/*
 * XREFs of sub_18006798C @ 0x18006798C
 * Callers:
 *     sub_180067030 @ 0x180067030 (sub_180067030.c)
 * Callees:
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180062F04 @ 0x180062F04 (sub_180062F04.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006798C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, _QWORD *); // r8
  _QWORD v5[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-10h]

  sub_180034094(a1, 1);
  v6 = 0LL;
  if ( sub_180062F04() )
  {
    v5[1] = a1;
    v5[0] = &std::_Func_impl_no_alloc<_lambda_718c83fccd190710b454871d75af9a8f_,void,std::wstring const &>::`vftable';
    v6 = v5;
  }
  return v3(v2, v5);
}
