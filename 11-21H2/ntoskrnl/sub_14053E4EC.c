/*
 * XREFs of sub_14053E4EC @ 0x14053E4EC
 * Callers:
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14053E4EC(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v5[3]; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v7 = 0;
  if ( a1 )
    v5[0] = *(_QWORD *)(a1 + 24);
  else
    v5[0] = 0LL;
  v6 = a2;
  v5[1] = a3;
  v5[2] = a4;
  v4[0] = v5;
  v4[1] = 32LL;
  sub_14035EDE4((__int64)v4, 1u, 0x80020000, 0x1606u, 0x401902u);
}
