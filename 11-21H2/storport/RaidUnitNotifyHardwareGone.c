/*
 * XREFs of RaidUnitNotifyHardwareGone @ 0x1C0022B7C
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C001AC6C (RaidBusEnumeratorProcessModifiedNodes.c)
 *     StorProcessNVMeModifiedNodes @ 0x1C0065F38 (StorProcessNVMeModifiedNodes.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitNotifyHardwareGone(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 448);
  if ( (v1 & 4) != 0 )
  {
    v1 &= ~4u;
    *(_BYTE *)(a1 + 448) = v1;
  }
  return (v1 & 2) != 0;
}
