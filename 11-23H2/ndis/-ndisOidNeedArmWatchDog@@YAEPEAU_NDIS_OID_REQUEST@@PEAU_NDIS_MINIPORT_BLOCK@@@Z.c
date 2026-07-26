/*
 * XREFs of ?ndisOidNeedArmWatchDog@@YAEPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000907C
 * Callers:
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00405E0 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C010C960 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C012DE3C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisOidNeedArmWatchDog(struct _NDIS_OID_REQUEST *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  bool result; // al
  NDIS_OID Oid; // eax

  result = (a2->Flags & 0x80u) == 0
        || (Oid = a1->DATA.QUERY_INFORMATION.Oid, Oid != 131334) && Oid != -50265847
        || *(_QWORD *)&a1->NdisReserved[32] != (_QWORD)&ndisIntReqGeneric;
  return result;
}
