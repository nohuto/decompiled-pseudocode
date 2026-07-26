/*
 * XREFs of ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092A10
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095B90 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00962E0 (-ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009817C (-ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0098644 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreProtocolOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A2BB0 (-ndisOidPreProtocolOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall GetMiniportFromReqTracker(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *result; // rax
  __int64 v2; // rax

  result = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( !*(_QWORD *)a1 )
  {
    v2 = *((_QWORD *)a1 + 3);
    if ( v2 )
    {
      return *(struct _NDIS_MINIPORT_BLOCK **)(v2 + 16);
    }
    else
    {
      result = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
      if ( result )
        return *(struct _NDIS_MINIPORT_BLOCK **)&result->Reserved4.Length;
      result = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 2);
      if ( result )
        return *(struct _NDIS_MINIPORT_BLOCK **)&result->Reserved4.Length;
    }
  }
  return result;
}
