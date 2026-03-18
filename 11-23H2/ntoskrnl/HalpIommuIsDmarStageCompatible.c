/*
 * XREFs of HalpIommuIsDmarStageCompatible @ 0x1405182F8
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x140829364 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIommuIsDmarStageCompatible(__int64 a1, char a2)
{
  int v2; // r8d

  v2 = a2 != 0 ? 128 : 256;
  return (v2 & *(_DWORD *)(a1 + 488)) == v2;
}
