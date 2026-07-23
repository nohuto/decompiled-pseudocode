/*
 * XREFs of ValidateRegistrLangType @ 0x180114868
 * Callers:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180115204 (_RtlpMuiRegLoadInstalledFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateRegistrLangType(int a1)
{
  unsigned int v1; // edx
  int v2; // r8d
  _DWORD *i; // r9

  v1 = 0;
  if ( (a1 & 0x18) != 0 && (a1 & 7) != 0 )
  {
    v2 = 0;
    for ( i = &ulInvalidTypes; *i != (a1 & *i); ++i )
    {
      if ( ++v2 >= 8 )
      {
        if ( (a1 & 1) == 0 && (a1 & 2) == 0 || (a1 & 0x10) != 0 )
          return v1;
        return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)-1073741811;
}
