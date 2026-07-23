/*
 * XREFs of MiSlistGetFreePage @ 0x1402EBC24
 * Callers:
 *     MiRemovePageAnyColor @ 0x1402EBA04 (MiRemovePageAnyColor.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140285C64 (MiSetOriginalPtePfnFromFreeList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x14064D970 (MiArePageContentsZero.c)
 */

_QWORD *__fastcall MiSlistGetFreePage(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // edi
  __int64 v6; // rsi
  _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  _QWORD *p_Next; // rbx

  v3 = *a2;
  v6 = 16LL * a3;
  while ( 1 )
  {
    v7 = (_SLIST_HEADER *)(v6 + *(_QWORD *)(a1 + 8LL * v3 + 6808));
    if ( LOWORD(v7->Alignment) )
    {
      v8 = RtlpInterlockedPopEntrySList(v7);
      p_Next = &v8->Next;
      if ( v8 )
        break;
    }
    if ( v3 == a2[1] )
      return 0LL;
    v3 = a2[1];
  }
  v8[1].Next = (_SLIST_ENTRY *)ZeroPte;
  if ( v3 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v8[1]);
  }
  else if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67F60 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v8[0x22000000000LL] >> 4));
  }
  *p_Next = 0LL;
  return p_Next;
}
