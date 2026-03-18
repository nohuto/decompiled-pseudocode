/*
 * XREFs of HalSocGetAcpiTable @ 0x1403A4BDC
 * Callers:
 *     HalpHpetDiscover @ 0x1403777E0 (HalpHpetDiscover.c)
 *     HalpRtcDiscover @ 0x140378F98 (HalpRtcDiscover.c)
 *     HalpPicDiscover @ 0x140379234 (HalpPicDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403A47BC (HalpApicTimerDiscover.c)
 *     HalpPmTimerDiscover @ 0x1403A4938 (HalpPmTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403A4A38 (HalpApicDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4AE8 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x14051EF20 (HalpWdatInitialize.c)
 *     HalpIommuIvtDiscover @ 0x140B65294 (HalpIommuIvtDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140B92B50 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140336FF0 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
