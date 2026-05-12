/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C00028C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C0002994 (RaidFreeDeferredItem.c)
 *     RaidSetUnitPauseTimer @ 0x1C00029BC (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0002A08 (RaidAdapterResumeUnit.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidAdapterRequestTimer @ 0x1C00113F4 (RaidAdapterRequestTimer.c)
 *     RaidAdapterRestartQueues @ 0x1C001DEE0 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C001E01C (RaidResumeAdapterQueue.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00339A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C00344B4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0034588 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C0035378 (RaidAdapterLogIoError.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0037D08 (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0054F70 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayBusy @ 0x1C0059678 (StorSetIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0059814 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER *v5; // rsi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int HighPart; // ebx
  unsigned int v13; // ebp
  __int64 Unit; // rax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 3992));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v16 = LowPart - 8;
    if ( !v16 )
    {
      LOBYTE(a2) = 1;
      StorSetIoGatewayNotBusy(*(_QWORD *)(v3 + 832), a2);
      goto LABEL_38;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
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
  }
  else
  {
    if ( LowPart == 7 )
    {
      StorSetIoGatewayBusy(*(PKSPIN_LOCK *)(v3 + 832));
      goto LABEL_10;
    }
    v7 = LowPart - 1;
    if ( !v7 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v3,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_10;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_10;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          HighPart = a2[4].HighPart;
          v13 = a2[5].LowPart;
          Unit = RaidAdapterFindUnit(v3, HighPart);
          if ( Unit )
          {
            RaidSetUnitPauseTimer(Unit, 1000 * v13);
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_DDD(
              WPP_GLOBAL_Control->AttachedDevice,
              52LL,
              &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
              (unsigned __int8)HighPart,
              BYTE1(HighPart),
              BYTE2(HighPart));
          }
        }
      }
      else
      {
        RaidFreeDeferredItem(v3 + 880);
        v5 = 0LL;
        if ( !*(_DWORD *)(v3 + 1252) )
          RaidAdapterCancelPauseTimer(v3, v3 + 1648);
      }
      goto LABEL_10;
    }
    RaidFreeDeferredItem(v3 + 880);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 1252) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1648, v3 + 1520, *(unsigned int *)(v3 + 1248));
      goto LABEL_10;
    }
    if ( !(unsigned int)RaidResumeAdapterQueue(v3, 0LL) )
    {
LABEL_38:
      LOBYTE(v15) = a3;
      RaidAdapterRestartQueues(v3, v15);
    }
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 3992));
  if ( v5 )
    RaidFreeDeferredItem(v3 + 880);
}
