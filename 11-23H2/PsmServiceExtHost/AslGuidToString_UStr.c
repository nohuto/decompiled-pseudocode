/*
 * XREFs of AslGuidToString_UStr @ 0x180098AF4
 * Callers:
 *     SdbResolveDatabaseEx @ 0x180092094 (SdbResolveDatabaseEx.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x18008FBA8 (RtlStringCchPrintfW.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslGuidToString_UStr(__int64 a1, unsigned int *a2)
{
  wchar_t *Heap; // r14
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-68h]

  *(_DWORD *)a1 = 5111884;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x4EuLL);
  if ( Heap )
  {
    v6 = RtlStringCchPrintfW(
           Heap,
           (unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1,
           L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
           *a2,
           *((unsigned __int16 *)a2 + 2),
           *((unsigned __int16 *)a2 + 3),
           *((unsigned __int8 *)a2 + 8),
           *((unsigned __int8 *)a2 + 9),
           *((unsigned __int8 *)a2 + 10),
           *((unsigned __int8 *)a2 + 11),
           *((unsigned __int8 *)a2 + 12),
           *((unsigned __int8 *)a2 + 13),
           *((unsigned __int8 *)a2 + 14),
           *((unsigned __int8 *)a2 + 15));
    v5 = v6;
    if ( v6 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = Heap;
      return 0;
    }
    else
    {
      LODWORD(v8) = v6;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslGuidToString_UStr",
        266,
        (unsigned int)"RtlStringCchPrintfW failed [%x]",
        v8);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  else
  {
    AslLogCallPrintf(1LL, (unsigned int)"AslGuidToString_UStr", 246, (unsigned int)"Out of memory");
    return (unsigned int)-1073741801;
  }
  return v5;
}
