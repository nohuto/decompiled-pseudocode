/*
 * XREFs of AslpPathWildcardFreeFindContext @ 0x1800A5A10
 * Callers:
 *     AslPathWildcardFindClose @ 0x1800A42B0 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x1800A42F4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     ULongLongMult @ 0x180096690 (ULongLongMult.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5B10 (AslpPathWildcardFreeMatchNode.c)
 */

void __fastcall AslpPathWildcardFreeFindContext(__int64 *a1)
{
  __int64 v1; // rbx
  ULONGLONG v3; // rdx
  ULONGLONG i; // rdi
  ULONGLONG v5; // rax
  void *v6; // r8
  void *v7; // r8
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v3 = *(_QWORD *)(v1 + 32);
      for ( i = 0LL; i < v3; ++i )
      {
        v5 = 0LL;
        if ( i < v3 )
        {
          if ( ULongLongMult(*(_QWORD *)(v1 + 24), i, &pullResult) < 0
            || (v5 = *(_QWORD *)(v1 + 56) + pullResult, v5 < *(_QWORD *)(v1 + 56)) )
          {
            v5 = 0LL;
          }
        }
        AslpPathWildcardFreeMatchNode(v5);
        v3 = *(_QWORD *)(v1 + 32);
      }
      v6 = *(void **)(v1 + 56);
      if ( v6 )
        RtlFreeHeap(*(HANDLE *)(v1 + 16), 0, v6);
      *(_OWORD *)(v1 + 16) = 0LL;
      *(_OWORD *)(v1 + 32) = 0LL;
      *(_OWORD *)(v1 + 48) = 0LL;
      v7 = *(void **)(v1 + 8);
      if ( v7 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v1);
      *a1 = 0LL;
    }
  }
}
