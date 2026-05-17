/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180112DCC
 * Callers:
 *     RtlGetUILanguageInfo @ 0x18008A6F0 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180112F84 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180112F84 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  __int16 v9; // r9
  __int16 i; // r8
  __int16 v11; // dx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 Heap; // rax
  __int64 v17; // rdi
  unsigned int FallbackLanguageInfoByName; // ebx
  int v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]

  v5 = a3;
  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  v9 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v11 = (*(_WORD *)(a2 + 8) >> i) & 3;
    v12 = *(__int16 *)(a2 + 2LL * v9 + 12);
    if ( v11 == 2 )
    {
      v13 = 28 * v12;
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      if ( *(_WORD *)(v13 + v14 + 4) == (_WORD)v5 )
      {
        *(_OWORD *)a5 = *(_OWORD *)(v13 + v14);
        *(_QWORD *)(a5 + 16) = *(_QWORD *)(v13 + v14 + 16);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(v13 + v14 + 24);
        return 0LL;
      }
    }
    else if ( (_DWORD)v12 != v5 && v11 != 1 )
    {
      *(_OWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_DWORD *)(a5 + 24) = 0;
      *(_WORD *)(a5 + 6) = -1;
      *(_WORD *)(a5 + 4) = v5;
      return 0LL;
    }
    ++v9;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
  v17 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( a4 && *(__int16 *)(a2 + 6) > 0 && (v20 = Heap, v19 = 11141120, RtlLCIDToCultureName(v5, (__int64)&v19)) )
  {
    FallbackLanguageInfoByName = RtlpMuiRegGetFallbackLanguageInfoByName(a1, a2, v20, 0LL, a5);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
    return FallbackLanguageInfoByName;
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
    return 3221225524LL;
  }
}
