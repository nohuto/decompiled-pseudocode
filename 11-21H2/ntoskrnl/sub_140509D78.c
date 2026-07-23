/*
 * XREFs of sub_140509D78 @ 0x140509D78
 * Callers:
 *     sub_140506CA4 @ 0x140506CA4 (sub_140506CA4.c)
 * Callees:
 *     sub_1403AAD30 @ 0x1403AAD30 (sub_1403AAD30.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140509D78(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  LOBYTE(v4) = sub_1403AAE50();
  if ( (_BYTE)v4 == 1 )
  {
    if ( byte_140D016E8 )
    {
      v4 = sub_1403AAD30(a1, a2);
      if ( (v4 & 0x100000000000LL) != 0 )
      {
        v5 = (unsigned int)(16 * a2 - 1073733624);
LABEL_8:
        LOBYTE(v4) = sub_14042A5E0(a1, v5);
      }
    }
  }
  else if ( (_BYTE)v4 == 2 )
  {
    v4 = sub_14042A5E0(a1, 377LL);
    if ( (v4 & 0xFF0000) != 0 )
    {
      v5 = 392LL;
      goto LABEL_8;
    }
  }
  return v4;
}
