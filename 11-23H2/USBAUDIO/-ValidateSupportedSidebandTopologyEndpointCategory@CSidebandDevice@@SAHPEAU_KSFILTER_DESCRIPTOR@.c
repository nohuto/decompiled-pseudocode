/*
 * XREFs of ?ValidateSupportedSidebandTopologyEndpointCategory@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@K@Z @ 0x1C00125C8
 * Callers:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x1C0010B94 (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::ValidateSupportedSidebandTopologyEndpointCategory(
        struct _KSFILTER_DESCRIPTOR *a1,
        int a2)
{
  _QWORD *v2; // rcx
  bool v4; // al
  ULONG *v5; // r8
  void *v6; // rdx

  v2 = *(const GUID **)((char *)&a1->PinDescriptors->PinDescriptor.Category + a1->PinDescriptorSize * a2);
  if ( *v2 == *(_QWORD *)&GUID_dff21be1_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21be1_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21be2_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21be2_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21be4_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21be4_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21ce2_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21ce4_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21ce4_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21ce5_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21ce5_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21de2_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21de2_f70f_11d0_b917_00a0c9223196.Data4
    || *v2 == *(_QWORD *)&GUID_dff21de3_f70f_11d0_b917_00a0c9223196.Data1
    && v2[1] == *(_QWORD *)GUID_dff21de3_f70f_11d0_b917_00a0c9223196.Data4 )
  {
    return 1LL;
  }
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  v5 = &WPP_RECORDER_INITIALIZED;
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = &WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids;
    LOBYTE(v6) = v4;
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v6,
      (_DWORD)v5,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return 0LL;
}
