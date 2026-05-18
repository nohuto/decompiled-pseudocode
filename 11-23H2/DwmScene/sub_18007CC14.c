/*
 * XREFs of sub_18007CC14 @ 0x18007CC14
 * Callers:
 *     sub_18007CC88 @ 0x18007CC88 (sub_18007CC88.c)
 *     sub_18007FE50 @ 0x18007FE50 (sub_18007FE50.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007CC14(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v3 = *(_QWORD *)(a1 + 56);
    if ( !v3 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v5);
  }
  return sub_18001DE1C(a1, a2);
}
