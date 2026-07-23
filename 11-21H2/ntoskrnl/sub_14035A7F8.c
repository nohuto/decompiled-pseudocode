/*
 * XREFs of sub_14035A7F8 @ 0x14035A7F8
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14035A364 @ 0x14035A364 (sub_14035A364.c)
 *     sub_14035A6C8 @ 0x14035A6C8 (sub_14035A6C8.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14035A7F8(__int64 a1)
{
  char v1; // dl
  char v2; // cl
  char v3; // al
  unsigned int v5; // edx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 88) & 0x3FFFFFFF) != 0 )
  {
    _BitScanReverse(&v5, *(_DWORD *)(a1 + 88) & 0x3FFFFFFF);
    v1 = v5 + 1;
  }
  v2 = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1133);
  if ( v2 > v1 )
  {
    v3 = v2;
    if ( v2 > 30 )
      return 30;
    return v3;
  }
  return v1;
}
