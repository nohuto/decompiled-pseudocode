/*
 * XREFs of sub_140373DA0 @ 0x140373DA0
 * Callers:
 *     sub_1407F5540 @ 0x1407F5540 (sub_1407F5540.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     sub_1403747BC @ 0x1403747BC (sub_1403747BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140373DA0(__int64 a1)
{
  _DWORD *v1; // r10
  __int64 v2; // r9
  char v3; // al
  ULONG v4; // r9d
  int v5; // r11d
  __int64 v6; // r8
  __int64 v7; // r10
  int v8; // [rsp+20h] [rbp-59h]
  int v9; // [rsp+28h] [rbp-51h]
  char v10; // [rsp+40h] [rbp-39h] BYREF
  int v11; // [rsp+44h] [rbp-35h] BYREF
  const CHAR *v12; // [rsp+48h] [rbp-31h] BYREF
  int v13; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-19h] BYREF
  char *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  _BYTE v18[16]; // [rsp+90h] [rbp+17h] BYREF
  int *v19; // [rsp+A0h] [rbp+27h]
  ULONG v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]
  const CHAR **v22; // [rsp+B0h] [rbp+37h]
  ULONG v23; // [rsp+B8h] [rbp+3Fh]
  int v24; // [rsp+BCh] [rbp+43h]

  v12 = 0LL;
  v11 = 0;
  if ( *(_QWORD *)&qword_140C53448 )
  {
    sub_1403747BC(a1, &v11, &v12, a1);
    if ( *v1 > 5u )
    {
      if ( sub_1402A2000((__int64)v1, 16LL) )
      {
        v3 = *(_BYTE *)(v2 + 184) & 7;
        v17 = 0;
        v10 = v3;
        v15 = &v10;
        v16 = 1;
        sub_1403699D0((__int64)v18, v12);
        v21 = 0;
        v24 = 0;
        v19 = &v13;
        v13 = v11;
        v22 = &v12;
        v20 = v4 + 3;
        v23 = v4 + 3;
        LODWORD(v12) = v5;
        sub_14024A9B0(v7, (unsigned __int8 *)&word_14002DFC6, v6, v4, v8, v9, 6u, &v14);
      }
    }
  }
}
