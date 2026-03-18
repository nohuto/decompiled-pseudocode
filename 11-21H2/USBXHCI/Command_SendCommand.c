/*
 * XREFs of Command_SendCommand @ 0x1C0003D94
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0002A5C (UsbDevice_SendConfigureEndpointCommand.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C000C0DC (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_SM_SendStopEndpointCommand @ 0x1C000C6A8 (Endpoint_SM_SendStopEndpointCommand.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C000FC10 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0010C30 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010F60 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddress @ 0x1C00111BC (UsbDevice_SetAddress.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0015FA0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     UsbDevice_UcxEvtUpdate @ 0x1C00185D0 (UsbDevice_UcxEvtUpdate.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C002E8E8 (Command_SendInternalCommandSynchronously.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1C0037F40 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0038A28 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0038DA0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0038FA8 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C00393F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C00398A4 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_SM_ResetControlEndpoint @ 0x1C0039DA8 (Endpoint_SM_ResetControlEndpoint.c)
 *     Endpoint_SM_ResetEndpoint @ 0x1C0039E54 (Endpoint_SM_ResetEndpoint.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C004703C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_SendStopEndpointToOffloadedEndpoint @ 0x1C0047378 (UsbDevice_SendStopEndpointToOffloadedEndpoint.c)
 *     UsbDevice_SetResourceAssignment @ 0x1C0047420 (UsbDevice_SetResourceAssignment.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00476E0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0003E5C (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C0003E9C (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1C0004248 (DynamicLock_Acquire.c)
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002F454 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Command_SendCommand(__int64 a1, __int64 a2)
{
  int v4; // edx
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 v15; // rdx

  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v4,
        7,
        58,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2);
    }
    *(_BYTE *)(a2 + 60) = 0;
    goto LABEL_22;
  }
  v5 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v12 + 553) )
    {
      Controller_LowerAndTrackIrql(v12);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
  if ( v8 )
  {
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(v8 + 16);
    if ( v14 )
    {
      v13 = v14(v8, a2);
      if ( v13 != 4 )
      {
        DynamicLock_Release(*(_QWORD *)(a1 + 112), v6, v7);
        if ( v5 )
          Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
        v15 = v13;
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v15, 0LL);
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 5 )
  {
    DynamicLock_Release(*(_QWORD *)(a1 + 112), v6, v7);
    if ( v5 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
LABEL_22:
    v15 = 3LL;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a2 + 40))(a2, v15, 0LL);
  }
  Command_InternalSendCommand(a1, a2, v7);
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112), v9, v10);
  if ( v5 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
