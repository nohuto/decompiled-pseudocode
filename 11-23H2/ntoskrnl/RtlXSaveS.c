/*
 * XREFs of RtlXSaveS @ 0x14036E644
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14020DDDC (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x14020E48C (KeSaveSupervisorState.c)
 *     KeContextFromKframes @ 0x14030E3B0 (KeContextFromKframes.c)
 *     PspGetContext @ 0x140724814 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14020DFB0 (RtlXSave.c)
 *     XSaveSHelper @ 0x14042A540 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 _RCX, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXSave((_DWORD *)_RCX, a2, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  return XSaveSHelper(_RCX, *(_QWORD *)(_RCX + 520) & a2);
}
