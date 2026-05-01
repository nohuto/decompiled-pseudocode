/*
 * XREFs of AslGuidToString_UStr @ 0x18009E43C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x18009737C (SdbResolveDatabaseEx.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x180095038 (RtlStringCchPrintfW.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslGuidToString_UStr(__int64 a1, unsigned int *a2)
{
  wchar_t *Heap; // r14
  int v5; // ebx

  *(_DWORD *)a1 = 5111884;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x4EuLL);
  if ( Heap )
  {
    v5 = RtlStringCchPrintfW(
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
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = Heap;
      return 0;
    }
    else
    {
      AslLogCallPrintf(1LL);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
