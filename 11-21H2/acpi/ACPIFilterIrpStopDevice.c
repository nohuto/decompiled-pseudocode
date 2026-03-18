/*
 * XREFs of ACPIFilterIrpStopDevice @ 0x1C00AEBD0
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C00AED70 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C0094D74 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIFilterIrpStopDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rdi
  char v8; // bp
  __int64 v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v11; // rax
  char *IrpText; // rax
  unsigned __int8 v13; // dl
  const char *v14; // r8
  const char *v15; // r10

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = DeviceExtension;
  if ( *(_DWORD *)(DeviceExtension + 368) == 1 )
  {
    v7 = *(_QWORD *)(DeviceExtension + 1000) & 0x8000LL;
    v8 = (*(_QWORD *)(DeviceExtension + 1000) & 0x8000) != 0;
    v9 = ACPIInternalGetDeviceExtension(*(_QWORD *)(DeviceExtension + 768));
    if ( IsNsobjPciBus(*(volatile signed __int32 **)(v9 + 760)) || v7 )
      EnableDisableRegions(*(__int64 **)(v4 + 760), 0, v8);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v11 = a2->Tail.Overlay.CurrentStackLocation;
    v11[-1].Context = 0LL;
    v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIFilterIrpStopDeviceCompletion;
    v11[-1].Control = -32;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 728));
    v5 = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 776), a2);
  }
  else
  {
    v5 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    IofCompleteRequest(a2, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v6, 4u);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      5u,
      0x1Du,
      (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
      (char)a2,
      IrpText,
      v5,
      v4,
      v14,
      v15);
  }
  return v5;
}
