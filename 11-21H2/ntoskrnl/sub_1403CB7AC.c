/*
 * XREFs of sub_1403CB7AC @ 0x1403CB7AC
 * Callers:
 *     sub_1403CB720 @ 0x1403CB720 (sub_1403CB720.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403CB7AC(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
