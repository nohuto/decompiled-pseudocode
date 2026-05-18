/*
 * XREFs of sub_1800E1B98 @ 0x1800E1B98
 * Callers:
 *     sub_1800E2990 @ 0x1800E2990 (sub_1800E2990.c)
 *     sub_1800F23E6 @ 0x1800F23E6 (sub_1800F23E6.c)
 *     sub_1800F2473 @ 0x1800F2473 (sub_1800F2473.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E1B98(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v3 + 16LL))(v3, a2, a3, v5);
}
