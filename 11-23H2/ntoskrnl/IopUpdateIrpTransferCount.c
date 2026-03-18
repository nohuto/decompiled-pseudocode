/*
 * XREFs of IopUpdateIrpTransferCount @ 0x14028C6A0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14028C5D0 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x1405594DC (IopIoRingCompleteIrp.c)
 * Callees:
 *     IopUpdateReadTransferCount @ 0x14028C6C8 (IopUpdateReadTransferCount.c)
 *     IopUpdateOtherTransferCount @ 0x140556538 (IopUpdateOtherTransferCount.c)
 *     IopUpdateWriteTransferCount @ 0x140556570 (IopUpdateWriteTransferCount.c)
 */

__int64 __fastcall IopUpdateIrpTransferCount(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x100) != 0 )
    return IopUpdateReadTransferCount(*(unsigned int *)(a1 + 56));
  if ( (result & 0x200) != 0 )
    return IopUpdateWriteTransferCount(*(unsigned int *)(a1 + 56));
  if ( *(__int64 *)(a1 + 56) >= 0 )
    return IopUpdateOtherTransferCount(*(unsigned int *)(a1 + 56));
  return result;
}
