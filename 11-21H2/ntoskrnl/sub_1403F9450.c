/*
 * XREFs of sub_1403F9450 @ 0x1403F9450
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1403F9450(__int64 a1)
{
  sub_140AB9010(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 272))(a1);
}
