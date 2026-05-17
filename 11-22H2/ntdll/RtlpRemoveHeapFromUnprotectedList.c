/*
 * XREFs of RtlpRemoveHeapFromUnprotectedList @ 0x180048FEC
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x180048DC4 (RtlpMoveHeapBetweenLists.c)
 *     RtlProtectHeap @ 0x180049280 (RtlProtectHeap.c)
 * Callees:
 *     <none>
 */

void **__fastcall RtlpRemoveHeapFromUnprotectedList(__int64 a1)
{
  struct _PEB *v1; // r8
  void **result; // rax
  unsigned int NumberOfHeaps; // r9d
  void **v5; // r11
  void **v6; // rbx
  unsigned int v7; // r9d
  __int16 v8; // di
  __int16 v9; // si
  __int16 v10; // bp
  __int64 v11; // rcx
  __int16 v12; // r10

  v1 = NtCurrentPeb();
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    result = (void **)*(unsigned __int16 *)(a1 + 28);
  else
    result = (void **)*(unsigned __int16 *)(a1 + 208);
  NumberOfHeaps = v1->NumberOfHeaps;
  if ( NumberOfHeaps && (_WORD)result && (unsigned __int16)result <= NumberOfHeaps )
  {
    v5 = &v1->ProcessHeaps[(unsigned __int16)result];
    v6 = v5 - 1;
    v7 = NumberOfHeaps - (unsigned __int16)result;
    if ( v7 )
    {
      v8 = HIWORD(dword_180182F28);
      v9 = HIWORD(dword_180182F18);
      v10 = word_180182F0A;
      do
      {
        v11 = (__int64)*v5++;
        *v6 = (void *)v11;
        if ( *(_DWORD *)(v11 + 16) == -571548178 )
          v12 = *(_WORD *)(v11 + 28);
        else
          v12 = *(_WORD *)(v11 + 208);
        if ( v10 == v12 )
          v10 = v12 - 1;
        if ( v9 == v12 )
          v9 = v12 - 1;
        if ( v8 == v12 )
          v8 = v12 - 1;
        if ( *(_DWORD *)(v11 + 16) == -571548178 )
          --*(_WORD *)(v11 + 28);
        else
          --*(_WORD *)(v11 + 208);
        ++v6;
        --v7;
      }
      while ( v7 );
      HIWORD(dword_180182F28) = v8;
      HIWORD(dword_180182F18) = v9;
      word_180182F0A = v10;
    }
    --v1->NumberOfHeaps;
    result = v1->ProcessHeaps;
    result[v1->NumberOfHeaps] = 0LL;
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 28) = 0;
    else
      *(_WORD *)(a1 + 208) = 0;
  }
  return result;
}
