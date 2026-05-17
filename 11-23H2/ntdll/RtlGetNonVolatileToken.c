/*
 * XREFs of RtlGetNonVolatileToken @ 0x18010A090
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlGetNonVolatileToken(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  char v6; // [rsp+3Ch] [rbp-2Ch]

  v4 = 1LL;
  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    if ( (v6 & 0x20) != 0 )
    {
      if ( RtlpIsFlushRequired )
        v4 = 3LL;
      result = 0LL;
      *a3 = v4;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
