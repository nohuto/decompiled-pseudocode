/*
 * XREFs of sub_180030B98 @ 0x180030B98
 * Callers:
 *     sub_180032C2C @ 0x180032C2C (sub_180032C2C.c)
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 *     sub_180087F80 @ 0x180087F80 (sub_180087F80.c)
 *     sub_180088050 @ 0x180088050 (sub_180088050.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030C38 @ 0x180030C38 (sub_180030C38.c)
 */

__int64 __fastcall sub_180030B98(__int64 *a1, __int64 a2)
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
      sub_180030C38(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      v7 = v6[7];
      if ( v7 >= 0x10 )
        sub_180010884((char *)v6[4], v7 + 1);
      v6[6] = 0LL;
      v6[7] = 15LL;
      *((_BYTE *)v6 + 32) = 0;
      sub_180010884((char *)v6, 0x60uLL);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return sub_180010884((char *)v4, 0x60uLL);
}
