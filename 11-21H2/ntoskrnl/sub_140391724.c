/*
 * XREFs of sub_140391724 @ 0x140391724
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     sub_14050D564 @ 0x14050D564 (sub_14050D564.c)
 */

__int64 sub_140391724()
{
  __int64 result; // rax

  result = qword_140C4E4B0;
  if ( *(_DWORD *)(qword_140C4E4B0 + 228) == 12 )
    return sub_14050D564();
  return result;
}
