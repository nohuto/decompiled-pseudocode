/*
 * XREFs of RtlIsNormalizedString @ 0x18010EA60
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x18000E460 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     RtlpGetNormalization @ 0x180089D98 (RtlpGetNormalization.c)
 *     Normalization__IsNormalized @ 0x18010E578 (Normalization__IsNormalized.c)
 */

__int64 __fastcall RtlIsNormalizedString(unsigned int a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  unsigned int v5; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = -1LL;
  if ( a3 < -1 || !a1 )
    return 3221225485LL;
  result = RtlpGetNormalization(a1, &v9);
  if ( (int)result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( a2[v7] );
      v5 = v7 + 1;
    }
    return Normalization__IsNormalized(v9, a2, v5, a4);
  }
  return result;
}
