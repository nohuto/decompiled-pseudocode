/*
 * XREFs of PropertyGetDbLevel @ 0x1C002ECF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x1C000243C (WPP_RECORDER_AND_TRACE_SF__guid_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C0002614 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall PropertyGetDbLevel(PIRP Irp, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v7; // esi
  char v8; // bl
  char v9; // dl
  PKSFILTER FilterFromIrp; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  char v13; // dl
  PDEVICE_OBJECT v14; // rcx
  char v15; // r8
  unsigned __int16 v16; // dx
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+38h] [rbp-50h]

  v3 = *(unsigned int *)(a2 + 32);
  v7 = -1073741808;
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF__guid_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      0x16u,
      v20,
      a2);
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    goto LABEL_26;
  v11 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  v12 = *(_QWORD *)(v11 + 128);
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      v19,
      0x17u,
      v20);
  if ( (unsigned int)v3 < *(_DWORD *)(v11 + 92) )
  {
    v7 = 0;
    *a3 = *(_DWORD *)(32 * v3 + v12 + 12);
    Irp->IoStatus.Information = 4LL;
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = 25;
LABEL_33:
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)v14->AttachedDevice,
        v8,
        v15,
        (__int64)v14->DeviceExtension,
        v18,
        0xAu,
        v16,
        (__int64)&WPP_ec316f5a3b2f32ff42433c904743c1e5_Traceguids);
    }
  }
  else
  {
LABEL_26:
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = 24;
      goto LABEL_33;
    }
  }
  return v7;
}
