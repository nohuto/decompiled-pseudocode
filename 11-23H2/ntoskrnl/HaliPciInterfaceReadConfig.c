/*
 * XREFs of HaliPciInterfaceReadConfig @ 0x14033F5C0
 * Callers:
 *     HalpKdReadPCIConfig @ 0x140398250 (HalpKdReadPCIConfig.c)
 *     HaliHandlePCIConfigSpaceAccess @ 0x140520DB0 (HaliHandlePCIConfigSpaceAccess.c)
 * Callees:
 *     HalpPCIConfig @ 0x14033F630 (HalpPCIConfig.c)
 */

__int64 __fastcall HaliPciInterfaceReadConfig(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _WORD *a4,
        int a5,
        unsigned int a6)
{
  unsigned __int8 v7; // di

  v7 = a2;
  HalpPCIConfig(a2 >> 8);
  if ( a6 >= 2 && *a4 != 0xFFFF && v7 > (unsigned int)HalpMaxPciBus )
    HalpMaxPciBus = v7;
  return a6;
}
