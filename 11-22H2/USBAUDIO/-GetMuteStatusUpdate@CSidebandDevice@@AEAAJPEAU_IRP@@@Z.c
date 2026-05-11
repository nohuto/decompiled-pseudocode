/*
 * XREFs of ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00141B4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00082F0 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DF84 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetMuteStatusUpdate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _KSFILTER_DESCRIPTOR *v5; // rdx
  unsigned int v6; // ebx
  PDEVICE_OBJECT v7; // rcx
  bool v8; // r8
  unsigned int *p_NamedPipeType; // rsi
  NTSTATUS MuteImmediate; // eax

  a2->IoStatus.Information = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = (struct _KSFILTER_DESCRIPTOR *)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL);
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    v6 = -1073741306;
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    goto LABEL_9;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !(unsigned int)CSidebandDevice::IsValidEndpointIndex(this, v5, *p_NamedPipeType) )
  {
    v6 = -1073741811;
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
LABEL_9:
    WPP_RECORDER_AND_TRACE_SF_dd(v7->AttachedDevice, (_DWORD)v5, v8, v7->DeviceExtension);
LABEL_23:
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 0);
    return v6;
  }
  if ( p_NamedPipeType[1] )
    MuteImmediate = CSidebandDevice::GetMuteImmediate(this, a2);
  else
    MuteImmediate = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2, 0LL, (char *)this + 96);
  v6 = MuteImmediate;
  if ( MuteImmediate != 259 )
    goto LABEL_23;
  return v6;
}
