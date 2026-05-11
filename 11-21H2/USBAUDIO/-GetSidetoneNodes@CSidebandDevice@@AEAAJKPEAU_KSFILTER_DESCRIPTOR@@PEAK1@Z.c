/*
 * XREFs of ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000C3B0
 * Callers:
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000A2F4 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BF5C (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C7A8 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C8 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1C0003538 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C000B850 (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C0010768 (-TraverseToCaptureBridgePin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNE.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneNodes(
        CSidebandDevice *this,
        unsigned int a2,
        struct _KSFILTER_DESCRIPTOR *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v6; // ebp
  unsigned int v7; // esi
  int v10; // ebx
  char v11; // di
  char v12; // dl
  char v13; // r8
  ULONG ConnectionsCount; // r9d
  int v15; // ecx
  const KSTOPOLOGY_CONNECTION *Connections; // r11
  __int64 v17; // rdx
  ULONG *p_ToNodePin; // rax
  int v19; // ecx
  const struct KSTOPOLOGY_CONNECTION *v20; // r8
  char v21; // dl
  struct _LIST_ENTRY *Flink; // rbx
  char v23; // dl
  char v24; // r8
  _QWORD *v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY *Blink; // rax
  char v28; // dl
  int v30; // [rsp+20h] [rbp-88h]
  struct _LIST_ENTRY P[4]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int *v33; // [rsp+C8h] [rbp+20h]

  v33 = a4;
  v32 = -1;
  v6 = -1;
  v7 = -1;
  v10 = -1073741275;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v12 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v30,
      9u,
      0x31u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  ConnectionsCount = a3->ConnectionsCount;
  v15 = 0;
  if ( ConnectionsCount )
  {
    Connections = a3->Connections;
    v17 = ConnectionsCount;
    p_ToNodePin = &Connections->ToNodePin;
    do
    {
      if ( *(p_ToNodePin - 1) == -1 && *p_ToNodePin == a2 )
        v15 = 1;
      p_ToNodePin += 4;
      --v17;
    }
    while ( v17 );
    if ( v15 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = &Connections[v19];
        if ( v20->ToNode == -1 && v20->ToNodePin == a2 )
          break;
        if ( ++v19 >= ConnectionsCount )
          goto LABEL_22;
      }
      v10 = CSidebandDevice::TraverseToCaptureBridgePin(this, a3, v20, &v32);
      if ( v10 < 0 )
      {
LABEL_22:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v21 = 0;
        }
        if ( v21 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v21,
            *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v30,
            9u,
            0x32u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        goto LABEL_58;
      }
      P[0].Blink = P;
      P[0].Flink = P;
      if ( (int)CSidebandDevice::GetNodesInPath(this, v32, a2, P) < 0 )
        goto LABEL_57;
      while ( 1 )
      {
        Flink = P[0].Flink;
        if ( P[0].Flink == P )
          break;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v23 = 0;
        }
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v24 = 0;
        }
        if ( v23 || v24 )
          WPP_RECORDER_AND_TRACE_SF_ddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v23,
            v24,
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v30,
            9u,
            0x33u,
            (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
        v25 = *(const GUID **)((char *)&a3->NodeDescriptors->Type + LODWORD(Flink[1].Flink) * a3->NodeDescriptorSize);
        if ( *v25 == *(_QWORD *)&GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data1
          && v25[1] == *(_QWORD *)GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1.Data4
          && v6 == -1 )
        {
          v6 = (int)Flink[1].Flink;
        }
        if ( *v25 == *(_QWORD *)&GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data1
          && v25[1] == *(_QWORD *)GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1.Data4
          && v7 == -1 )
        {
          v7 = (unsigned int)Flink[1].Flink;
        }
        v26 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
          __fastfail(3u);
        Blink->Flink = v26;
        v26->Blink = Blink;
        ExFreePool(Flink);
      }
      if ( v6 == -1 && v7 == -1 )
      {
LABEL_57:
        v10 = -1073741275;
      }
      else
      {
        v10 = 0;
        *v33 = v6;
        *a5 = v7;
      }
    }
  }
LABEL_58:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v28 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v11 = 0;
  if ( v28 || v11 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v28,
      v11,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v30,
      9u,
      0x34u,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return (unsigned int)v10;
}
