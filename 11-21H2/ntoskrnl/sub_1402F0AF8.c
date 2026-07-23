/*
 * XREFs of sub_1402F0AF8 @ 0x1402F0AF8
 * Callers:
 *     sub_140217A2C @ 0x140217A2C (sub_140217A2C.c)
 *     sub_1402F0D90 @ 0x1402F0D90 (sub_1402F0D90.c)
 *     sub_140565F08 @ 0x140565F08 (sub_140565F08.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402F0AF8(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_BYTE *)a1 & 7) == 1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  else if ( (*(_BYTE *)a1 & 0x7F) == 5 )
  {
    --*(_DWORD *)(a1 + 4);
  }
  else
  {
    return 0;
  }
  return v1;
}
