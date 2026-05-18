/*
 * XREFs of sub_180032908 @ 0x180032908
 * Callers:
 *     sub_180032E10 @ 0x180032E10 (sub_180032E10.c)
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030F38 @ 0x180030F38 (sub_180030F38.c)
 */

__int64 __fastcall sub_180032908(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdx

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180030F38((__int64)a1, (__int64)a1, (char *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      v5 = v4[9];
      if ( v5 >= 0x10 )
        sub_180010884((char *)v4[6], v5 + 1);
      v4[8] = 0LL;
      v4[9] = 15LL;
      *((_BYTE *)v4 + 48) = 0;
      sub_180010884((char *)v4, 0xA8uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0xA8uLL);
}
