/*
 * XREFs of sub_1409A92D0 @ 0x1409A92D0
 * Callers:
 *     sub_1409AB560 @ 0x1409AB560 (sub_1409AB560.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409A92D0()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // [rsp+30h] [rbp-29h] BYREF
  __int64 v4; // [rsp+38h] [rbp-21h] BYREF
  __int64 v5; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  __int64 *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140D3B908, 1LL) )
    {
      v5 = v0;
      v7 = &v3;
      v3 = v2;
      v9 = &v4;
      v8 = 8LL;
      v11 = &v5;
      v4 = v1;
      v10 = 8LL;
      v12 = 8LL;
      sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)byte_140032C99, 0LL, 0LL, 5u, &v6);
    }
  }
}
