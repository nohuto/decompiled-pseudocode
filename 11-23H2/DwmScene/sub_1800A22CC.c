/*
 * XREFs of sub_1800A22CC @ 0x1800A22CC
 * Callers:
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_5 @ 0x1800E7A16 (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_1800E7A16.c)
 *     sub_1800E7A70 @ 0x1800E7A70 (sub_1800E7A70.c)
 *     sub_1800E7B00 @ 0x1800E7B00 (sub_1800E7B00.c)
 *     sub_1800E86BA @ 0x1800E86BA (sub_1800E86BA.c)
 *     sub_1800E86CC @ 0x1800E86CC (sub_1800E86CC.c)
 *     sub_1800EAC89 @ 0x1800EAC89 (sub_1800EAC89.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800A22CC(__int64 a1)
{
  char result; // al
  volatile signed __int32 *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_18003890C(a1, &v4);
  result = sub_180011DE0(&v4);
  if ( result )
    result = (**v4)(v4);
  if ( v5 )
    result = sub_180010530(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010574(v3);
  return result;
}
