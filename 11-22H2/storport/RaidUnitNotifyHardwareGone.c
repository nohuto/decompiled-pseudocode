/*
 * XREFs of RaidUnitNotifyHardwareGone @ 0x1C0021F90
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0015DC4 (RaidBusEnumeratorProcessModifiedNodes.c)
 *     StorProcessNVMeModifiedNodes @ 0x1C0074A18 (StorProcessNVMeModifiedNodes.c)
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
