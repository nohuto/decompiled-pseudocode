/*
 * XREFs of AslStringPatternMatchExW @ 0x1800992AC
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x1800934DC (SdbpCheckAttribute.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1800953F0 (SdbpCheckMatchingRegistryValue.c)
 *     AslStringPatternMatchExW @ 0x1800992AC (AslStringPatternMatchExW.c)
 *     AslpProcessMatchRegNode @ 0x18009FA98 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x1800992AC (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchExW(WCHAR *a1, WCHAR *a2)
{
  WCHAR v2; // ax
  WCHAR *v4; // rsi
  unsigned int v5; // edi
  WCHAR v6; // bx
  WCHAR v8; // bx

  v2 = *a1;
  v4 = a1;
  v5 = 0;
  while ( v2 || *a2 )
  {
    if ( v2 == 63 )
      goto LABEL_16;
    if ( v2 != 42 )
    {
      if ( v2 != *a2 )
      {
        v8 = RtlUpcaseUnicodeChar(*a2);
        if ( RtlUpcaseUnicodeChar(*v4) != v8 )
          return v5;
      }
LABEL_16:
      ++v4;
      goto LABEL_17;
    }
    v2 = v4[1];
    if ( v2 == 42 )
    {
      ++v4;
    }
    else
    {
      if ( !v2 )
        return 1;
      if ( v2 == *a2 || (v6 = RtlUpcaseUnicodeChar(v2), v6 == RtlUpcaseUnicodeChar(*a2)) )
      {
        if ( (unsigned int)AslStringPatternMatchExW(v4 + 1, a2) )
          return 1;
      }
LABEL_17:
      if ( !*a2 )
        return v5;
      v2 = *v4;
      ++a2;
    }
  }
  return 1;
}
