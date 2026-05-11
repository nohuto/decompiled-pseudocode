/*
 * XREFs of ?GetNodeOfType@CSidebandDevice@@SAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000E838
 * Callers:
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0007734 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000D5AC (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DF84 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000E4D4 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000F95C (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159E4 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0016B28 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0009414 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C000956C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z @ 0x1C000EABC (-GetNodesInPath@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KKPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetNodeOfType(
        unsigned int a1,
        unsigned int a2,
        struct _KSFILTER_DESCRIPTOR *a3,
        const struct _GUID *a4,
        unsigned int *a5)
{
  struct _KSFILTER_DESCRIPTOR *v6; // rbp
  unsigned int v7; // r12d
  char v9; // bl
  int v10; // edx
  int NodesInPath; // esi
  struct _LIST_ENTRY *Flink; // rdi
  _QWORD *v13; // rdx
  char v14; // dl
  char v15; // r8
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *Blink; // rax
  void *v18; // r8
  int v20; // [rsp+20h] [rbp-78h]
  struct _LIST_ENTRY P; // [rsp+60h] [rbp-38h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)a3, WPP_GLOBAL_Control->DeviceExtension);
  P.Blink = &P;
  P.Flink = &P;
  NodesInPath = CSidebandDevice::GetNodesInPath(v6, a1, v7, &P);
  if ( NodesInPath >= 0 )
  {
    NodesInPath = -1073741275;
    while ( 1 )
    {
      Flink = P.Flink;
      if ( P.Flink == &P )
        break;
      v13 = *(const GUID **)((char *)&v6->NodeDescriptors->Type + v6->NodeDescriptorSize * LODWORD(P.Flink[1].Flink));
      if ( *v13 == *(_QWORD *)&a4->Data1 && v13[1] == *(_QWORD *)a4->Data4 )
      {
        *a5 = (unsigned int)P.Flink[1].Flink;
        NodesInPath = 0;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v14 = 0;
      }
      if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v15 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v15 = 0;
      }
      if ( v14 || v15 )
        WPP_RECORDER_AND_TRACE_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v20,
          9u,
          0x2Fu,
          (__int64)&WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids);
      v16 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v16;
      v16->Blink = Blink;
      ExFreePool(Flink);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)v10 || v9 )
  {
    v18 = &WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids;
    LOBYTE(v18) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      (_DWORD)v18,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)NodesInPath;
}
