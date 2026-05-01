/*
 * XREFs of sub_180007688 @ 0x180007688
 * Callers:
 *     sub_1800074A8 @ 0x1800074A8 (sub_1800074A8.c)
 * Callees:
 *     sub_180007700 @ 0x180007700 (sub_180007700.c)
 */

__int64 __fastcall sub_180007688(_WORD *a1)
{
  _WORD *v1; // rax
  __int64 v2; // r8
  __int64 result; // rax

  v1 = a1;
  v2 = 254LL;
  do
  {
    if ( !*v1 )
      break;
    ++v1;
    --v2;
  }
  while ( v2 );
  result = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
    return sub_180007700(
             (char *)a1 + ((2 * (254 - v2)) & -(__int64)(v2 != 0)),
             ((v2 - 254) & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64)) + 254,
             -v2);
  return result;
}
