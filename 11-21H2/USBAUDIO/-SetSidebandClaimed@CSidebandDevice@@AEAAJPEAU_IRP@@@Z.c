/*
 * XREFs of ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014548
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall CSidebandDevice::SetSidebandClaimed(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v3; // edi
  char v6; // dl
  char v7; // dl
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        9u,
        0x93u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    *(_DWORD *)(*((_QWORD *)this + 6) + 144LL) = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    KeSetEvent((PRKEVENT)(*((_QWORD *)this + 6) + 96LL), 0, 0);
  }
  else
  {
    v3 = -1073741306;
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        v10,
        0x92u,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
  }
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
