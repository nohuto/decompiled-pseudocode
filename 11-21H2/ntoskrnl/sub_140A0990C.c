/*
 * XREFs of sub_140A0990C @ 0x140A0990C
 * Callers:
 *     sub_140646AB8 @ 0x140646AB8 (sub_140646AB8.c)
 * Callees:
 *     sub_140A09950 @ 0x140A09950 (sub_140A09950.c)
 */

__int64 __fastcall sub_140A0990C(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // r9d
  int v6; // r9d
  __int64 v7; // r10

  if ( a2 < 0x44 )
    return 3221225507LL;
  *a1 = 17;
  v5 = 0;
  do
  {
    result = sub_140A09950(v5, a3);
    if ( (int)result < 0 )
      break;
    v5 = v6 + 1;
    a3 = v7 + 4;
  }
  while ( v5 < 0x11 );
  return result;
}
