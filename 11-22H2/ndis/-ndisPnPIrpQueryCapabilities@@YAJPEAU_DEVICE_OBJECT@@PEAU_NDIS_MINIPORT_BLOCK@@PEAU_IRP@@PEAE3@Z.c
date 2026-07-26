/*
 * XREFs of ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003551C
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A6F0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisPnPIrpQueryCapabilities(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int *p_MiniportAttributes; // rdi
  _IO_STACK_LOCATION *v9; // rax
  int v10; // ebp

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x2Bu,
      (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
      a2);
  p_MiniportAttributes = &a2->MiniportAttributes;
  if ( (a2->PnPFlags & 0x2000) != 0 || (*p_MiniportAttributes & 0x80u) != 0 )
    *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
  v9 = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
  *(_OWORD *)&v9[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v9->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v9[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v9->Parameters.ReadWriteConfig.Length;
  v9[-1].FileObject = v9->FileObject;
  v9[-1].Control = 0;
  v10 = IoSynchronousCallDriver(a2->NextDeviceObject, a3);
  if ( v10 >= 0 )
  {
    if ( a2->BusType == Vmcs && (*p_MiniportAttributes & 0x80u) != 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x2Cu,
          (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
          a2);
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
    }
    if ( (a2->PnPFlags & 0x2000) == 0 && (*p_MiniportAttributes & 0x80u) == 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x2Du,
          (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
          a2);
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~0x200u;
    }
    if ( (a2->DriverHandle->Flags & 0x20) != 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x2Eu,
          (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
          a2);
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~0x10u;
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~8u;
    }
  }
  *a5 = 0;
  return (unsigned int)v10;
}
