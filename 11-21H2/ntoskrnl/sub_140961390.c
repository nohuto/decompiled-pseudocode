/*
 * XREFs of sub_140961390 @ 0x140961390
 * Callers:
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 *     sub_14097F250 @ 0x14097F250 (sub_14097F250.c)
 * Callees:
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 */

void __fastcall sub_140961390(__int64 a1, int a2)
{
  signed __int32 v2; // r8d
  int v3; // edx
  signed __int32 v4; // eax

  v2 = *(_DWORD *)(a1 + 120);
  v3 = a2 << 18;
  if ( (v2 & 0xC0000) == 0 )
  {
    while ( 1 )
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 120), v3 | v2, v2);
      if ( v2 == v4 )
        break;
      v2 = v4;
      if ( (v4 & 0xC0000) != 0 )
        return;
    }
    sub_1402ECD10(a1);
  }
}
