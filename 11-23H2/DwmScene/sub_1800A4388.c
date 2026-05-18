/*
 * XREFs of sub_1800A4388 @ 0x1800A4388
 * Callers:
 *     sub_1800A4738 @ 0x1800A4738 (sub_1800A4738.c)
 * Callees:
 *     sub_18003ADB0 @ 0x18003ADB0 (sub_18003ADB0.c)
 *     sub_1800A4164 @ 0x1800A4164 (sub_1800A4164.c)
 *     sub_1800A4554 @ 0x1800A4554 (sub_1800A4554.c)
 */

unsigned __int64 *__fastcall sub_1800A4388(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 v9; // r11
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 *result; // rax

  v6 = a2 + 16 * ((__int64)(a3 - a2) >> 5);
  sub_1800A4164(a2, v6, a3 - 16);
  v8 = v6 + 16;
  if ( a2 < v6 )
  {
    do
    {
      if ( (unsigned __int8)sub_1800A4554(v7, v6 - 16, v6) )
        break;
      if ( (unsigned __int8)sub_1800A4554(v7, v6, v9) )
        break;
      v6 = v10;
    }
    while ( a2 < v10 );
  }
  while ( v8 < a3 && !(unsigned __int8)sub_1800A4554(v7, v8, v6) && !(unsigned __int8)sub_1800A4554(v7, v6, v8) )
    v8 += 16LL;
  v11 = v8;
  v12 = v6;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( (unsigned __int8)sub_1800A4554(v7, v6, v11) )
        goto LABEL_17;
      if ( (unsigned __int8)sub_1800A4554(v7, v11, v6) )
        break;
      if ( v8 != v11 )
        sub_18003ADB0();
      v8 += 16LL;
LABEL_17:
      v11 += 16LL;
    }
    if ( a2 < v12 )
    {
      v13 = v12 - 16;
      do
      {
        if ( !(unsigned __int8)sub_1800A4554(v7, v13, v6) )
        {
          if ( (unsigned __int8)sub_1800A4554(v7, v6, v13) )
            break;
          v6 -= 16LL;
          if ( v6 != v13 )
            sub_18003ADB0();
        }
        v12 -= 16LL;
        v13 -= 16LL;
      }
      while ( a2 < v12 );
    }
    if ( v12 == a2 )
      break;
    v12 -= 16LL;
    if ( v11 == a3 )
    {
      v6 -= 16LL;
      if ( v12 != v6 )
        sub_18003ADB0();
    }
LABEL_33:
    sub_18003ADB0();
  }
  if ( v11 != a3 )
  {
    if ( v8 != v11 )
      sub_18003ADB0();
    v6 += 16LL;
    goto LABEL_33;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
