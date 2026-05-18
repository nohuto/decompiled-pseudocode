/*
 * XREFs of sub_18001E758 @ 0x18001E758
 * Callers:
 *     sub_180032C20 @ 0x180032C20 (sub_180032C20.c)
 *     sub_18003A0F4 @ 0x18003A0F4 (sub_18003A0F4.c)
 *     sub_18003A638 @ 0x18003A638 (sub_18003A638.c)
 *     sub_180100806 @ 0x180100806 (sub_180100806.c)
 *     sub_18010DA20 @ 0x18010DA20 (sub_18010DA20.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 */

__int64 __fastcall sub_18001E758(__int64 *a1)
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
      sub_18001E104((__int64)a1, (__int64)a1, (char *)v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      v5 = v4[7];
      if ( v5 >= 0x10 )
        sub_180010884((char *)v4[4], v5 + 1);
      v4[6] = 0LL;
      v4[7] = 15LL;
      *((_BYTE *)v4 + 32) = 0;
      sub_180010884((char *)v4, 0x48uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return sub_180010884((char *)v2, 0x48uLL);
}
