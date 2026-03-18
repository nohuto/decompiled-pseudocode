/*
 * XREFs of NtCreateTimer @ 0x1406B4B90
 * Callers:
 *     <none>
 * Callees:
 *     PsInsertVirtualizedTimer @ 0x140239F94 (PsInsertVirtualizedTimer.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateTimer(__int64 a1, __int64 a2, int a3, TIMER_TYPE a4)
{
  _QWORD *v5; // r14
  char PreviousMode; // si
  int Object; // ecx
  __int64 v8; // r9
  _KPROCESS *Process; // r15
  unsigned __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r12
  struct _KTHREAD *v14; // rax
  __int64 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]

  v5 = (_QWORD *)a1;
  v16 = 0LL;
  if ( (unsigned int)a4 > SynchronizationTimer )
    return 3221225714LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = PreviousMode;
  Object = ObCreateObjectEx(a1, (_DWORD)ExTimerObjectType, a3, PreviousMode);
  if ( Object >= 0 )
  {
    KeInitializeDpc((PRKDPC)0xA0, (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, 0LL);
    KeInitializeTimerEx(0LL, a4);
    MEMORY[0x40] = 0LL;
    MEMORY[0x130] = 0;
    MEMORY[0x100] = 0LL;
    MEMORY[0x108] = 0LL;
    v17 = 280LL;
    MEMORY[0x118] = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v11 = Process[1].Affinity.StaticBitmap[16];
        LOBYTE(v8) = 0;
        if ( v11 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v13 = v11 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 56), 1u);
          LOBYTE(v8) = (*(_DWORD *)(v11 + 1512) & 0x40000) != 0 && *(_DWORD *)(v11 + 1048);
        }
        else
        {
          v13 = 56LL;
        }
        PsInsertVirtualizedTimer((KSPIN_LOCK *)Process, (_QWORD *)0x120, (KSPIN_LOCK *)0x40, v8, (KSPIN_LOCK **)v17);
        if ( v11 )
        {
          ExReleaseResourceLite((PERESOURCE)v13);
          v14 = KeGetCurrentThread();
          if ( v14->SpecialApcDisable++ == -1
            && ($CEA84C04E3712D858E5667A507841A2A *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
    }
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v16);
    if ( Object >= 0 )
      *v5 = v16;
  }
  return (unsigned int)Object;
}
