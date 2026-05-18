/*
 * XREFs of sub_1800E1B50 @ 0x1800E1B50
 * Callers:
 *     sub_1800E20F0 @ 0x1800E20F0 (sub_1800E20F0.c)
 *     sub_1800E2460 @ 0x1800E2460 (sub_1800E2460.c)
 *     sub_1800F21BB @ 0x1800F21BB (sub_1800F21BB.c)
 *     sub_1800F222A @ 0x1800F222A (sub_1800F222A.c)
 *     sub_1800F22E1 @ 0x1800F22E1 (sub_1800F22E1.c)
 *     sub_1800F2353 @ 0x1800F2353 (sub_1800F2353.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E1B50(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v2 + 16LL))(v2, a2, v4);
}
