/*
 * XREFs of RtlpNlsCompareLocaleNames @ 0x1800158C0
 * Callers:
 *     RtlpNlsGetNameIndex @ 0x180015820 (RtlpNlsGetNameIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsCompareLocaleNames(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // r9
  unsigned int v4; // r9d

  v2 = *a1;
  if ( *a1 )
  {
    while ( *a2 )
    {
      if ( (unsigned __int16)(v2 - 65) <= 0x19u )
        v2 |= 0x20u;
      v3 = *a2 | 0x20;
      if ( (unsigned __int16)(*a2 - 65) > 0x19u )
        v3 = *a2;
      if ( v2 == 95 )
        v2 = 45;
      if ( v3 == 95 )
        v3 = 45;
      v4 = v2 - v3;
      if ( v4 )
        return v4;
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
