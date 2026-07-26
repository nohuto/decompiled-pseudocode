/*
 * XREFs of ?NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x1C003FFF6
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0003650 (NdisSendNetBufferLists.c)
 *     ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0004050 (-ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisNumNbsInNblChain(const struct _NET_BUFFER_LIST *Alignment)
{
  __int64 result; // rax
  _NET_BUFFER *FirstNetBuffer; // rdx
  int v3; // r8d

  result = 0LL;
  while ( Alignment )
  {
    FirstNetBuffer = Alignment->FirstNetBuffer;
    v3 = 0;
    while ( FirstNetBuffer )
    {
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      ++v3;
    }
    Alignment = (const struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    result = (unsigned int)(v3 + result);
  }
  return result;
}
