/*
 * XREFs of sub_14050E3D0 @ 0x14050E3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050E3D0(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 result; // rax

  if ( (a1 & 0x100000000LL) != 0 )
  {
    result = a3;
    __writemsr(a2, a3);
  }
  else
  {
    result = qword_140C4C4E0;
    if ( qword_140C4C4E0 )
    {
      LODWORD(a1) = a1 & 0x7FFFFFFF;
      return sub_14042A5E0(a1, 1LL);
    }
  }
  return result;
}
