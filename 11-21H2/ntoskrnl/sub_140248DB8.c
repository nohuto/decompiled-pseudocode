/*
 * XREFs of sub_140248DB8 @ 0x140248DB8
 * Callers:
 *     sub_140293320 @ 0x140293320 (sub_140293320.c)
 * Callees:
 *     <none>
 */

char sub_140248DB8()
{
  char v0; // r9
  unsigned __int16 i; // dx
  unsigned int v2; // r8d
  _BYTE *v3; // rcx

  v0 = 1;
  for ( i = 0; i < (unsigned int)dword_140C1CF34; ++i )
  {
    v2 = 0;
    v3 = (_BYTE *)(qword_140C1CF38 + 336LL * i + 130);
    while ( v3[13] <= *v3 )
    {
      ++v2;
      ++v3;
      if ( v2 >= 2 )
        goto LABEL_5;
    }
    v0 = 0;
LABEL_5:
    ;
  }
  return v0;
}
