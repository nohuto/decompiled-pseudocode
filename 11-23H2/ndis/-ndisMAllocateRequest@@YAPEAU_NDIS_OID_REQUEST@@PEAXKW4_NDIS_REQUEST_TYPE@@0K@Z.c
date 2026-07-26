/*
 * XREFs of ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009FD98
 * Callers:
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C001704C (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 */

struct _NDIS_OID_REQUEST *__fastcall ndisMAllocateRequest(
        void *a1,
        NDIS_OID a2,
        NDIS_REQUEST_TYPE a3,
        void *a4,
        unsigned int Size)
{
  struct _NDIS_OID_REQUEST *result; // rax
  struct _NDIS_OID_REQUEST *v10; // rbx

  result = (struct _NDIS_OID_REQUEST *)ExAllocatePool2(64LL, Size + 248LL, 1903313998);
  v10 = result;
  if ( result )
  {
    result->RequestType = a3;
    result->Header.Type = -106;
    result->Header.Size = 248;
    result->Header.Revision = 1;
    result->DATA.QUERY_INFORMATION.Oid = a2;
    result->DATA.QUERY_INFORMATION.InformationBuffer = &result[1].PortNumber;
    result->DATA.QUERY_INFORMATION.InformationBufferLength = Size;
    if ( a4 )
      memmove(&result[1].PortNumber, a4, Size);
    if ( !a1 )
      a1 = &ndisIntReqGeneric;
    result = v10;
    *(_QWORD *)&v10->NdisReserved[32] = a1;
  }
  return result;
}
