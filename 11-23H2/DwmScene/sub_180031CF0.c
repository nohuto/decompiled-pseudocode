/*
 * XREFs of sub_180031CF0 @ 0x180031CF0
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
 *     sub_18005BFC0 @ 0x18005BFC0 (sub_18005BFC0.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 *     sub_1800E5C2B @ 0x1800E5C2B (sub_1800E5C2B.c)
 *     sub_1800E5DD5 @ 0x1800E5DD5 (sub_1800E5DD5.c)
 *     sub_1800E5E41 @ 0x1800E5E41 (sub_1800E5E41.c)
 *     sub_1800E5ED1 @ 0x1800E5ED1 (sub_1800E5ED1.c)
 *     sub_1800E5F19 @ 0x1800E5F19 (sub_1800E5F19.c)
 *     sub_1800E60C8 @ 0x1800E60C8 (sub_1800E60C8.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_2 @ 0x1800E618E (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800E618E.c)
 *     sub_1800E61C4 @ 0x1800E61C4 (sub_1800E61C4.c)
 *     unknown_libname_39 @ 0x1800E61FA (unknown_libname_39.c)
 *     unknown_libname_48 @ 0x1800E7A3A (unknown_libname_48.c)
 *     sub_1800E7A94 @ 0x1800E7A94 (sub_1800E7A94.c)
 *     sub_1800E7B24 @ 0x1800E7B24 (sub_1800E7B24.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18003890C @ 0x18003890C (sub_18003890C.c)
 *     sub_1800A0340 @ 0x1800A0340 (sub_1800A0340.c)
 */

__int64 __fastcall sub_180031CF0(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  result = sub_18003890C(a1, &v4);
  if ( v4 )
    result = sub_1800A0340(v4, *(_QWORD *)(a1 + 16));
  if ( v5 )
    result = sub_180010530(v5);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  if ( v3 )
    return sub_180010574(v3);
  return result;
}
