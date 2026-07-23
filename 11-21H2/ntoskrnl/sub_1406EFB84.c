/*
 * XREFs of sub_1406EFB84 @ 0x1406EFB84
 * Callers:
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406EFB1C @ 0x1406EFB1C (sub_1406EFB1C.c)
 *     sub_1408141A0 @ 0x1408141A0 (sub_1408141A0.c)
 *     sub_14081C500 @ 0x14081C500 (sub_14081C500.c)
 *     sub_1409E491C @ 0x1409E491C (sub_1409E491C.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall sub_1406EFB84(__int64 a1, __int16 a2)
{
  int v2; // eax
  unsigned __int16 v3; // r8
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0;
  if ( v2 < 0 )
  {
    v5 = a1 + (unsigned __int16)v2;
    v6 = (unsigned __int16 *)(v5 + 4);
    while ( v3 < *(_WORD *)(v5 + 2) )
    {
      if ( v6[1] == a2 )
        return v6;
      ++v3;
      v6 += 2 * *v6;
    }
  }
  return 0LL;
}
