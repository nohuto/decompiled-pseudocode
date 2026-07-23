/*
 * XREFs of sub_140246BC8 @ 0x140246BC8
 * Callers:
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140246BC8(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !result )
    return 0LL;
  while ( *(_DWORD *)(result + 64) != 2 )
  {
    result = *(_QWORD *)result;
    if ( !result )
      return 0LL;
  }
  if ( (*(_DWORD *)(result + 8) & 0x20) == 0 )
    return 0LL;
  return result;
}
