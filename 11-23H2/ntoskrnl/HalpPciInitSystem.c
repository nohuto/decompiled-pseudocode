/*
 * XREFs of HalpPciInitSystem @ 0x140A91560
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitNonBusHandler @ 0x140B3500C (HalpInitNonBusHandler.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140B69D74 (HalpPciInitializeMmConfigAccess.c)
 *     HalpPciReportMmConfigAddressRange @ 0x140B69E10 (HalpPciReportMmConfigAddressRange.c)
 */

__int64 __fastcall HalpPciInitSystem(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 26 )
      HalpPciReportMmConfigAddressRange();
  }
  else
  {
    HalpPCIConfigLock = 0LL;
    HalpPciInitializeMmConfigAccess(a3);
    HalpInitNonBusHandler();
  }
  return 0LL;
}
