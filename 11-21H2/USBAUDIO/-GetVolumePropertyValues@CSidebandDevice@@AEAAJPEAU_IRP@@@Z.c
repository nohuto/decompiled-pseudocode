/*
 * XREFs of ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013C48
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED34 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0008E44 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000D0E4 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1C0016768 (WPP_RECORDER_AND_TRACE_SF_dq.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumePropertyValues(CSidebandDevice *this, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  NTSTATUS VolumePropertyBasicSupport; // edi
  PDEVICE_OBJECT v6; // rcx
  char v7; // dl
  char v8; // r8
  unsigned __int16 v9; // r9
  unsigned int NamedPipeType; // ebp
  PVOID UserBuffer; // r9
  int v12; // edx
  int v13; // r8d
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+28h] [rbp-40h]
  unsigned int Length; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      UserBuffer = Irp->UserBuffer;
      Length = CurrentStackLocation->Parameters.Read.Length;
      VolumePropertyBasicSupport = CSidebandDevice::GetVolumePropertyBasicSupport(
                                     this,
                                     NamedPipeType,
                                     &Length,
                                     UserBuffer);
      if ( VolumePropertyBasicSupport >= 0 )
        Irp->IoStatus.Information = Length;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dq(WPP_GLOBAL_Control->AttachedDevice, v12, v13, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
    else
    {
      VolumePropertyBasicSupport = -1073741811;
      v6 = WPP_GLOBAL_Control;
      v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v9 = 28;
        goto LABEL_10;
      }
    }
  }
  else
  {
    VolumePropertyBasicSupport = -1073741306;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = 27;
LABEL_10:
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)v6->AttachedDevice,
        v7,
        v8,
        (__int64)v6->DeviceExtension,
        v15,
        v16,
        v9,
        (__int64)&WPP_d91e0995aab63725f39cb7e6331f1958_Traceguids);
    }
  }
  Irp->IoStatus.Status = VolumePropertyBasicSupport;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)VolumePropertyBasicSupport;
}
