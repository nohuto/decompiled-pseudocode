/*
 * XREFs of RtlpCreateTraverseNodes @ 0x1800041AC
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180004090 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800AE28C (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     LdrpCalcAllocSize @ 0x1800044A8 (LdrpCalcAllocSize.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpCreateTraverseNodes(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = LdrpCalcAllocSize(42LL, 8LL);
    if ( v3 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v4, v3);
      if ( Heap )
        *a1 = Heap;
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
