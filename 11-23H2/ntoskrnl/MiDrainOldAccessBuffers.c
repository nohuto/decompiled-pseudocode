/*
 * XREFs of MiDrainOldAccessBuffers @ 0x14028705C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025B730 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiEmptyPageAccessLog @ 0x1402E21D0 (MiEmptyPageAccessLog.c)
 */

void __fastcall MiDrainOldAccessBuffers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 SharedVm; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // rax

  v4 = &unk_140C6A1A8;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v4 = (_QWORD *)(a1 + 232);
  if ( *v4 )
  {
    SharedVm = MiGetSharedVm(a1, a2, a3, a4);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
    v11 = (_QWORD *)*v4;
    if ( *v4 )
    {
      v8 = (_QWORD *)*v11;
      v9 = (_QWORD *)*v4;
      if ( *v11 )
      {
        do
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      if ( a2 - v9[2] > (unsigned __int64)PfKernelGlobals )
      {
        MiEmptyPageAccessLog();
        *v4 = 0LL;
      }
    }
    v12 = MiGetSharedVm(a1, v8, v9, v10);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
  }
}
