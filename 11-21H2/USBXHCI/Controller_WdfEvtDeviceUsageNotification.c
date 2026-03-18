/*
 * XREFs of Controller_WdfEvtDeviceUsageNotification @ 0x1C0077440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLD @ 0x1C0035B44 (WPP_RECORDER_SF_qLD.c)
 */

PVOID __fastcall Controller_WdfEvtDeviceUsageNotification(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int v10; // ecx
  PVOID result; // rax
  int v12; // [rsp+20h] [rbp-28h]

  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLD(*(_QWORD *)(v6 + 72), v5, v7, v8, v12);
  v9 = 1 << a2;
  v10 = *(_DWORD *)(v6 + 388);
  if ( a3 )
  {
    *(_DWORD *)(v6 + 388) = v9 | v10;
    return MmLockPagableDataSection(Controller_WdfEvtDeviceAdd);
  }
  else
  {
    result = (PVOID)(v10 & (unsigned int)~v9);
    *(_DWORD *)(v6 + 388) = (_DWORD)result;
  }
  return result;
}
