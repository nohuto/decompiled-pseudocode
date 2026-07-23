/*
 * XREFs of RtlConvertHostPerfCounterToPerfCounter @ 0x180089C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x18007DFC0 (RtlGetMultiTimePrecise.c)
 */

__int64 __fastcall RtlConvertHostPerfCounterToPerfCounter(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  LARGE_INTEGER v8; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    return 3221225485LL;
  result = RtlGetMultiTimePrecise(&v8, 3, &v10);
  if ( (int)result >= 0 )
  {
    if ( (v10 & 3) == 3 && (a2 == -1LL || (a1 >= v9 ? (v7 = a1 - v9) : (v7 = v9 - a1), v7 < a2)) )
    {
      *a3 = a1 + v8.QuadPart - v9;
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
