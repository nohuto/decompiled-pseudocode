/*
 * XREFs of sub_1800294DC @ 0x1800294DC
 * Callers:
 *     sub_18004A530 @ 0x18004A530 (sub_18004A530.c)
 *     sub_18004C8D0 @ 0x18004C8D0 (sub_18004C8D0.c)
 *     sub_1800592A0 @ 0x1800592A0 (sub_1800592A0.c)
 *     sub_18005938C @ 0x18005938C (sub_18005938C.c)
 *     sub_18005CAD0 @ 0x18005CAD0 (sub_18005CAD0.c)
 *     sub_18008CE00 @ 0x18008CE00 (sub_18008CE00.c)
 *     sub_18009C708 @ 0x18009C708 (sub_18009C708.c)
 *     sub_18009CD20 @ 0x18009CD20 (sub_18009CD20.c)
 *     sub_1800C8BC0 @ 0x1800C8BC0 (sub_1800C8BC0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800294DC(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64))
{
  __int64 result; // rax

  do
  {
    result = a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
  return result;
}
