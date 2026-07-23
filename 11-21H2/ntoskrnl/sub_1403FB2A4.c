/*
 * XREFs of sub_1403FB2A4 @ 0x1403FB2A4
 * Callers:
 *     sub_14056AF80 @ 0x14056AF80 (sub_14056AF80.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x140242190 (KeSaveExtendedProcessorState.c)
 *     sub_140259650 @ 0x140259650 (sub_140259650.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_1403FB2A4(PXSTATE_SAVE XStateSave)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (((unsigned __int8)dword_140C094E0 | (unsigned __int8)sub_140259650()) & 0x10) != 0 )
    sub_14056AF38(544042361LL);
  if ( KeGetCurrentIrql() <= 2u )
  {
    if ( KeSaveExtendedProcessorState(4uLL, XStateSave) < 0 )
      return 209715720;
    return v2;
  }
  else
  {
    return 209715720;
  }
}
