/*
 * XREFs of x86BiosFreeBuffer @ 0x1403DA3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall x86BiosFreeBuffer(unsigned __int16 a1, unsigned __int16 a2)
{
  if ( byte_140C4E841 != 1 || byte_140C54B6C != 1 || ((a2 + 16 * a1) & 0xFFFFF) != 0x20000 )
    return 3221225485LL;
  byte_140C54B6C = 0;
  return 0LL;
}
