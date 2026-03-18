/*
 * XREFs of Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     Isoch_RetrieveNextStage @ 0x1C0007C30 (Isoch_RetrieveNextStage.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0008870 (Isoch_PrepareStage.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C000A788 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Isoch_WdfEvtIoQueueReadyNotification(__int64 a1, __int64 a2)
{
  char v3; // bp
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdi
  int v8; // edx
  KIRQL v9; // si
  ULONG CurrentProcessorNumber; // eax
  __int64 v11; // rcx
  char i; // si
  char j; // di
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  KIRQL v22; // cl
  int v23; // edx
  int v24; // r8d
  int v25; // r9d
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  int v29; // edx
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  ULONG_PTR v34; // rax
  ULONG_PTR v35; // rax
  KIRQL CurrentIrql; // al
  int v37; // edx
  int v38; // r8d
  int v39; // r9d

  v3 = 0;
  if ( KeGetCurrentIrql() != 2 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( KeGetCurrentIrql() == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v7 + 72), v8, 4, 312, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v23, v24, v25);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError(v7, 0, 4134, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      v3 = 1;
      v9 = KfRaiseIrql(2u);
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      if ( CurrentProcessorNumber >= *(_DWORD *)(v7 + 816) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v7 + 72),
            v4,
            4,
            313,
            (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
            CurrentProcessorNumber);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v26, v27, v28);
        }
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
        Controller_ReportFatalError(v7, 0, 4135, 0, 0LL, 0LL, 0LL);
        KeLowerIrql(v9);
        v3 = 0;
      }
      else
      {
        v11 = 2LL * CurrentProcessorNumber;
        *(_BYTE *)(v11 + *(_QWORD *)(v7 + 808)) = 1;
        *(_BYTE *)(*(_QWORD *)(v7 + 808) + v11 + 1) = v9;
      }
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 1352LL) == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    goto LABEL_27;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
  {
    _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2LL, 3LL) == 2 )
      Isoch_MapTransfers(a2);
    goto LABEL_27;
  }
  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v29 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      LOBYTE(v29) = 5;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v29,
        14,
        67,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
        i);
    }
    for ( j = 0; ; ++j )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v30 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
        LOBYTE(v30) = 5;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
          v30,
          14,
          66,
          (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
          j);
      }
      *(_QWORD *)(a2 + 344) = 0LL;
      if ( !(unsigned __int8)Isoch_RetrieveNextStage(a2) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 2, 3) == 3 )
          goto LABEL_25;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 0, 1) != 1 )
          goto LABEL_25;
        v31 = *(_QWORD *)(a2 + 56);
        if ( *(_BYTE *)(v31 + 37) )
        {
          v33 = *(_QWORD *)(v31 + 136);
          if ( _InterlockedIncrement((volatile signed __int32 *)(v33 + 20)) != *(_DWORD *)(v33 + 8) )
            goto LABEL_25;
        }
LABEL_61:
        ESM_AddEvent((KSPIN_LOCK *)(v31 + 288), 20);
        goto LABEL_25;
      }
      v14 = Isoch_PrepareStage(a2);
      if ( v14 == 1 )
        continue;
      if ( v14 == 3 )
        goto LABEL_25;
      v15 = a2;
      if ( v14 == 2 )
        goto LABEL_55;
      if ( v14 == 4 )
      {
        TR_AttemptStateChange(a2, 3LL, 2LL);
        goto LABEL_25;
      }
      v16 = Isoch_MapStage(a2);
      if ( v16 == 2 )
        goto LABEL_25;
      if ( v16 == 4 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 3) != 3 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 0, 1) != 1 )
          goto LABEL_25;
        v31 = *(_QWORD *)(a2 + 56);
        if ( *(_BYTE *)(v31 + 37) )
        {
          v32 = *(_QWORD *)(v31 + 136);
          if ( _InterlockedIncrement((volatile signed __int32 *)(v32 + 20)) != *(_DWORD *)(v32 + 8) )
            goto LABEL_25;
        }
        goto LABEL_61;
      }
    }
    v15 = a2;
LABEL_55:
    if ( (unsigned int)TR_AttemptStateChange(v15, 3LL, 4LL) == 3 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
        WdfDriverGlobals,
        *(_QWORD *)(a2 + 320),
        -100000000LL);
LABEL_25:
    v17 = *(_DWORD *)(a2 + 108);
    if ( v17 == 2 )
      break;
    if ( v17 != 4 || !*(_DWORD *)(a2 + 348) || (unsigned int)TR_AttemptStateChange(a2, 4LL, 3LL) != 4 )
      goto LABEL_27;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a2 + 320),
      0LL);
LABEL_68:
    ;
  }
  if ( *(_DWORD *)(a2 + 344) && (unsigned int)TR_AttemptStateChange(a2, 2LL, 3LL) == 2 )
    goto LABEL_68;
LABEL_27:
  if ( v3 && KeGetCurrentIrql() == 2 )
  {
    v18 = *(_QWORD **)(a2 + 40);
    v19 = KeGetCurrentProcessorNumberEx(0LL);
    if ( KeGetCurrentIrql() == 2 )
    {
      if ( (unsigned int)v19 >= *((_DWORD *)v18 + 204) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v18[9], 2, 4, 314, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v19);
        v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                WdfDriverGlobals,
                *v18);
        KeBugCheckEx(0x144u, 4uLL, v34, 2uLL, 1uLL);
      }
      v20 = v18[101];
      v21 = 2 * v19;
      v22 = *(_BYTE *)(2 * v19 + v20 + 1);
      if ( !*(_BYTE *)(2 * v19 + v20) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v18[9], 2, 4, 315, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v19);
        v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                WdfDriverGlobals,
                *v18);
        KeBugCheckEx(0x144u, 4uLL, v35, 2uLL, 2uLL);
      }
      *(_BYTE *)(v21 + v20) = 0;
      *(_BYTE *)(v21 + v18[101] + 1) = -1;
      KeLowerIrql(v22);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentIrql = KeGetCurrentIrql();
        WPP_RECORDER_SF_d(v18[9], 2, 4, 316, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, CurrentIrql);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v37, v38, v39);
      }
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
      Controller_ReportFatalError((_DWORD)v18, 0, 4136, 0, 0LL, 0LL, 0LL);
    }
  }
}
