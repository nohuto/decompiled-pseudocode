/*
 * XREFs of sub_14023608C @ 0x14023608C
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 * Callees:
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 */

__int64 __fastcall sub_14023608C(__int64 *a1, char a2)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  char v7; // al
  unsigned __int8 v8; // si
  unsigned int v9; // eax
  int v10; // ecx
  __int64 v11; // rax

  v3 = *a1;
  if ( qword_140C50780 && (v3 & 0x10) == 0 )
    v3 &= ~qword_140C50780;
  v5 = (v3 >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  if ( (*(_BYTE *)(v6 + 35) & 0x10) != 0 )
    return 3LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( (sub_140326870(48 * v5 - 0x220000000000LL) & 3) != 0 )
  {
    sub_1403941B0(48 * v5 - 0x220000000000LL, 0LL);
    return 1LL;
  }
  else
  {
    v7 = *(_BYTE *)(v6 + 34);
    ++*(_WORD *)(v6 + 32);
    *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 6;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL | 1;
    if ( (a2 & 2) != 0 && (unsigned int)sub_140273234(48 * v5 - 0x220000000000LL) > 2 )
      *(_BYTE *)(v6 + 35) = *(_BYTE *)(v6 + 35) & 0xF8 | 2;
    v8 = *(_BYTE *)(v6 + 34);
    v9 = (*(_DWORD *)(v6 + 16) >> 5) & 7;
    v10 = v8 >> 6;
    if ( v10 )
    {
      if ( v10 == 2 )
        v9 |= 0x18u;
    }
    else
    {
      v9 |= 8u;
    }
    v11 = sub_1402CBD10(0LL, v5, v9);
    if ( (a2 & 4) == 0 || !_bittest64((const signed __int64 *)(v6 + 40), 0x35u) )
    {
      *(_BYTE *)(v6 + 34) = v8 | 0x10;
      v11 |= 0x42uLL;
    }
    *a1 = v11;
    return 0LL;
  }
}
