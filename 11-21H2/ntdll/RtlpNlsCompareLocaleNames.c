/*
 * XREFs of RtlpNlsCompareLocaleNames @ 0x18004C1D8
 * Callers:
 *     RtlpNlsGetNameIndex @ 0x18004C138 (RtlpNlsGetNameIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsCompareLocaleNames(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r8
  unsigned int v5; // r8d

  v2 = *a1;
  if ( *a1 )
  {
    while ( *a2 )
    {
      v3 = v2 | 0x20;
      if ( (unsigned __int16)(v2 - 65) > 0x19u )
        v3 = v2;
      v4 = *a2 | 0x20;
      if ( (unsigned __int16)(*a2 - 65) > 0x19u )
        v4 = *a2;
      if ( v3 == 95 )
        v3 = 45;
      if ( v4 == 95 )
        v4 = 45;
      v5 = v3 - v4;
      if ( v5 )
        return v5;
      ++a1;
      ++a2;
      v2 = *a1;
      if ( !*a1 )
        break;
    }
  }
  if ( *a1 || *a2 )
    return *a1 != 0 ? 1 : -1;
  else
    return 0LL;
}
