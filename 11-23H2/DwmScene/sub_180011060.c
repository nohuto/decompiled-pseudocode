/*
 * XREFs of sub_180011060 @ 0x180011060
 * Callers:
 *     sub_180010794 @ 0x180010794 (sub_180010794.c)
 *     sub_180015F5C @ 0x180015F5C (sub_180015F5C.c)
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     sub_1800249DC @ 0x1800249DC (sub_1800249DC.c)
 *     sub_1800541A8 @ 0x1800541A8 (sub_1800541A8.c)
 *     sub_18006EED4 @ 0x18006EED4 (sub_18006EED4.c)
 *     sub_180083D68 @ 0x180083D68 (sub_180083D68.c)
 *     sub_180085FFC @ 0x180085FFC (sub_180085FFC.c)
 *     sub_180087FDC @ 0x180087FDC (sub_180087FDC.c)
 *     sub_18008912C @ 0x18008912C (sub_18008912C.c)
 *     sub_1800899E4 @ 0x1800899E4 (sub_1800899E4.c)
 *     sub_180089C74 @ 0x180089C74 (sub_180089C74.c)
 *     sub_180089DB4 @ 0x180089DB4 (sub_180089DB4.c)
 *     sub_180089EF4 @ 0x180089EF4 (sub_180089EF4.c)
 *     sub_18008A034 @ 0x18008A034 (sub_18008A034.c)
 *     sub_18008A174 @ 0x18008A174 (sub_18008A174.c)
 *     sub_18008BA00 @ 0x18008BA00 (sub_18008BA00.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011060(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a2;
}
