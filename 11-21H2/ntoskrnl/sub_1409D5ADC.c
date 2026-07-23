/*
 * XREFs of sub_1409D5ADC @ 0x1409D5ADC
 * Callers:
 *     sub_1409D3EC0 @ 0x1409D3EC0 (sub_1409D3EC0.c)
 * Callees:
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 */

__int64 __fastcall sub_1409D5ADC(__int64 a1)
{
  unsigned int i; // r9d
  __int64 v3; // rax
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11

  for ( i = 0; i < 0x20; i = v4 + 1 )
  {
    v3 = sub_14035F5E8(a1, i);
    if ( v3 && *(_QWORD *)v3 )
    {
      *(_DWORD *)(v6 + 4 * v5 + 4) = v4 | ((*(_WORD *)(v3 + 32) & 0x3F) << 10);
      LOBYTE(v5) = v5 + 1;
    }
  }
  *(_BYTE *)(v6 + 1) = v5;
  return 0LL;
}
