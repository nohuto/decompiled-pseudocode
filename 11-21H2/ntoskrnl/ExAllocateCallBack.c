/*
 * XREFs of ExAllocateCallBack @ 0x140832A20
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056A800 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1408324C0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140832590 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140832640 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x140832884 (PspSetCreateThreadNotifyRoutine.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140832928 (PspSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExAllocateCallBack(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x62726243u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1].Count = a1;
    PoolWithTag[2].Count = a2;
    ExInitializePushLock(PoolWithTag);
  }
  return v5;
}
