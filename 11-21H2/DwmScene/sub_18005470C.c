/*
 * XREFs of sub_18005470C @ 0x18005470C
 * Callers:
 *     sub_18005508C @ 0x18005508C (sub_18005508C.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_180067A4C @ 0x180067A4C (sub_180067A4C.c)
 *     sub_180067BFC @ 0x180067BFC (sub_180067BFC.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_180088448 @ 0x180088448 (sub_180088448.c)
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_180095A64 @ 0x180095A64 (sub_180095A64.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800548F0 @ 0x1800548F0 (sub_1800548F0.c)
 */

__int64 __fastcall sub_18005470C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_1800548F0(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      v7 = v6[7];
      if ( v7 >= 0x10 )
        sub_180010884((char *)v6[4], v7 + 1);
      v6[6] = 0LL;
      v6[7] = 15LL;
      *((_BYTE *)v6 + 32) = 0;
      sub_180010884((char *)v6, 0x40uLL);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return sub_180010884((char *)v4, 0x40uLL);
}
