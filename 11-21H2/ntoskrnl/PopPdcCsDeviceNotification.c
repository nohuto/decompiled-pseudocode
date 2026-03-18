/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140996FDC
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B3116C (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14085CF58 (PopNetUpdateCsConsumptionFlags.c)
 *     PopPdcUpdateDeviceCompliance @ 0x1409972C8 (PopPdcUpdateDeviceCompliance.c)
 *     PopNetCompliantNicUpdate @ 0x1409985E0 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1409987A0 (PopNetNonCompliantDeviceUpdate.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  char v6; // al
  __int64 Pool2; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *v10; // rax
  void **v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rcx

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPdcDeviceListLock, 0LL);
  v4 = PopPdcDeviceList;
  v5 = 0LL;
  v6 = 0;
  if ( PopPdcDeviceList != (_UNKNOWN *)&PopPdcDeviceList )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( *((_QWORD *)v4 + 2) == *(_QWORD *)a1 )
        break;
      v4 = *(_DWORD **)v4;
      if ( v4 == (_DWORD *)&PopPdcDeviceList )
        goto LABEL_8;
    }
    v6 = 1;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v6 )
    {
      ++v5[7];
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1866683203LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)a1;
        *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(Pool2 + 32) = *(_BYTE *)(a1 + 13);
        *(_DWORD *)(Pool2 + 28) = 1;
        v9 = (__int64 *)off_140C08FB0;
        if ( *off_140C08FB0 == (_UNKNOWN *)&PopPdcDeviceList )
        {
          *(_QWORD *)v8 = &PopPdcDeviceList;
          *(_QWORD *)(v8 + 8) = v9;
          *v9 = v8;
          off_140C08FB0 = (_UNKNOWN **)v8;
          goto LABEL_20;
        }
        goto LABEL_28;
      }
      v1 = -1073741801;
    }
  }
  else if ( v6 )
  {
    if ( (int)--v5[7] <= 0 )
    {
      v10 = *(_QWORD **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) == v4 )
      {
        v11 = (void **)*((_QWORD *)v4 + 1);
        if ( *v11 == v4 )
        {
          *v11 = v10;
          v10[1] = v11;
          ExFreePoolWithTag(v5, 0x6F435343u);
LABEL_20:
          PopPdcUpdateDeviceCompliance();
          PopAcquirePolicyLock(v12);
          v14 = *(int *)(a1 + 8);
          if ( (((_DWORD)v14 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v14 == 3 )
          {
            v15 = PopCsDeviceCompliance;
            if ( PopCsDeviceCompliance[v14] == -1 )
            {
              LOBYTE(v15) = *(_BYTE *)(a1 + 12);
              PopNetNonCompliantDeviceUpdate(v15);
            }
          }
          else
          {
            if ( *(_BYTE *)(a1 + 13) )
            {
              LOBYTE(v13) = *(_BYTE *)(a1 + 12);
              PopNetCompliantNicUpdate(v13);
            }
            PopNetUpdateCsConsumptionFlags();
          }
          PopReleasePolicyLock(v15, v14);
          goto LABEL_30;
        }
      }
LABEL_28:
      __fastfail(3u);
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KeLeaveCriticalRegion();
  return v1;
}
