/*
 * XREFs of ExpGetNextCallback @ 0x1407FAD60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v2; // ebp
  __int64 *v3; // r14
  __int64 *v5; // rbx
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  v5 = (__int64 *)ExpCallbackListHead;
  if ( Object )
    v5 = (__int64 *)Object[5];
  while ( v5 != &ExpCallbackListHead )
  {
    v3 = v5 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 5)) )
    {
      v2 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v3 & -(__int64)(v2 != 0);
}
