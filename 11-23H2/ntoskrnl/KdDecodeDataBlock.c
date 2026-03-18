/*
 * XREFs of KdDecodeDataBlock @ 0x1405671A0
 * Callers:
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x140A9C538 (IopLiveDumpStartDumpDataBuffering.c)
 * Callees:
 *     KdCopyDataBlock @ 0x1405670D0 (KdCopyDataBlock.c)
 */

__int64 KdDecodeDataBlock()
{
  __int64 result; // rax

  if ( KdpDataBlockEncoded )
  {
    result = KdCopyDataBlock(&KdDebuggerDataBlock);
    KdpDataBlockEncoded = 0;
  }
  return result;
}
