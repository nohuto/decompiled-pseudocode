/*
 * XREFs of HalpAddMcaExtendedLogToMemoryErrorSection @ 0x140501DD4
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x140502868 (HalpCreateMcaMemoryErrorRecord.c)
 * Callees:
 *     HalpAddMcaToMemoryErrorSection @ 0x140501E4C (HalpAddMcaToMemoryErrorSection.c)
 *     HalpGetMcaExtendedLogStatusBlock @ 0x140502E04 (HalpGetMcaExtendedLogStatusBlock.c)
 *     HalpAddErrorEntryToPacket @ 0x140518A60 (HalpAddErrorEntryToPacket.c)
 */

__int64 __fastcall HalpAddMcaExtendedLogToMemoryErrorSection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 McaExtendedLogStatusBlock; // rax
  _DWORD *v8; // rdi

  v6 = -1073741823;
  McaExtendedLogStatusBlock = HalpGetMcaExtendedLogStatusBlock();
  v8 = (_DWORD *)McaExtendedLogStatusBlock;
  if ( McaExtendedLogStatusBlock )
  {
    HalpAddErrorEntryToPacket(McaExtendedLogStatusBlock, a2, a3);
    *v8 = 0;
    return 0;
  }
  else
  {
    HalpAddMcaToMemoryErrorSection(a1, a3);
  }
  return v6;
}
