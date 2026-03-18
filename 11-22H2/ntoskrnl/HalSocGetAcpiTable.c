/*
 * XREFs of HalSocGetAcpiTable @ 0x1403A447C
 * Callers:
 *     HalpHpetDiscover @ 0x140377E30 (HalpHpetDiscover.c)
 *     HalpRtcDiscover @ 0x1403795E8 (HalpRtcDiscover.c)
 *     HalpPicDiscover @ 0x140379884 (HalpPicDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403A405C (HalpApicTimerDiscover.c)
 *     HalpPmTimerDiscover @ 0x1403A41D8 (HalpPmTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403A42D8 (HalpApicDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4388 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x14051EFE0 (HalpWdatInitialize.c)
 *     HalpIommuIvtDiscover @ 0x140B66634 (HalpIommuIvtDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140B93B50 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140336E50 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
