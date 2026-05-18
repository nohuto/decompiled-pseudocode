/*
 * XREFs of sub_18001FEA4 @ 0x18001FEA4
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_1800363BC @ 0x1800363BC (sub_1800363BC.c)
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 *     unknown_libname_27 @ 0x1800E5BF5 (unknown_libname_27.c)
 *     unknown_libname_30 @ 0x1800E5DB1 (unknown_libname_30.c)
 *     sub_1800E5DE7 @ 0x1800E5DE7 (sub_1800E5DE7.c)
 *     sub_1800E5E0B @ 0x1800E5E0B (sub_1800E5E0B.c)
 *     sub_1800E5E9B @ 0x1800E5E9B (sub_1800E5E9B.c)
 *     sub_1800E5EE3 @ 0x1800E5EE3 (sub_1800E5EE3.c)
 *     sub_1800E617C @ 0x1800E617C (sub_1800E617C.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_3 @ 0x1800E61A0 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800E61A0.c)
 *     sub_1800E61E8 @ 0x1800E61E8 (sub_1800E61E8.c)
 *     unknown_libname_40 @ 0x1800E620C (unknown_libname_40.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180020094 @ 0x180020094 (sub_180020094.c)
 *     sub_18002015C @ 0x18002015C (sub_18002015C.c)
 */

__int64 __fastcall sub_18001FEA4(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 48) )
    result = sub_18002015C(
               *(_QWORD *)a1,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 56));
  else
    result = sub_180020094(
               *(_QWORD *)a1,
               2,
               *(_QWORD *)(a1 + 24),
               *(_DWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return sub_180010530(v3);
  return result;
}
