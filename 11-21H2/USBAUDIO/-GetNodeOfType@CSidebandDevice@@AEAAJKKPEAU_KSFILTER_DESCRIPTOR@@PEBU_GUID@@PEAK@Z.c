/*
 * XREFs of ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000B5C4
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000A2F4 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ACF0 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000B260 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000D0E4 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013FAC (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00150E4 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C000B850 (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetNodeOfType(
        CSidebandDevice *this,
        unsigned int a2,
        unsigned int a3,
        struct _KSFILTER_DESCRIPTOR *a4,
        const struct _GUID *a5,
        unsigned int *a6)
{
  char v10; // bl
  char v11; // dl
  char v12; // r8
  int NodesInPath; // esi
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v15; // r9d
  _QWORD *v16; // rdx
  char v17; // dl
  char v18; // r8
  struct _LIST_ENTRY *v19; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v21; // dl
  int v23; // [rsp+20h] [rbp-78h]
  struct _LIST_ENTRY P; // [rsp+60h] [rbp-38h] BYREF

  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v11 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      9u,
      0x2Eu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  P.Blink = &P;
  P.Flink = &P;
  NodesInPath = CSidebandDevice::GetNodesInPath(this, a2, a3, &P);
  if ( NodesInPath >= 0 )
  {
    NodesInPath = -1073741275;
    while ( 1 )
    {
      Flink = P.Flink;
      if ( P.Flink == &P )
        break;
      v15 = (unsigned int)P.Flink[1].Flink;
      v16 = *(const GUID **)((char *)&a4->NodeDescriptors->Type + v15 * a4->NodeDescriptorSize);
      if ( *v16 == *(_QWORD *)&a5->Data1 && v16[1] == *(_QWORD *)a5->Data4 )
      {
        *a6 = v15;
        NodesInPath = 0;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v17 = 0;
      }
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v18 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v18 = 0;
      }
      if ( v17 || v18 )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v23,
          9u,
          0x2Fu,
          (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
      v19 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v19;
      v19->Blink = Blink;
      ExFreePool(Flink);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v21 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( v21 || v10 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v10,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      9u,
      0x30u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)NodesInPath;
}
