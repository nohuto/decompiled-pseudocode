/*
 * XREFs of sub_1409581A0 @ 0x1409581A0
 * Callers:
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 * Callees:
 *     sub_1407667B0 @ 0x1407667B0 (sub_1407667B0.c)
 *     sub_140767E88 @ 0x140767E88 (sub_140767E88.c)
 *     sub_140775110 @ 0x140775110 (sub_140775110.c)
 *     sub_140942730 @ 0x140942730 (sub_140942730.c)
 */

char __fastcall sub_1409581A0(unsigned int **a1, unsigned int **a2)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  __int64 v6; // r11
  __int64 *v7; // rbx
  __int64 v8; // r11
  __int64 *v9; // r11
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
LABEL_2:
  while ( sub_1407667B0(a1, &v13, &v11, 0LL, 0LL) )
  {
    if ( sub_140767E88(*a2, v11, 0LL) )
      return 1;
    v5 = *(_QWORD *)(v4 + 16);
    if ( !v5 )
      v5 = *(_QWORD *)(v4 + 648) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( sub_140767E88(*a2, *(_QWORD *)(v5 + 32), 0LL) )
      return 1;
    v7 = sub_140775110(*(_QWORD *)(v6 + 32));
    v8 = *v7;
    if ( (__int64 *)*v7 != v7 )
    {
      while ( 1 )
      {
        sub_140942730(v8);
        v8 = *v9;
        if ( v12 )
        {
          if ( sub_140767E88(*a2, v12, 0LL) )
            return 1;
        }
        if ( (__int64 *)v8 == v7 )
          goto LABEL_2;
      }
    }
  }
  return 0;
}
