/*
 * XREFs of sub_180002DF0 @ 0x180002DF0
 * Callers:
 *     sub_180017260 @ 0x180017260 (sub_180017260.c)
 *     sub_180017280 @ 0x180017280 (sub_180017280.c)
 * Callees:
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 */

__int64 __fastcall sub_180002DF0(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)sub_180008980(2 * v1 + 16);
}
