/*
 * XREFs of sub_180007050 @ 0x180007050
 * Callers:
 *     sub_1800172A0 @ 0x1800172A0 (sub_1800172A0.c)
 *     sub_1800172C0 @ 0x1800172C0 (sub_1800172C0.c)
 *     sub_1800172E0 @ 0x1800172E0 (sub_1800172E0.c)
 * Callees:
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 */

__int64 __fastcall sub_180007050(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 40);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return sub_180008980(2 * v1 + 16);
}
