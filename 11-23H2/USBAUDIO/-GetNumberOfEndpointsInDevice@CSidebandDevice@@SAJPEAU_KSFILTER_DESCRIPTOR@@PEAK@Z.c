/*
 * XREFs of ?GetNumberOfEndpointsInDevice@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEAK@Z @ 0x1C000EC98
 * Callers:
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C0010F08 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHPEAU_KSFILTER_DESCRIPTOR@@K@Z.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133C8 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetNumberOfEndpointsInDevice(struct _KSFILTER_DESCRIPTOR *a1, unsigned int *a2)
{
  unsigned int *v2; // rsi
  ULONG i; // ebx
  char *v5; // rax
  __int64 v6; // rcx
  char v7; // r8

  v2 = a2;
  *a2 = 0;
  for ( i = 0; i < a1->PinDescriptorsCount; ++i )
  {
    v5 = (char *)a1->PinDescriptors + a1->PinDescriptorSize * i;
    if ( *((_DWORD *)v5 + 17) != 4 )
    {
      v6 = **((_QWORD **)v5 + 7);
      if ( *(_QWORD *)(v6 + 32) != *(_QWORD *)&GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data1
        || *(_QWORD *)(v6 + 40) != *(_QWORD *)GUID_6dba3190_67bd_11cf_a0f7_0020afd156e4.Data4 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(a2) = 0;
        }
        if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v7 = 0;
        }
        if ( (_BYTE)a2 || v7 )
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)a2,
            v7,
            WPP_GLOBAL_Control->DeviceExtension);
        ++*v2;
      }
    }
  }
  return 0LL;
}
