/*
 * XREFs of RtlpCSparseBitmapWaitOnAddress @ 0x1405B7A50
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1403136B8 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140355D1C (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140348930 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall RtlpCSparseBitmapWaitOnAddress(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( !*(_BYTE *)(a4 + 48) )
    return ExBlockOnAddressPushLock((volatile __int64 *)(a4 + 40), a1, a2, 8uLL, 0LL);
  while ( a1 == (_QWORD *)*a2 )
    _mm_pause();
  return 0LL;
}
