/*
 * XREFs of AslUnicodeStringFree @ 0x180099898
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1800923F4 (SdbResolveDatabaseEx.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

BOOLEAN __fastcall AslUnicodeStringFree(__int64 a1)
{
  void *v2; // rcx
  BOOLEAN result; // al
  void *v4; // r8

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      result = (unsigned __int8)memset_0(v2, 66, *(unsigned __int16 *)(a1 + 2));
      v4 = *(void **)(a1 + 8);
      if ( v4 )
        result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
