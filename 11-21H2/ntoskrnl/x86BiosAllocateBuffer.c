/*
 * XREFs of x86BiosAllocateBuffer @ 0x1403DA380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall x86BiosAllocateBuffer(int *a1, _WORD *a2, _WORD *a3)
{
  int v3; // eax

  if ( byte_140C4E841 != 1 )
    return 3221225626LL;
  if ( byte_140C54B6C )
    return 3221225626LL;
  v3 = dword_140C54B68;
  if ( *a1 > (unsigned int)dword_140C54B68 )
    return 3221225626LL;
  byte_140C54B6C = 1;
  *a2 = 0x2000;
  *a3 = 0;
  *a1 = v3;
  return 0LL;
}
