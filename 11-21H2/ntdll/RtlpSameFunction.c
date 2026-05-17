/*
 * XREFs of RtlpSameFunction @ 0x1800852D4
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180039210 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180039DA0 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x18008532C (RtlpLookupPrimaryFunctionEntry.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, ULONG64 a3)
{
  _DWORD *v4; // rdi
  PRUNTIME_FUNCTION v5; // rax
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+20h] BYREF

  v4 = (_DWORD *)RtlpLookupPrimaryFunctionEntry(a1, a2);
  v5 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
  if ( v5 && *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v5, ImageBase) )
    return v4;
  else
    return 0LL;
}
