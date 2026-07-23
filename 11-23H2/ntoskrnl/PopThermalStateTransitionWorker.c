/*
 * XREFs of PopThermalStateTransitionWorker @ 0x140865420
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032F190 (PopOkayToQueueNextWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140590088 (PopThermalStandbyEndTracking.c)
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void PopThermalStateTransitionWorker()
{
  int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  _DWORD v11[4]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-28h] BYREF

  memset(v12, 0, 24);
  v0 = 0;
  v1 = 2;
  while ( 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    if ( !byte_140C3C751 && (!byte_140C3C753 || !byte_140C3C754) )
      break;
    if ( !byte_140C3C750 )
      break;
    if ( byte_140C3C751 )
    {
      if ( !byte_140C3C752 )
      {
        v0 = 3;
        byte_140C3C752 = 1;
        v1 = 2;
      }
      byte_140C3C751 = 0;
    }
    if ( byte_140C3C753 && byte_140C3C754 )
    {
      v0 = 6;
      byte_140C3C753 = 0;
      v1 = 3;
    }
    PopReleaseRwLock(&PopThermalStateTransitionContext);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(v1, v2, v3);
    PopReleaseRwLock(&PopSystemThermalInfo);
    v11[2] = 0;
    v12[0] = 0x8000000001uLL;
    v11[0] = v0;
    v11[1] = -1073741820;
    PopAcquirePolicyLock(v4);
    if ( v0 == 6 )
      PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((unsigned int)v12, 0, (unsigned int)v11, 5, 1);
    PopReleasePolicyLock(v6, v5, v7, v8, v9, v10);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopThermalStateTransitionWorkItem);
  PopReleaseRwLock(&PopThermalStateTransitionContext);
}
