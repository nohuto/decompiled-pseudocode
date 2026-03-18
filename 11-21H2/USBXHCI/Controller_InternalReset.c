/*
 * XREFs of Controller_InternalReset @ 0x1C00321C8
 * Callers:
 *     Controller_InitiateBootRecovery @ 0x1C0031DE0 (Controller_InitiateBootRecovery.c)
 *     Controller_InitiateRecovery @ 0x1C0031E70 (Controller_InitiateRecovery.c)
 *     Controller_UcxEvtReset @ 0x1C0034070 (Controller_UcxEvtReset.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     CommonBuffer_FlushWorkItems @ 0x1C000DF68 (CommonBuffer_FlushWorkItems.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Controller_Start @ 0x1C0011B68 (Controller_Start.c)
 *     RootHub_D0Entry @ 0x1C0011DD8 (RootHub_D0Entry.c)
 *     Register_ControllerReset @ 0x1C0013D48 (Register_ControllerReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Command_ControllerResetPostReset @ 0x1C002DF9C (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C002E164 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C002E230 (Command_FailAllCommands.c)
 *     Controller_DisableController @ 0x1C003179C (Controller_DisableController.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0035250 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00354F4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0036250 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_ControllerResetPreReset @ 0x1C00362EC (DeviceSlot_ControllerResetPreReset.c)
 *     Interrupter_ControllerResetPostReset @ 0x1C003BD84 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003C080 (Interrupter_FlushPendingDpcOrWorkItemPreReset.c)
 */

__int64 __fastcall Controller_InternalReset(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  _QWORD *v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // edx
  __int64 result; // rax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+30h] [rbp-28h]

  v4 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_START, a3, *(_QWORD *)(a1 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 177, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 416)) != 1 && !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 804), 0, 1)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 800), 0, 0) )
  {
    ++*(_DWORD *)(a1 + 476);
    *(_BYTE *)(a1 + 472) = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 408));
  }
  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 360),
    a3);
  v5 = *(_QWORD *)(a1 + 144);
  DynamicLock_Acquire(*(_QWORD *)(v5 + 112));
  v6 = *(_QWORD *)(v5 + 112);
  *(_DWORD *)(v5 + 36) = 3;
  *(_BYTE *)(v5 + 121) = 0;
  DynamicLock_Release(v6);
  DeviceSlot_ControllerResetPreReset(*(_QWORD *)(a1 + 136));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  v7 = Register_ControllerStop(*(_QWORD *)(a1 + 88));
  Interrupter_FlushPendingDpcOrWorkItemPreReset(*(_QWORD *)(a1 + 128));
  if ( v7 >= 0 )
  {
    v9 = Register_ControllerReset(*(_QWORD *)(a1 + 88), 1);
    v4 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v10,
        4,
        179,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v9);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v8, 4, 178, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v7);
    }
    Controller_DisableController(a1);
  }
  Command_ControllerResetPostReset(*(_QWORD *)(a1 + 144));
  v11 = *(_QWORD **)(a1 + 120);
  if ( v11 )
    CommonBuffer_FlushWorkItems(v11);
  DeviceSlot_ControllerResetPostReset(*(_QWORD *)(a1 + 136));
  RootHub_D0Entry(*(_QWORD *)(a1 + 152));
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v12,
        4,
        180,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v7);
    }
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      8LL,
      "During controller reset recovery, controller stop timed out",
      0LL,
      0LL);
    v13 = 4107;
LABEL_32:
    Controller_ReportFatalError(a1, 4, v13, 0, 0LL, 0LL, 0LL);
LABEL_33:
    Command_FailAllCommands(*(_QWORD *)(a1 + 144));
    result = ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C00627C0)(UcxDriverGlobals, *(_QWORD *)(a1 + 8));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v18,
                 4,
                 184,
                 (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
                 v7);
    }
    goto LABEL_37;
  }
  Interrupter_ControllerResetPostReset(*(_QWORD *)(a1 + 128));
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v14,
        4,
        181,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v4);
    }
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      16LL,
      "During controller reset recovery, controller reset timed out",
      0LL,
      0LL);
    Controller_ReportFatalError(a1, 4, 4103, 0, 0LL, 0LL, 0LL);
    v7 = v4;
    goto LABEL_33;
  }
  v15 = Controller_Start(a1);
  v7 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v16,
        4,
        182,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v15);
    }
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      32LL,
      "During controller reset recovery, controller start timed out",
      0LL,
      0LL);
    v13 = 4104;
    goto LABEL_32;
  }
  v7 = 0;
  result = Command_ControllerResetPostResetSuccess(*(_QWORD *)(a1 + 144));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(a1 + 72),
               4,
               4,
               183,
               (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
LABEL_37:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    result = McTemplateK0pq_EtwWriteTransfer(
               v19,
               &USBXHCI_ETW_EVENT_CONTROLLER_INTERNAL_RESET_COMPLETE,
               v20,
               *(_QWORD *)(a1 + 8),
               v7,
               v21,
               v22);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
  return result;
}
