/*
 * XREFs of RtlpRemoveHeapFromProtectedList @ 0x180049A64
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x180048DC4 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpRemoveHeapFromProtectedList(__int64 a1)
{
  unsigned __int16 v1; // r8
  __int64 result; // rax
  _QWORD *v3; // r9
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // r8

  v1 = RtlpNumberOfProtectedHeaps;
  result = 28LL;
  v3 = RtlpProtectedHeapsList;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    result = 208LL;
  v4 = 0;
  for ( *(_WORD *)(result + a1) = 0; v4 < v1; ++v4 )
  {
    result = v4;
    if ( v3[v4] == a1 )
      break;
  }
  if ( v3[v4] == a1 )
  {
    v5 = v1 - 1;
    RtlpNumberOfProtectedHeaps = v5;
    result = v3[v5];
    v3[v4] = result;
    v3[v5] = 0LL;
  }
  return result;
}
