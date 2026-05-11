/*
 * XREFs of ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1C0010B94
 * Callers:
 *     IsSupportedSidebandTopology @ 0x1C000BD70 (IsSupportedSidebandTopology.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000BD88 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000D080 (-GetBridgePinForDataPin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C00125C8 (-ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@.c)
 *     ?ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z @ 0x1C00127B0 (-ValidateSupportedSidebandTopologyPathNodes@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@KK@Z.c)
 */

__int64 __fastcall CSidebandDevice::IsSupportedSidebandTopology(struct _KSFILTER_DESCRIPTOR *a1)
{
  unsigned int v1; // ebx
  PDEVICE_OBJECT *v2; // rdx
  unsigned int v3; // r14d
  ULONG *v4; // r8
  unsigned int v6; // r12d
  char v7; // di
  unsigned int v8; // r9d
  unsigned int v9; // r13d
  ULONG v10; // ebp
  char *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  PDEVICE_OBJECT v14; // rcx
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v18; // r10
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+18h]

  v1 = 0;
  v2 = &WPP_GLOBAL_Control;
  v3 = -1;
  v21 = 0;
  v4 = &WPP_RECORDER_INITIALIZED;
  v6 = 0;
  v7 = 1;
  v8 = 0;
  v9 = -1;
  v19 = -1;
  v10 = 0;
  v20 = -1;
  if ( a1->PinDescriptorsCount )
  {
    do
    {
      v11 = (char *)a1->PinDescriptors + a1->PinDescriptorSize * v10;
      if ( *((_DWORD *)v11 + 17) != 4 )
      {
        v12 = **((_QWORD **)v11 + 7);
        if ( *(_QWORD *)(v12 + 32) != *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1
          || *(_QWORD *)(v12 + 40) != *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v2) = 0;
          }
          if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (LOBYTE(v4) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v4) = 0;
          }
          if ( (_BYTE)v2 || (_BYTE)v4 )
          {
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v2,
              (_DWORD)v4,
              WPP_GLOBAL_Control->DeviceExtension);
            v8 = v21;
          }
          v13 = *((_DWORD *)v11 + 16);
          if ( v13 == 1 )
          {
            ++v6;
            v3 = v10;
          }
          else if ( v13 == 2 )
          {
            ++v8;
            v9 = v10;
            v21 = v8;
          }
          v2 = &WPP_GLOBAL_Control;
          v4 = &WPP_RECORDER_INITIALIZED;
        }
      }
      ++v10;
    }
    while ( v10 < a1->PinDescriptorsCount );
    if ( v6 > 1 )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v4) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      goto LABEL_36;
    }
    if ( v8 > 1 )
    {
      v14 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v4) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
LABEL_36:
      LOBYTE(v2) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(v14->AttachedDevice, (_DWORD)v2, (_DWORD)v4, v14->DeviceExtension);
      return 0LL;
    }
  }
  if ( (int)CSidebandDevice::GetBridgePinForDataPin(a1, (const KSTOPOLOGY_CONNECTION *)v3, &v19) < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    goto LABEL_54;
  }
  if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(a1, v19) )
    return 0LL;
  if ( (int)CSidebandDevice::GetBridgePinForDataPin(a1, (const KSTOPOLOGY_CONNECTION *)v9, &v20) < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
LABEL_54:
    LOBYTE(v16) = v7;
    WPP_RECORDER_AND_TRACE_SF_dd(v18->AttachedDevice, v16, v17, v18->DeviceExtension);
    return 0LL;
  }
  if ( !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(a1, v20)
    || !(unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(a1, v3, v19) )
  {
    return 0LL;
  }
  LOBYTE(v1) = (unsigned int)CSidebandDevice::ValidateSupportedSidebandTopologyPathNodes(a1, v9, v20) != 0;
  return v1;
}
