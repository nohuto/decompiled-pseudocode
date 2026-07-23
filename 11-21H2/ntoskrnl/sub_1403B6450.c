/*
 * XREFs of sub_1403B6450 @ 0x1403B6450
 * Callers:
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403B6450()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = qword_140C4BCE0;
  byte_140C4BE80 = 1;
  while ( (__int64 *)v0 != &qword_140C4BCE0 )
  {
    result = *(_DWORD *)(v0 + 472) & 0x900;
    if ( (_DWORD)result == 256 )
    {
      byte_140C4BE80 = 0;
      return result;
    }
    v0 = *(_QWORD *)v0;
  }
  return result;
}
