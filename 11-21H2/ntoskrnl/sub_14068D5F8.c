/*
 * XREFs of sub_14068D5F8 @ 0x14068D5F8
 * Callers:
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 * Callees:
 *     sub_14091191C @ 0x14091191C (sub_14091191C.c)
 */

void __fastcall sub_14068D5F8(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx

  if ( a1 == qword_140C02770 && qword_140C54CB0 )
  {
    v4 = a2 + 4096;
    v6 = 100 * (a2 + 4096) % dword_140C54CC8;
    v5 = 100 * v4 / dword_140C54CC8;
    if ( a2 <= a3 )
    {
      if ( !byte_140C54CAD && v5 < dword_140C54CC4 )
      {
        byte_140C54CAD = 1;
        if ( byte_140C54CAC == 1 )
        {
          if ( (unsigned __int8)sub_14091191C(v5, v6) != 1 )
            goto LABEL_9;
LABEL_14:
          byte_140C54CAC = 0;
        }
      }
    }
    else if ( v5 > dword_140C54CC0 && !byte_140C54CAC )
    {
      byte_140C54CAC = 1;
      if ( byte_140C54CAD == 1 )
      {
        if ( (unsigned __int8)sub_14091191C(v5, v6) == 1 )
        {
LABEL_9:
          byte_140C54CAD = 0;
          return;
        }
        goto LABEL_14;
      }
    }
  }
}
