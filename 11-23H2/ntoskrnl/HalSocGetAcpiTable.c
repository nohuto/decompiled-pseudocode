/*
 * XREFs of HalSocGetAcpiTable @ 0x1403A4DBC
 * Callers:
 *     HalpHpetDiscover @ 0x140377980 (HalpHpetDiscover.c)
 *     HalpRtcDiscover @ 0x140379138 (HalpRtcDiscover.c)
 *     HalpPicDiscover @ 0x1403793D4 (HalpPicDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403A499C (HalpApicTimerDiscover.c)
 *     HalpPmTimerDiscover @ 0x1403A4B18 (HalpPmTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403A4C18 (HalpApicDiscover.c)
 *     HalpWdatDiscover @ 0x1403A4CC8 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x14051F470 (HalpWdatInitialize.c)
 *     HalpIommuIvtDiscover @ 0x140B65294 (HalpIommuIvtDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140B92B50 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140337280 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
