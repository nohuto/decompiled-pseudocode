/*
 * XREFs of sub_18001AF90 @ 0x18001AF90
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x18000A7C8 (j_free.c)
 *     ??1UMSFreeThreadProxy@details@Concurrency@@UEAA@XZ @ 0x18001ADD0 (--1UMSFreeThreadProxy@details@Concurrency@@UEAA@XZ.c)
 */

void *__fastcall sub_18001AF90(void *Block, char a2)
{
  Concurrency::details::UMSFreeThreadProxy::~UMSFreeThreadProxy((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_free(Block);
  return Block;
}
