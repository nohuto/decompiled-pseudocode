/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x1407B1184
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x1407B1124 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C38E0 (ObReferenceObjectSafeWithTag.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 */

_QWORD *__fastcall PopEtGetNextEnergyTracker(_QWORD **Object)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx
  _QWORD *v4; // rsi
  _QWORD **v5; // rax
  _QWORD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = PopEtGlobals + 16;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = (_QWORD **)PopEtGlobals;
  if ( Object )
    v5 = Object;
  for ( i = *v5; i != (_QWORD *)PopEtGlobals; i = (_QWORD *)*i )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)i) )
    {
      v4 = i;
      break;
    }
  }
  PopReleaseRwLock((__int64 *)(PopEtGlobals + 16));
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return v4;
}
