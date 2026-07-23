/*
 * XREFs of sub_140292A40 @ 0x140292A40
 * Callers:
 *     sub_140292A04 @ 0x140292A04 (sub_140292A04.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 */

__int64 __fastcall sub_140292A40(_WORD *a1)
{
  unsigned __int16 v3; // dx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // r10

  if ( (unsigned int)KeIsEqualAffinityEx(a1, &dword_140D06E40) )
    return 1LL;
  if ( (unsigned __int16)word_140D05000 > 1u )
  {
    v3 = 0;
    if ( !*a1 )
      return 1LL;
    while ( 1 )
    {
      v4 = *(_QWORD *)&a1[4 * v3 + 4];
      if ( v4 )
        break;
LABEL_9:
      if ( ++v3 >= *a1 )
        return 1LL;
    }
    while ( 1 )
    {
      _BitScanReverse64(&v5, v4);
      v6 = *(_QWORD *)(*(_QWORD *)(qword_140D088C0[dword_140D105E0[64 * v3 + (int)v5]] + 192) + 128LL);
      if ( (v4 & v6) != v6 )
        break;
      v4 &= ~v6;
      if ( !v4 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
