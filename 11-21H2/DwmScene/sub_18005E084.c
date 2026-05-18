/*
 * XREFs of sub_18005E084 @ 0x18005E084
 * Callers:
 *     sub_1800280E8 @ 0x1800280E8 (sub_1800280E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 */

__int64 __fastcall sub_18005E084(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // r8d
  int *v11; // r10
  unsigned int v12; // r9d
  int v13; // r11d
  _BYTE v15[1024]; // [rsp+50h] [rbp-418h] BYREF

  if ( a2 == 1 )
  {
    v7 = -8355712;
    v8 = 25132927;
    goto LABEL_15;
  }
  if ( a2 == 2 )
  {
    v7 = -16777216;
    v8 = 0x1FFFFFF;
LABEL_15:
    v9 = v8 | 0xFF000000;
    goto LABEL_16;
  }
  if ( a2 > 2 )
  {
    if ( a2 <= 4 )
    {
      v7 = -65305;
      goto LABEL_9;
    }
    if ( a2 == 5 )
    {
      v7 = -8421377;
      v9 = -7372801;
      goto LABEL_16;
    }
  }
  v7 = -1;
LABEL_9:
  v8 = 0xFFFFFF - v7;
  if ( a2 != 4 )
    goto LABEL_15;
  v9 = v8 | 0xFFFFFF;
LABEL_16:
  v10 = 0;
  v11 = (int *)v15;
  do
  {
    v12 = (v10 & 0xF) + 1;
    v13 = v7;
    if ( (v10 >> 4) + 1 <= 8 )
    {
      if ( v12 <= 8 )
        goto LABEL_22;
LABEL_21:
      v13 = v9;
      goto LABEL_22;
    }
    if ( v12 <= 8 )
      goto LABEL_21;
LABEL_22:
    *v11 = v13;
    ++v10;
    ++v11;
  }
  while ( v10 < 0x100 );
  return sub_18005D70C(a1, 16, 16, 0, 16, 0, 1, (__int64)v15, 0x400u, a4);
}
