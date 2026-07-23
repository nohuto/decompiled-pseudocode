/*
 * XREFs of sub_1407F8914 @ 0x1407F8914
 * Callers:
 *     sub_1407F88C0 @ 0x1407F88C0 (sub_1407F88C0.c)
 *     sub_1409E3B04 @ 0x1409E3B04 (sub_1409E3B04.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 *     sub_140B5197C @ 0x140B5197C (sub_140B5197C.c)
 * Callees:
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140577F38 @ 0x140577F38 (sub_140577F38.c)
 *     sub_1407F8854 @ 0x1407F8854 (sub_1407F8854.c)
 */

void __fastcall sub_1407F8914(int a1, int a2)
{
  int v2; // esi
  int v4; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp-20h] BYREF
  int v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+5Ch] [rbp-14h]

  v2 = 0;
  v6 = a1;
  v7 = 0LL;
  v4 = a1;
  if ( (WORD2(xmmword_140D06900[0]) & 0x402) != 0 )
    v2 = sub_1407F8854(a2);
  if ( !a2 )
  {
    if ( (qword_140D06AE0 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      sub_140577F38(&v6);
      v4 = v6;
    }
    goto LABEL_6;
  }
  if ( a2 != 1 )
  {
LABEL_6:
    v7 = __PAIR64__(v4, a2);
    sub_14035BB4C(dword_140D06E40, (__int64)sub_140377230, (__int64)&v7, 1);
    goto LABEL_7;
  }
  dword_140C2B898 = v4;
LABEL_7:
  if ( (WORD2(xmmword_140D06900[0]) & 0x402) != 0 )
  {
    v5 = sub_1407F8854(a2);
    if ( v5 != v2 )
    {
      v11 = 0;
      v8[1] = v5;
      v8[0] = a2;
      v9 = v8;
      v8[2] = v2;
      v10 = 12;
      sub_14035EDE4((__int64)&v9, 1u, 0x20000402u, 0xF48u, 0x401902u);
    }
  }
}
