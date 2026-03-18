/*
 * XREFs of HalSocGetAcpiTable @ 0x1403BE664
 * Callers:
 *     HalpPmTimerDiscover @ 0x1403BCAD0 (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403BCBD0 (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403BCC5C (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403BCDA0 (HalpApicTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403BD04C (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403BD3FC (HalpPicDiscover.c)
 *     HalpHpetDiscover @ 0x1403BD8C8 (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403BE570 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1405220C0 (HalpWdatInitialize.c)
 *     HalpIommuInitDiscard @ 0x140AF9238 (HalpIommuInitDiscard.c)
 *     HalpPciGetHpetInterruptSource @ 0x140B4D700 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140213A40 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
