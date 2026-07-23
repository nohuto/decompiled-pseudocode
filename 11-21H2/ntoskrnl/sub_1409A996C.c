/*
 * XREFs of sub_1409A996C @ 0x1409A996C
 * Callers:
 *     sub_1409A4AE0 @ 0x1409A4AE0 (sub_1409A4AE0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409A996C(int a1)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  int v7; // [rsp+38h] [rbp-21h] BYREF
  int v8; // [rsp+3Ch] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-19h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  int *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140D3B908, 1LL) )
    {
      v8 = v2;
      v10 = &v5;
      v5 = a1;
      v12 = &v6;
      v11 = 4LL;
      v14 = &v7;
      v6 = v4;
      v16 = &v8;
      v13 = 4LL;
      v7 = v3;
      v15 = 4LL;
      v17 = 4LL;
      sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)byte_140032C4D, 0LL, 0LL, 6u, &v9);
    }
  }
}
