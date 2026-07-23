/*
 * XREFs of KeSaveExtendedProcessorState @ 0x140242190
 * Callers:
 *     sub_1403FB2A4 @ 0x1403FB2A4 (sub_1403FB2A4.c)
 *     sub_140615570 @ 0x140615570 (sub_140615570.c)
 * Callees:
 *     sub_1402421DC @ 0x1402421DC (sub_1402421DC.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall KeSaveExtendedProcessorState(ULONG64 Mask, PXSTATE_SAVE XStateSave)
{
  bool v2; // zf

  if ( (qword_140D068D8 & 0x800000) != 0 )
    v2 = (~MEMORY[0xFFFFF780000003D8] & Mask) == 0;
  else
    v2 = (Mask & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  if ( !v2 )
    KeBugCheckEx(0x131u, 0LL, qword_140D068D8 & 0x800000, (unsigned int)Mask, HIDWORD(Mask));
  return sub_1402421DC(Mask);
}
