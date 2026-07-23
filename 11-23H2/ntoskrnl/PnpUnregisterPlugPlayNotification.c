/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x14032088C
 * Callers:
 *     IoUnregisterPlugPlayNotification @ 0x14078E590 (IoUnregisterPlugPlayNotification.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x14078E5C0 (IoUnregisterPlugPlayNotificationEx.c)
 *     PopCleanCoolingExtension @ 0x140982F9C (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x140994BD0 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PnpDereferenceNotify @ 0x14078F618 (PnpDereferenceNotify.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(PVOID P, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rsi
  PVOID *v9; // r15
  PVOID *v10; // r14
  PVOID *v11; // rdx
  PVOID **v12; // rax

  v2 = (struct _FAST_MUTEX *)*((_QWORD *)P + 8);
  v5 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE3(NlsMbOemCodePageTag) )
  {
    ExAcquireFastMutex(&PnpDeferredRegistrationLock);
    v8 = (PVOID *)PnpDeferredRegistrationList;
    while ( v8 != &PnpDeferredRegistrationList )
    {
      v9 = v8 + 2;
      v10 = v8;
      if ( v8[2] == P )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v11 = (PVOID *)*v8;
        v8 = v11;
        if ( v11[1] != v10 || (v12 = (PVOID **)v10[1], *v12 != v10) )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        PnpDereferenceNotify(*v9);
        if ( v2 )
          ExReleaseFastMutex(v2);
        ExFreePoolWithTag(v10, 0x37706E50u);
      }
      else
      {
        v8 = (PVOID *)*v8;
      }
    }
    ExReleaseFastMutex(&PnpDeferredRegistrationLock);
  }
  ExReleaseFastMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)P + 9), 1u);
  }
  else if ( v2 )
  {
    ExAcquireFastMutex(v2);
  }
  if ( !*((_BYTE *)P + 58) || v5 )
  {
    *((_BYTE *)P + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)P + 9));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v2 )
        ExAcquireFastMutex(v2);
    }
    PnpDereferenceNotify(P);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)P + 9));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  if ( v2 )
    ExReleaseFastMutex(v2);
  return 0LL;
}
