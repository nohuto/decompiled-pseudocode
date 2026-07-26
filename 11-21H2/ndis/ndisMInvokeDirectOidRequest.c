/*
 * XREFs of ndisMInvokeDirectOidRequest @ 0x1C00B0010
 * Callers:
 *     ?ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z @ 0x1C00AFC6C (-ndisMDoDirectOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@E@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009088 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009D80 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0023F10 (WPP_RECORDER_SF_qDD_ea_1C0023F10.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeDirectOidRequest(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  __int64 v2; // r15
  struct _NDIS_OID_REQUEST *v3; // rbp
  NDIS_OID Oid; // r14d
  NDIS_STATUS v6; // eax
  struct _NDIS_OID_REQUEST *v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+38h] [rbp-30h]
  struct _NDIS_OID_REQUEST *v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)&a1[4].Ref.ReferenceCount;
  v3 = a2;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v11 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid);
  v6 = ndisOidCloneForCompatibility(&a1->Header, v3, 0, &v11);
  v7 = v11;
  v8 = v6;
  if ( !v6 )
  {
    if ( v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x10u,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)v3,
        (char)v11,
        v11->DATA.QUERY_INFORMATION.Oid);
    if ( v7 )
      v3 = v7;
    v8 = (*(__int64 (__fastcall **)(void *, struct _NDIS_OID_REQUEST *))(v2 + 248))(a1->FilterModuleContext, v3);
  }
  if ( v8 != 259 && v7 )
    ndisOidFreeInternalCloneRequest(a1, v7, 0, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v8;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)a1,
      Oid,
      v10);
  }
  return v8;
}
