/*
 * XREFs of ndisMEmitTraceRundown @ 0x1C00B1CC4
 * Callers:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00B1AEC (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C002442C (WPP_RECORDER_SF_qqZ.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0062EAC (WPP_RECORDER_SF_LL_ea_1C0062EAC.c)
 *     ndisAoAcTraceRundown @ 0x1C00B1944 (ndisAoAcTraceRundown.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C00B221C (WPP_RECORDER_SF_DDDDD.c)
 */

void __fastcall ndisMEmitTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // r9d
  _NDIS_FILTER_BLOCK *i; // rdi
  _NDIS_OPEN_BLOCK *j; // rdi
  int v5; // [rsp+20h] [rbp-48h]
  char v6[8]; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xEu,
      (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
      (char)a1,
      (char)a1->DriverHandle,
      &a1->pAdapterInstanceName->Length);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a1->DriverHandle->MajorNdisVersion,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        v2,
        v5,
        a1->DriverHandle->MajorNdisVersion,
        a1->DriverHandle->MinorNdisVersion,
        a1->IfIndex,
        *((_WORD *)&a1->NetLuid.Info + 3),
        BYTE3(a1->NetLuid.Value));
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v6 = a1->PnPDeviceState;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x10u,
          (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
          a1->State,
          *(_QWORD *)v6);
      }
    }
  }
  if ( a1->AoAc )
    ndisAoAcTraceRundown(a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( a1->LowestFilter )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0x12u,
        (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
    for ( i = a1->LowestFilter; i; i = i->HigherFilter )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x13u,
          (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
          (char)i,
          (char)i->FilterDriver,
          &i->FilterFriendlyName->Length);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0x11u,
      (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
  }
  if ( a1->OpenQueue )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0x15u,
        (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
    for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x16u,
          (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids,
          (char)j,
          (char)j->ProtocolHandle,
          &j->ProtocolHandle->Name.Length);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0x14u,
      (struct _GUID *)&WPP_b4da289a22fb3fb85c881fb62f41861d_Traceguids);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}
