/*
 * XREFs of RtlXSaveS @ 0x14036DE54
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14020DDFC (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x14020E4AC (KeSaveSupervisorState.c)
 *     KeContextFromKframes @ 0x14030DF40 (KeContextFromKframes.c)
 *     PspGetContext @ 0x140724684 (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14020DFD0 (RtlXSave.c)
 *     XSaveSHelper @ 0x140429AF0 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 _RCX, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return RtlXSave((_DWORD *)_RCX, a2, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  return XSaveSHelper(_RCX, *(_QWORD *)(_RCX + 520) & a2);
}
