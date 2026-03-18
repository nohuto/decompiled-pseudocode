/*
 * XREFs of IsPciBusExtension @ 0x1C008A778
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028860 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1C008A688 (IsNsobjPciBus.c)
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(volatile signed __int32 **)(a1 + 760));
}
