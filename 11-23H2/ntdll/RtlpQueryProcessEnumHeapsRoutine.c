/*
 * XREFs of RtlpQueryProcessEnumHeapsRoutine @ 0x1800E4740
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180001934 (RtlpCommitQueryDebugInfo.c)
 *     RtlpGetHeapTag @ 0x1800E42B0 (RtlpGetHeapTag.c)
 *     RtlHpQuerySegmentHeapRoutine @ 0x1800FEB00 (RtlHpQuerySegmentHeapRoutine.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryProcessEnumHeapsRoutine(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rsi
  char *DebugInfo; // rax
  char *v5; // rdi
  __int64 result; // rax
  __int64 HeapTag; // rax
  __int64 v8; // rdx
  __int64 *i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = (_DWORD *)a2[14];
  DebugInfo = RtlpCommitQueryDebugInfo(a2, 0x60u);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  memset_thunk_772440563353939046(DebugInfo, 0, 0x60uLL);
  result = RtlHpQuerySegmentHeapRoutine(a1, v5);
  if ( (int)result < 0 )
  {
    *(_QWORD *)v5 = a1;
    *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v5 + 6) = 16;
    *((_WORD *)v5 + 7) = *(_WORD *)(a1 + 304);
    HeapTag = RtlpGetHeapTag((void *)a1);
    v8 = *((_QWORD *)v5 + 3);
    *((_QWORD *)v5 + 11) = HeapTag;
    for ( i = *(__int64 **)(a1 + 288); i != (__int64 *)(a1 + 288); i = (__int64 *)*i )
    {
      v8 += (unsigned int)((*((_DWORD *)i + 8) - *((_DWORD *)i + 14)) << 12);
      *((_QWORD *)v5 + 3) = v8;
    }
    if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_BYTE *)(a1 + 418) == 2 && (v10 = *(_QWORD *)(a1 + 408)) != 0 )
      v11 = *(_QWORD *)(v10 + 40) - v10;
    else
      v11 = 0LL;
    *((_QWORD *)v5 + 3) = v8 + v11;
    *((_QWORD *)v5 + 2) = v8 + v11 - 16LL * *(_QWORD *)(a1 + 192);
    ++*v2;
    return 0LL;
  }
  else
  {
    ++*v2;
  }
  return result;
}
