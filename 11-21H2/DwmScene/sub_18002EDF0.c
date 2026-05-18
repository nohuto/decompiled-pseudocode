/*
 * XREFs of sub_18002EDF0 @ 0x18002EDF0
 * Callers:
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18002EDF0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(a1 + 136);
  while ( v1 != v2 )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( !v3 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      return;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v1 += 64LL;
  }
}
