/*
 * XREFs of ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x1C00B4C84
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0001180 (NdisAllocateCloneNetBufferList.c)
 *     ?ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z @ 0x1C0001828 (-ndisPplAllocate@@YAPEAXPEAUPPL_POOL_HANDLE__@@KPEAK@Z.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0002160 (NdisAllocateNetBufferAndNetBufferList.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisPplAllocateFromSpecialPool(const struct _NDIS_POOL_HEADER *a1)
{
  unsigned __int64 ItemLength; // rax
  _QWORD *Pool2; // rax

  ItemLength = a1->ItemLength;
  if ( ItemLength + 32 < ItemLength )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100000042LL, ItemLength + 32, a1->Tag);
  if ( !Pool2 )
    return 0LL;
  *Pool2 = a1;
  return Pool2 + 4;
}
