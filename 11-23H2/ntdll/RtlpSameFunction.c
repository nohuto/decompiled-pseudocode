/*
 * XREFs of RtlpSameFunction @ 0x18007E0DC
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180020E30 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180020780 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x18007E134 (RtlpLookupPrimaryFunctionEntry.c)
 */

PRUNTIME_FUNCTION __fastcall RtlpSameFunction(__int64 a1, __int64 a2, ULONG64 a3)
{
  _DWORD *v4; // rdi
  PRUNTIME_FUNCTION result; // rax
  __int64 v6; // rbx
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+20h] BYREF

  v4 = (_DWORD *)RtlpLookupPrimaryFunctionEntry(a1, a2);
  result = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
  v6 = 0LL;
  if ( result )
  {
    if ( *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(result, ImageBase) )
      return (PRUNTIME_FUNCTION)v4;
    return (PRUNTIME_FUNCTION)v6;
  }
  return result;
}
