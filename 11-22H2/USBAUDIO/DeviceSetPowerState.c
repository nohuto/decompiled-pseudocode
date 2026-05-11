/*
 * XREFs of DeviceSetPowerState @ 0x1C003C5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0004F74 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WmiLogPowerStateChange @ 0x1C00095EC (WmiLogPowerStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall DeviceSetPowerState(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v7; // r14d
  char v8; // dl
  __int64 v9; // rbx
  _DWORD *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-48h]

  v7 = 0;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1u,
      0x23u,
      (__int64)&WPP_04fd23808a1e3b5e5b845c20a8f4823b_Traceguids);
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v9 + 536) != a3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(pExtBusDeviceDispatchTable + 48))(a1, a3, a4);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v9 + 536) = a3;
      if ( a3 == 1 )
      {
        v10 = *(_DWORD **)(v9 + 528);
        if ( v10 )
          *v10 = 0;
      }
      else
      {
        KeResetEvent((PRKEVENT)(v9 + 552));
      }
    }
  }
  return WmiLogPowerStateChange(*(unsigned int *)(v9 + 536), a4, a3, v7);
}
