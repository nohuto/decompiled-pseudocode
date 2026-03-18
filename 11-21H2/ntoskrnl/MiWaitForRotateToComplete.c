/*
 * XREFs of MiWaitForRotateToComplete @ 0x140201E8C
 * Callers:
 *     MiUserFault @ 0x14031CD90 (MiUserFault.c)
 * Callees:
 *     MiUnlockFaultWorkingSet @ 0x14024D050 (MiUnlockFaultWorkingSet.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14030EA70 (MiUnlockAndDereferenceVadShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = a2;
  v5 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  for ( i = (_QWORD *)Process[1].Affinity.StaticBitmap[9]; i; i = (_QWORD *)*i )
  {
    v8 = i[1];
    if ( v5 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
      && v5 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v3;
      v3 = 1;
      if ( (*(_BYTE *)(v4 + 13) & 1) != 0 )
      {
        if ( !_InterlockedIncrement((volatile signed __int32 *)(v8 + 36)) )
          __fastfail(0xEu);
        LOBYTE(a2) = *(_BYTE *)(v4 + 12);
        MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], a2);
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v8 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x40u;
        MiUnlockAndDereferenceVadShared((PVOID)v8);
        SharedVm = MiGetSharedVm(&Process[1].ActiveProcessors.StaticBitmap[26]);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        *(_DWORD *)(SharedVm + 4) = 0;
      }
      else
      {
        MiUnlockFaultWorkingSet(v4);
        v10 = MiGetSharedVm(&Process[1].ActiveProcessors.StaticBitmap[26]);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v10);
        *(_DWORD *)(v10 + 4) = 0;
        *(_BYTE *)(v4 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v3;
}
