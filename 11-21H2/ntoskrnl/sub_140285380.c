/*
 * XREFs of sub_140285380 @ 0x140285380
 * Callers:
 *     sub_140268BEC @ 0x140268BEC (sub_140268BEC.c)
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_140282764 @ 0x140282764 (sub_140282764.c)
 *     sub_140282D10 @ 0x140282D10 (sub_140282D10.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_140284860 @ 0x140284860 (sub_140284860.c)
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 *     sub_140284C74 @ 0x140284C74 (sub_140284C74.c)
 *     sub_140284D20 @ 0x140284D20 (sub_140284D20.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 *     sub_14037E554 @ 0x14037E554 (sub_14037E554.c)
 *     sub_1403868E8 @ 0x1403868E8 (sub_1403868E8.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_1405B379C @ 0x1405B379C (sub_1405B379C.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140285380(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // r9
  unsigned __int16 **i; // rcx
  unsigned __int16 *v6; // r10
  unsigned int v7; // r11d

  v2 = *(_QWORD *)(a1 + 16896);
  if ( v2 < a2 )
  {
    v4 = 0LL;
    for ( i = (unsigned __int16 **)(a1 + 6616); ; ++i )
    {
      v6 = *i;
      v7 = 0;
      if ( dword_140C5073C )
        break;
LABEL_7:
      if ( ++v4 > 1 )
        return 0LL;
    }
    while ( 1 )
    {
      v2 += *v6;
      if ( v2 >= a2 )
        break;
      ++v7;
      v6 += 8;
      if ( v7 >= dword_140C5073C )
        goto LABEL_7;
    }
  }
  return 1LL;
}
