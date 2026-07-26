/*
 * XREFs of ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008EF04
 * Callers:
 *     NdisFOidRequest @ 0x1C000AFE0 (NdisFOidRequest.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C0011E38 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0026610 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C0091390 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00222A4 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0078DF4 (WPP_RECORDER_SF_qqqd_ea_1C0078DF4.c)
 *     ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D070 (-ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_O.c)
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008F0F8 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090F50 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00914B0 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 */

__int64 __fastcall ndisOidPMAddRemove(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  NDIS_OID Oid; // eax
  unsigned int v11; // eax
  unsigned __int16 v12; // r9
  char v13[8]; // [rsp+28h] [rbp-40h]
  char v14[8]; // [rsp+30h] [rbp-38h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Eu,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( !KeGetCurrentIrql() )
  {
    Oid = a3->DATA.QUERY_INFORMATION.Oid;
    switch ( Oid )
    {
      case 0xFD01010A:
        v11 = ndisPMAddWOLPattern(a1, a2, a3);
        v8 = v11;
        if ( !v11 )
          goto LABEL_23;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v8;
        v12 = 64;
        break;
      case 0xFD01010B:
LABEL_16:
        v11 = ndisOidPMRemove(a1, a2, a3);
        v8 = v11;
        if ( !v11 )
          goto LABEL_23;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v8;
        v12 = 66;
        break;
      case 0xFD01010D:
        v11 = ndisPMAddProtocolOffload(a1, a2, a3);
        v8 = v11;
        if ( !v11 )
          goto LABEL_23;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v8;
        v12 = 65;
        break;
      case 0xFD01010F:
        goto LABEL_16;
      default:
        v8 = -1073741823;
        goto LABEL_23;
    }
    *(_DWORD *)v13 = v11;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      v12,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      *(_QWORD *)v13);
LABEL_23:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        0xBu,
        0x43u,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
        (char)a1,
        (char)a2,
        (char)a3,
        v8);
    return v8;
  }
  v7 = ndisCreatePMAddRemoveWorkItem(a1, (_LIST_ENTRY *)a2, a3);
  v8 = v7;
  if ( !v7 )
    return 259LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v7;
    WPP_RECORDER_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x3Fu,
      (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
      a3->DATA.QUERY_INFORMATION.Oid,
      *(_QWORD *)v14);
  }
  return v8;
}
