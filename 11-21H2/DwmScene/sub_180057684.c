/*
 * XREFs of sub_180057684 @ 0x180057684
 * Callers:
 *     sub_180019590 @ 0x180019590 (sub_180019590.c)
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_1800727B4 @ 0x1800727B4 (sub_1800727B4.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_1800A6640 @ 0x1800A6640 (sub_1800A6640.c)
 *     sub_1800ADC04 @ 0x1800ADC04 (sub_1800ADC04.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 *     sub_18005561C @ 0x18005561C (sub_18005561C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180057684(__int64 a1, _QWORD *a2, char **a3)
{
  __int64 *v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *result; // rax

  v5 = (__int64 *)(a1 + 18560);
  v6 = *(_QWORD *)(a1 + 18560);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v6;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    do
    {
      if ( (unsigned __int8)sub_18001DE04((_QWORD *)(v7 + 32), a3) )
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
      else
      {
        v6 = v7;
        v7 = *(_QWORD *)v7;
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
    v8 = *v5;
  }
  if ( *(_BYTE *)(v6 + 25) || (unsigned __int8)sub_18001DE04(a3, (_QWORD *)(v6 + 32)) || v6 == v8 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v9 = (_QWORD *)sub_18005561C(v5, a3);
    *a2 = 0LL;
    a2[1] = 0LL;
    v10 = v9[1];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *a2 = *v9;
    a2[1] = v9[1];
  }
  v11 = (unsigned __int64)a3[3];
  if ( v11 >= 0x10 )
    sub_180010884(*a3, v11 + 1);
  a3[2] = 0LL;
  a3[3] = (char *)15;
  result = a2;
  *(_BYTE *)a3 = 0;
  return result;
}
