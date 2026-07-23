/*
 * XREFs of sub_1402D5AFC @ 0x1402D5AFC
 * Callers:
 *     sub_1402D5A78 @ 0x1402D5A78 (sub_1402D5A78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402D5AFC(char a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  if ( a1 )
    return (unsigned int)dword_140C44940;
  v2 = 0;
  if ( !(_BYTE)dword_140D051DC && (byte_140C54E99 || byte_140C54E98) )
    v2 = 1;
  if ( dword_140C44938 && (dword_140C44938 == 1 || v2) )
    return (unsigned int)dword_140C4493C;
  return result;
}
