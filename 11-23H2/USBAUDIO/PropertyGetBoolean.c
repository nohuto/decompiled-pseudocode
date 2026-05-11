/*
 * XREFs of PropertyGetBoolean @ 0x1C0039D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C00054E4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x1C0005614 (WPP_RECORDER_AND_TRACE_SF__guid_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall PropertyGetBoolean(IRP *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebp
  int v8; // edx
  PKSFILTER FilterFromIrp; // rsi
  int v10; // r8d
  char v11; // bl
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // dl
  PDEVICE_OBJECT v15; // rcx
  int v17; // edx
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+38h] [rbp-50h]

  v3 = *(unsigned int *)(a2 + 32);
  v7 = -1073741808;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  v11 = 1;
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF__guid_d(WPP_GLOBAL_Control->AttachedDevice, v8, v10, WPP_GLOBAL_Control->DeviceExtension);
  }
  if ( !FilterFromIrp )
    goto LABEL_14;
  v12 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  v13 = *(_QWORD *)(v12 + 128);
  v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v14,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      0x10u,
      v20);
  if ( (unsigned int)v3 >= *(_DWORD *)(v12 + 92) )
  {
LABEL_14:
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v11 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v7;
    v17 = 17;
LABEL_36:
    LOBYTE(v17) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(v15->AttachedDevice, v17, v10, v15->DeviceExtension);
    return v7;
  }
  v7 = 0;
  *a3 = *(unsigned __int8 *)(v13 + 16 * v3 + 12);
  a1->IoStatus.Information = 4LL;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v17 = 18;
    goto LABEL_36;
  }
  return v7;
}
