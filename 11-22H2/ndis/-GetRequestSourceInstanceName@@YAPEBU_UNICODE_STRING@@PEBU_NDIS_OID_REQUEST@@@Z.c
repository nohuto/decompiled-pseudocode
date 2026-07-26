/*
 * XREFs of ?GetRequestSourceInstanceName@@YAPEBU_UNICODE_STRING@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D11A8
 * Callers:
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0684 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0784 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0884 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0984 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 * Callees:
 *     <none>
 */

const struct _UNICODE_STRING *__fastcall GetRequestSourceInstanceName(const struct _NDIS_OID_REQUEST *a1)
{
  int v1; // r8d
  const struct _UNICODE_STRING *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax

  v1 = *(_DWORD *)&a1->NdisReserved[16];
  result = (const struct _UNICODE_STRING *)&unk_1C00D7F00;
  if ( (v1 & 0x20) != 0 )
  {
    v3 = *(_QWORD *)&a1->NdisReserved[32];
    if ( v3 )
    {
      if ( *(_BYTE *)v3 == 18 )
        return (const struct _UNICODE_STRING *)(*(_QWORD *)(v3 + 24) + 72LL);
    }
  }
  if ( (v1 & 0x40) != 0 )
  {
    v4 = *(_QWORD *)&a1->NdisReserved[32];
    if ( v4 )
    {
      if ( *(_BYTE *)v4 == 5 )
        return *(const struct _UNICODE_STRING **)(v4 + 48);
    }
  }
  v5 = *(_QWORD *)&a1->NdisReserved[32];
  if ( v5 && *(_BYTE *)v5 == 21 )
  {
    v6 = *(int *)(v5 + 4);
    if ( (int)v6 >= 6 )
      return (const struct _UNICODE_STRING *)L"02";
    else
      return (const struct _UNICODE_STRING *)(&NdisRequestSourceStringTable)[v6];
  }
  return result;
}
