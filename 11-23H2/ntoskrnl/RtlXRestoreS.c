/*
 * XREFs of RtlXRestoreS @ 0x14033FF48
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x14020E028 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x14020E4F0 (KeRestoreSupervisorState.c)
 *     KxContextToKframes @ 0x14033FAD0 (KxContextToKframes.c)
 *     PspSetContext @ 0x140724440 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x14020E140 (RtlXRestore.c)
 *     XRestoreSHelper @ 0x14042A560 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
