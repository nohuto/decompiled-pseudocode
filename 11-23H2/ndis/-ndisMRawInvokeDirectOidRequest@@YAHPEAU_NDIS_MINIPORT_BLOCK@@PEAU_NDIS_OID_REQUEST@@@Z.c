/*
 * XREFs of ?ndisMRawInvokeDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C006D2C8
 * Callers:
 *     ?ndisMpHookInvokeDirectOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B3C90 (-ndisMpHookInvokeDirectOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_R.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00084A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C000D140 (WPP_RECORDER_SF_qDd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMRawInvokeDirectOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rbp
  NDIS_OID Oid; // esi
  int v6; // eax
  int v7; // r8d
  unsigned int v8; // edi
  char v10[4]; // [rsp+30h] [rbp-28h]
  char v11[4]; // [rsp+38h] [rbp-20h]

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF6u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      *(_DWORD *)v10);
  }
  v6 = DriverHandle->UnhookedCharacteristics.__ptr_.__value_->DirectOidRequestHandler(a1->MiniportAdapterContext, a2);
  v8 = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = v6;
    WPP_RECORDER_SF_qDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v7,
      0xF7u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      Oid,
      *(_DWORD *)v11);
  }
  return v8;
}
