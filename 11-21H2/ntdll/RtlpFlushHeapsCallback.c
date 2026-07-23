/*
 * XREFs of RtlpFlushHeapsCallback @ 0x18006C310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFlushHeapsCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpHeapCompact(a1, 0);
  else
    return RtlpFlushHeap(a1);
}
