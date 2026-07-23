/*
 * XREFs of sub_140294D90 @ 0x140294D90
 * Callers:
 *     sub_140295210 @ 0x140295210 (sub_140295210.c)
 *     RtlUnwindEx @ 0x1402957A0 (RtlUnwindEx.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140297A70 @ 0x140297A70 (sub_140297A70.c)
 *     sub_1404608E8 @ 0x1404608E8 (sub_1404608E8.c)
 *     sub_140562EBC @ 0x140562EBC (sub_140562EBC.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 *     sub_140631A8C @ 0x140631A8C (sub_140631A8C.c)
 *     sub_140636208 @ 0x140636208 (sub_140636208.c)
 *     sub_140A81B20 @ 0x140A81B20 (sub_140A81B20.c)
 *     sub_140A98E28 @ 0x140A98E28 (sub_140A98E28.c)
 * Callees:
 *     sub_1402AB9C0 @ 0x1402AB9C0 (sub_1402AB9C0.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 */

__int64 __fastcall sub_140294D90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax

  v6 = sub_14041FAB0();
  return sub_1402AB9C0(v6, a1, a2, a3);
}
