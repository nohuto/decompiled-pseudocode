/*
 * XREFs of sub_1409AD258 @ 0x1409AD258
 * Callers:
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 * Callees:
 *     sub_1409E67F0 @ 0x1409E67F0 (sub_1409E67F0.c)
 */

__int64 __fastcall sub_1409AD258(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int64 a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // ebx

  v4 = *(_DWORD *)(a1 + 2172);
  if ( (v4 & 0x1000) != 0 || (v4 & 1) != 0 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 2516);
  v6 = v5 & 0x800000;
  if ( (v5 & 0x400000) != 0 )
  {
    if ( a2 && a3 )
      return 0LL;
    sub_1409E67F0(2 - (v6 != 0), a1, a2, a3, a4, 1);
  }
  else
  {
    if ( (v5 & 0x200000) == 0 || a2 )
      return 0LL;
    sub_1409E67F0(2 - (v6 != 0), a1, 0, a3, a4, 0);
  }
  if ( !v6 )
    return 3221225506LL;
  return 0LL;
}
