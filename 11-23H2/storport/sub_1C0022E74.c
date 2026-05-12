/*
 * XREFs of sub_1C0022E74 @ 0x1C0022E74
 * Callers:
 *     sub_1C00011C0 @ 0x1C00011C0 (sub_1C00011C0.c)
 *     sub_1C00013E0 @ 0x1C00013E0 (sub_1C00013E0.c)
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0022E74(__int64 a1, int a2)
{
  int v2; // r8d
  char result; // al

  v2 = *(_DWORD *)(a1 + 304);
  result = 0;
  if ( v2 )
  {
    if ( a2 < v2 )
      return *(_BYTE *)(a2 + a1 + 308);
  }
  return result;
}
