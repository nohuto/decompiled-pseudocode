/*
 * XREFs of sub_1409120AC @ 0x1409120AC
 * Callers:
 *     sub_14090E5E0 @ 0x14090E5E0 (sub_14090E5E0.c)
 * Callees:
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 */

__int64 __fastcall sub_1409120AC(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx

  if ( a1 == qword_140D3CA28 )
    return 3221225485LL;
  if ( (a2 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 1544) || (*(_DWORD *)(a1 + 160) & 0x8003) != 0 )
    return 3221225485LL;
  if ( a2 != 3 )
    v3 = a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v3;
  sub_1406CA514(a1);
  return 0LL;
}
