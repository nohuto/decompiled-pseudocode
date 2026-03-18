/*
 * XREFs of ?AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C0158064
 * Callers:
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C0157F9C (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C006B5C4 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRefFromContext(struct USB4_POFXREF_CONTEXT *a1)
{
  unsigned int v1; // r8d
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  signed int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r8d
  __int64 v16; // [rsp+20h] [rbp-18h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 6);
  if ( v1 )
    DxgkLogCodePointPacket(0x7Du, 0, v1, 0, *(_QWORD *)((char *)a1 + 28));
  if ( g_DbgUsb4MonitorPowerOnDelayInSeconds )
  {
    Interval.QuadPart = -10000000LL * g_DbgUsb4MonitorPowerOnDelayInSeconds;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v3 = PoFxAddComponentRelation(*(_QWORD *)a1, *((unsigned int *)a1 + 2), *((_QWORD *)a1 + 2), &GUID_NULL);
  v6 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry3(2LL, v3, *(_QWORD *)a1, *((unsigned int *)a1 + 2));
  }
  else
  {
    v7 = WdLogNewEntry5_WdTrace(v5, v4);
    v9 = bTracingEnabled == 0;
    *(_QWORD *)(v7 + 24) = *(_QWORD *)a1;
    v10 = *((unsigned int *)a1 + 2);
    *(_QWORD *)(v7 + 32) = v10;
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    {
      LODWORD(v16) = 0;
      McTemplateK0pqq_EtwWriteTransfer(v10, &Dxgk_ReportPowerComponentState, v8, 0LL, v16, 1);
    }
    if ( (unsigned int)dword_1C012F8A8 > 5 && tlgKeywordOn((__int64)&dword_1C012F8A8, 0x8000LL) )
    {
      Interval.LowPart = *((_DWORD *)a1 + 2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v11,
        byte_1C009AE8E,
        v12,
        v13,
        (__int64)&Interval);
    }
  }
  v14 = *((_DWORD *)a1 + 6);
  if ( v14 || v6 < 0 )
    DxgkLogCodePointPacket(0x7Du, 1u, v14, v6, *(_QWORD *)((char *)a1 + 28));
  return (unsigned int)v6;
}
