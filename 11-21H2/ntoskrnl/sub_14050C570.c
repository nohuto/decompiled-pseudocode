/*
 * XREFs of sub_14050C570 @ 0x14050C570
 * Callers:
 *     sub_14050C47C @ 0x14050C47C (sub_14050C47C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14050C570(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( dword_140C4E844 == a2 )
    dword_140C4E844 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 252) == a2 )
    {
      *(_QWORD *)(a1 + 252) = 0LL;
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  return result;
}
