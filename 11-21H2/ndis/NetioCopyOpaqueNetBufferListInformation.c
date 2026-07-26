/*
 * XREFs of NetioCopyOpaqueNetBufferListInformation @ 0x1C003A938
 * Callers:
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C003A420 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C003A630 (NdisCopySendNetBufferListInfo.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00ADE60 (NdisAllocateFragmentNetBufferList.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1C00AE280 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NetioCopyOpaqueNetBufferListInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d

  v2 = 0;
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
  if ( (*(_QWORD *)(a2 + 224) & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*(_QWORD *)(a2 + 224) & 1) == 0 )
    return (unsigned int)WfpNblInfoClone(a2, a1, 0LL, 0LL);
  return v2;
}
