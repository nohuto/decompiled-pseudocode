/*
 * XREFs of MiPostInsertVad @ 0x14030BE50
 * Callers:
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 * Callees:
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     MiAweViewInserter @ 0x140A4156C (MiAweViewInserter.c)
 */

int __fastcall MiPostInsertVad(__int64 a1, __int64 a2, __int64 a3)
{
  int result; // eax

  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    *(_QWORD *)(a1 + 112) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
    result = MiManageSubsectionView(*(__int64 **)(a1 + 72), (_QWORD *)(a1 + 96), 3);
  }
  if ( a3 )
    return MiAweViewInserter(KeGetCurrentThread()->ApcState.Process, a3);
  return result;
}
