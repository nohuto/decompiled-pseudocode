/*
 * XREFs of ?NdisNblClassifierForCancelId@@YA_KPEAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00A64D0
 * Callers:
 *     ?NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z @ 0x1C00A641C (-NdisClassifyNblChain2@@YAXPEAU_NET_BUFFER_LIST@@P6A_KPEAX0@Z1PEAUNBL_QUEUE_t@@3@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall NdisNblClassifierForCancelId(void *a1, struct _NET_BUFFER_LIST *a2)
{
  return a2->NetBufferListInfo[5] == a1;
}
