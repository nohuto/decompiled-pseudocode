/*
 * XREFs of PopThermalStateTransitionWorker @ 0x1408651E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032EF00 (PopOkayToQueueNextWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058FB98 (PopThermalStandbyEndTracking.c)
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
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
  _DWORD v8[4]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  memset(v9, 0, 24);
  v0 = 0;
  v1 = 2;
  while ( 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalStateTransitionContext);
    if ( !byte_140C3C8D1 && (!byte_140C3C8D3 || !byte_140C3C8D4) )
      break;
    if ( !byte_140C3C8D0 )
      break;
    if ( byte_140C3C8D1 )
    {
      if ( !byte_140C3C8D2 )
      {
        v0 = 3;
        byte_140C3C8D2 = 1;
        v1 = 2;
      }
      byte_140C3C8D1 = 0;
    }
    if ( byte_140C3C8D3 && byte_140C3C8D4 )
    {
      v0 = 6;
      byte_140C3C8D3 = 0;
      v1 = 3;
    }
    PopReleaseRwLock(&PopThermalStateTransitionContext);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
    PopThermalStandbyEndTracking(v1, v2, v3);
    PopReleaseRwLock(&PopSystemThermalInfo);
    v8[2] = 0;
    v9[0] = 0x8000000001uLL;
    v8[0] = v0;
    v8[1] = -1073741820;
    PopAcquirePolicyLock(v4);
    if ( v0 == 6 )
      PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((unsigned int)v9, 0, (unsigned int)v8, 5, 1);
    PopReleasePolicyLock(v6, v5, v7);
  }
  PopOkayToQueueNextWorkItem((__int64)&PopThermalStateTransitionWorkItem);
  PopReleaseRwLock(&PopThermalStateTransitionContext);
}
