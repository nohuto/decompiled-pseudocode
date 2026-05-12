/*
 * XREFs of ?IsContainer@SC_PART_ENTRY@@QEAAEXZ @ 0x1C000CBE8
 * Callers:
 *     PmSetLegacyRemovableFlag @ 0x1C0002E64 (PmSetLegacyRemovableFlag.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall SC_PART_ENTRY::IsContainer(SC_PART_ENTRY *this)
{
  unsigned __int8 result; // al
  char v2; // cl

  result = 0;
  if ( !*(_DWORD *)this )
  {
    v2 = *((_BYTE *)this + 32);
    if ( v2 == 5 || v2 == 15 )
      return 1;
  }
  return result;
}
