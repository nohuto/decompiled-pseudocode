/*
 * XREFs of ?ndisOidPostIovDeleteVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077150
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00374D0 (-ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0075B40 (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovDeleteVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v2; // r8

  if ( *(_QWORD *)a1 )
  {
    if ( ndisIsSuccessOrSupriseRemove(*((_DWORD *)a1 + 10), *(struct _NDIS_MINIPORT_BLOCK **)a1) )
    {
      ndisIovDeleteVPort(*(_QWORD **)(v2 + 152));
      *((_DWORD *)a1 + 10) = 0;
    }
  }
}
