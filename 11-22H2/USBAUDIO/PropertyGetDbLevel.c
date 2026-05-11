/*
 * XREFs of PropertyGetDbLevel @ 0x1C0039FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C00054E4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x1C0005614 (WPP_RECORDER_AND_TRACE_SF__guid_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall PropertyGetDbLevel(PIRP Irp, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  _DWORD *v4; // r12
  __int64 v5; // rdi
  unsigned int v7; // esi
  char v8; // bl
  PKSFILTER FilterFromIrp; // rax
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // r15
  char v13; // dl
  PDEVICE_OBJECT v14; // rcx
  int v16; // edx
  int v17; // [rsp+20h] [rbp-68h]
  int v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+38h] [rbp-50h]

  v3 = *(unsigned int *)(a2 + 32);
  v4 = a3;
  v5 = a2;
  v7 = -1073741808;
  v8 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF__guid_d(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    goto LABEL_15;
  v11 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(v5 + 24)];
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
      v17,
      v18,
      0x17u,
      v19);
  if ( (unsigned int)v3 >= *(_DWORD *)(v11 + 92) )
  {
LABEL_15:
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v7;
    v16 = 24;
LABEL_35:
    LOBYTE(v16) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(v14->AttachedDevice, v16, v10, v14->DeviceExtension);
    return v7;
  }
  v7 = 0;
  *v4 = *(_DWORD *)(32 * v3 + v12 + 12);
  Irp->IoStatus.Information = 4LL;
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 9u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = 25;
    goto LABEL_35;
  }
  return v7;
}
