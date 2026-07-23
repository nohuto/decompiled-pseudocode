/*
 * XREFs of sub_1405A473C @ 0x1405A473C
 * Callers:
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     sub_1405A4C68 @ 0x1405A4C68 (sub_1405A4C68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405A473C(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  if ( a1 + a2 <= a1 )
    return 0LL;
  v2 = a1 + a2 - 1;
  if ( qword_140C09808 )
  {
    if ( (v2 & 0xFFFFFFFFFFFFF000uLL) > qword_140C09808 )
      return 0LL;
  }
  result = 1LL;
  if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 1 && v2 >= 0xFD00000000LL && a1 <= 0xFFFFFFFFFFLL )
    return 0LL;
  return result;
}
