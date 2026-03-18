/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1406D231C
 * Callers:
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB38 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x1406DC440 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CF18 (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140710664 (CmpGetKeyNodeForKcb.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140746FA0 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0
    && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
    && (int)HvpMarkCellDirty(a1, a3) >= 0 )
  {
    *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
