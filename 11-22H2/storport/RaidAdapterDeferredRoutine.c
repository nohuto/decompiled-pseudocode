/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C0014550
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C00145FC (RaidFreeDeferredItem.c)
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C0034610 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C003511C (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C00351A8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C00361E4 (RaidAdapterLogIoError.c)
 *     RaidAdapterPauseUnit @ 0x1C0036A6C (RaidAdapterPauseUnit.c)
 *     RaidAdapterRequestTimer @ 0x1C003791C (RaidAdapterRequestTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0037DAC (RaidAdapterResumeUnit.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0039174 (RaidAdapterSetPauseTimer.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0061C80 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayBusy @ 0x1C0066604 (StorSetIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0066798 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER *v5; // rdi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4056));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v7 = LowPart - 8;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
                v3,
                (unsigned int)a2[4].HighPart,
                (LARGE_INTEGER)a2[5].QuadPart);
          }
          else
          {
            KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
          }
        }
        else
        {
          RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
        }
      }
      else
      {
        RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
      }
      goto LABEL_7;
    }
    LOBYTE(a2) = 1;
    StorSetIoGatewayNotBusy(*(_QWORD *)(v3 + 896), a2);
LABEL_33:
    LOBYTE(v16) = a3;
    RaidAdapterRestartQueues(v3, v16);
    goto LABEL_7;
  }
  if ( LowPart == 7 )
  {
    StorSetIoGatewayBusy(*(PKSPIN_LOCK *)(v3 + 896));
    goto LABEL_7;
  }
  v11 = LowPart - 1;
  if ( !v11 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
      v3,
      (LARGE_INTEGER)a2[5].QuadPart,
      a2[6].LowPart);
    goto LABEL_7;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
    goto LABEL_7;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
      }
      else
      {
        RaidAdapterPauseUnit(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
      }
    }
    else
    {
      RaidFreeDeferredItem(v3 + 944);
      v5 = 0LL;
      if ( !*(_DWORD *)(v3 + 1316) )
        RaidAdapterCancelPauseTimer(v3, v3 + 1712);
    }
  }
  else
  {
    RaidFreeDeferredItem(v3 + 944);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 1316) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1712, v3 + 1584, *(unsigned int *)(v3 + 1312));
      goto LABEL_7;
    }
    if ( !(unsigned int)RaidResumeAdapterQueue(v3, 0LL) )
      goto LABEL_33;
  }
LABEL_7:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4056));
  if ( v5 )
    RaidFreeDeferredItem(v3 + 944);
}
