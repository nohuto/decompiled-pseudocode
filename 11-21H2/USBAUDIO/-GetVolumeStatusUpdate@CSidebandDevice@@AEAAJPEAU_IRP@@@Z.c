/*
 * XREFs of ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013E2C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumeStatusUpdate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  PDEVICE_OBJECT v6; // rcx
  char v7; // dl
  char v8; // r8
  unsigned __int16 v9; // r9
  unsigned int *p_NamedPipeType; // rsi
  NTSTATUS VolumeImmediate; // eax
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    v5 = -1073741306;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v9 = 40;
    goto LABEL_10;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    v5 = -1073741811;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_24;
    v9 = 41;
LABEL_10:
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)v6->AttachedDevice,
      v7,
      v8,
      (__int64)v6->DeviceExtension,
      v13,
      v14,
      v9,
      (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
LABEL_24:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  if ( p_NamedPipeType[1] )
    VolumeImmediate = CSidebandDevice::GetVolumeImmediate(this, a2);
  else
    VolumeImmediate = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 6) + 160LL), a2, 0LL, (char *)this + 88);
  v5 = VolumeImmediate;
  if ( VolumeImmediate != 259 )
    goto LABEL_24;
  return v5;
}
