/*
 * XREFs of sub_140591E04 @ 0x140591E04
 * Callers:
 *     sub_140276C78 @ 0x140276C78 (sub_140276C78.c)
 *     sub_140334830 @ 0x140334830 (sub_140334830.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 * Callees:
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033C3A0 @ 0x14033C3A0 (sub_14033C3A0.c)
 */

__int64 __fastcall sub_140591E04(_BYTE *a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rcx
  unsigned int v5; // r10d

  if ( *a1 )
    sub_14033C2A0(a2);
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) )
  {
    v3 = *(_BYTE *)(a2 + 34);
    if ( (v3 & 0x10) != 0 )
    {
      if ( byte_140C5072C )
        *(_BYTE *)(a2 + 34) = v3 & 0xEF;
    }
  }
  v4 = *(_QWORD *)(a2 + 24);
  if ( (v4 & 0x4000000000000000LL) != 0
    || (*(_BYTE *)(a2 + 35) & 0x50) != 0
    || (v4 & 0x3FFFFFFFFFFFFFFFLL) != 1
    || *(_WORD *)(a2 + 32) != 1 )
  {
    return 2LL;
  }
  *(_WORD *)(a2 + 32) = 0;
  *(_QWORD *)(a2 + 24) = v4 & 0xC000000000000000uLL;
  sub_14033C3A0((unsigned __int64 *)(a2 + 16), 0);
  return v5;
}
