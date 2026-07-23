/*
 * XREFs of sub_1409E2D4C @ 0x1409E2D4C
 * Callers:
 *     sub_140700280 @ 0x140700280 (sub_140700280.c)
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E2D4C(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r10d
  __int16 v6; // ax
  unsigned int v7; // r8d
  unsigned __int16 v8; // dx
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+44h] [rbp-24h]
  _QWORD *v12; // [rsp+48h] [rbp-20h] BYREF
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  v5 = a3;
  if ( a3 <= 0 )
  {
    if ( !a3 )
    {
      v6 = 848;
      v7 = -2147483136;
      goto LABEL_7;
    }
    v6 = 832;
  }
  else
  {
    v6 = 816;
  }
  v7 = -2147475456;
LABEL_7:
  v8 = v6 + a2;
  v9[0] = a1;
  v9[1] = a5;
  v11 = v5;
  if ( a4 )
    v10 = *(_DWORD *)(a4 + 1088);
  else
    v10 = -1;
  v14 = 0;
  v12 = v9;
  v13 = 24;
  sub_14035EDE4((__int64)&v12, 1u, v7, v8, 0x501902u);
}
