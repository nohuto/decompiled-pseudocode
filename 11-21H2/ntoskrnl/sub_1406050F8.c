/*
 * XREFs of sub_1406050F8 @ 0x1406050F8
 * Callers:
 *     sub_140602C9C @ 0x140602C9C (sub_140602C9C.c)
 *     sub_140605078 @ 0x140605078 (sub_140605078.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406050F8(_WORD *a1, _WORD *a2, unsigned __int64 a3)
{
  unsigned int v3; // r9d
  _WORD *v4; // rdi
  unsigned __int64 i; // rcx

  v3 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      do
      {
        --a3;
        *a1++ = *a2;
        if ( !*a2 )
          break;
        ++a2;
      }
      while ( a3 > 1 );
      if ( a3 )
      {
        v4 = a1;
        for ( i = a3; i; --i )
          *v4++ = 0;
      }
    }
    else
    {
      *a1 = 0;
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v3;
}
