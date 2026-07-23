/*
 * XREFs of sub_1409B8B20 @ 0x1409B8B20
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     sub_1409B8A0C @ 0x1409B8A0C (sub_1409B8A0C.c)
 */

char __fastcall sub_1409B8B20(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int v3; // edi

  if ( a1 && *(_WORD *)a1 == 1 && !*(_WORD *)(a1 + 2) && *(_DWORD *)(a1 + 4) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = 0;
    while ( sub_1409B8A0C(v2) )
    {
      ++v3;
      v2 += 32LL;
      if ( v3 >= *(_DWORD *)(a1 + 4) )
        return 1;
    }
  }
  return 0;
}
