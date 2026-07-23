/*
 * XREFs of KiCollectFullProcessName @ 0x14056A30C
 * Callers:
 *     KiCollectTriageDumpDataBlocks @ 0x14056A354 (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402E6240 (MmIsAddressValidEx.c)
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 */

void __fastcall KiCollectFullProcessName(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 2172) & 0x1000) == 0 && MmIsAddressValidEx(*(_QWORD *)(a1 + 1472)) )
    IoAddTriageDumpDataBlock(*(_QWORD *)(*(_QWORD *)(a1 + 1472) + 8LL), (PVOID)**(unsigned __int16 **)(a1 + 1472));
}
