/*
 * XREFs of sub_140519E64 @ 0x140519E64
 * Callers:
 *     sub_140845F30 @ 0x140845F30 (sub_140845F30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140519E64(unsigned int a1)
{
  __int64 result; // rax

  for ( result = qword_140C4BC90; (__int64 *)result != &qword_140C4BC90; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 36) <= a1 && *(_DWORD *)(result + 40) >= a1 )
      return result;
  }
  return 0LL;
}
