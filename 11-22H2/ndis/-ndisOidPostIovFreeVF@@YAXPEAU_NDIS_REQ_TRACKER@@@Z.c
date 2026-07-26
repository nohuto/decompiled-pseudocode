/*
 * XREFs of ?ndisOidPostIovFreeVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0077170
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037394 (-ndisIsSuccessOrSupriseRemove@@YA_NHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z @ 0x1C007602C (-ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovFreeVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v2; // r8

  if ( *(_QWORD *)a1 )
  {
    if ( ndisIsSuccessOrSupriseRemove(*((_DWORD *)a1 + 10), *(struct _NDIS_MINIPORT_BLOCK **)a1) )
    {
      ndisIovFreeVF(*(struct _NDIS_VF_BLOCK **)(v2 + 144));
      *((_DWORD *)a1 + 10) = 0;
    }
  }
}
