/*
 * XREFs of IopMcShouldYield @ 0x14055F470
 * Callers:
 *     IopMcAddMdlPagesToTable @ 0x14055EBD0 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14055F2C0 (IopMcRemoveMdlPagesFromTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140333AD0 (KeShouldYieldProcessor.c)
 */

bool __fastcall IopMcShouldYield(int a1, unsigned __int8 a2)
{
  if ( a1 && (a1 & 0xF) == 0 )
  {
    if ( (dword_140C5D764 & 0x40000000) != 0 )
      return 1;
    if ( a2 < 2u )
      return KeShouldYieldProcessor() != 0;
  }
  return 0;
}
