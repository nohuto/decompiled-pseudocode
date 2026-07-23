/*
 * XREFs of MiWaitForRotateToComplete @ 0x140634154
 * Callers:
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140275700 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x1402757C0 (MiLockVadShared.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x1403625E4 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v5; // ebp
  unsigned __int64 v7; // rsi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v10; // rbx
  volatile LONG *v11; // rbx
  volatile LONG *SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v7 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  for ( i = (_QWORD *)Process[1].Affinity.StaticBitmap[9]; i; i = (_QWORD *)*i )
  {
    v10 = i[1];
    if ( v7 >= (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
      && v7 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v5;
      v5 = 1;
      if ( (*(_BYTE *)(a2 + 13) & 1) != 0 )
      {
        if ( !_InterlockedIncrement((volatile signed __int32 *)(v10 + 36)) )
          __fastfail(0xEu);
        MiUnlockWorkingSetExclusive(
          (__int64)&Process[1].ActiveProcessors.StaticBitmap[26],
          *(_BYTE *)(a2 + 12),
          (__int64)i,
          a4);
        MiLockVadShared((__int64)CurrentThread, v10);
        MiUnlockAndDereferenceVadShared((char *)v10);
        SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
        ExAcquireSpinLockExclusive(SharedVm);
        *((_DWORD *)SharedVm + 1) = 0;
      }
      else
      {
        MiUnlockFaultWorkingSet(a2, a2, (__int64)i, a4);
        v11 = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
        ExAcquireSpinLockExclusive(v11);
        *((_DWORD *)v11 + 1) = 0;
        *(_BYTE *)(a2 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v5;
}
