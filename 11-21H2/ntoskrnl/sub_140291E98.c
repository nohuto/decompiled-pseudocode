/*
 * XREFs of sub_140291E98 @ 0x140291E98
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_140291C10 @ 0x140291C10 (sub_140291C10.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1403424A0 @ 0x1403424A0 (sub_1403424A0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140291E98(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1 )
    return 1;
  return result;
}
