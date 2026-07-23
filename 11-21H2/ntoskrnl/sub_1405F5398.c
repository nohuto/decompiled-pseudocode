/*
 * XREFs of sub_1405F5398 @ 0x1405F5398
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_1405F5398(int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r10d
  int v4; // eax

  v3 = 0;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    return (unsigned int)-1073741790;
  }
  else if ( a2 >= 4 )
  {
    *a1 = 0;
    v4 = 0;
    if ( byte_140C5AEB2 )
    {
      v4 = 1;
      *a1 = 1;
    }
    if ( dword_140C46BF8 > 2 )
      *a1 = v4 | 2;
  }
  else
  {
    if ( a3 )
      *a3 = 4;
    return (unsigned int)-1073741820;
  }
  return v3;
}
