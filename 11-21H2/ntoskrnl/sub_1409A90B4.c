/*
 * XREFs of sub_1409A90B4 @ 0x1409A90B4
 * Callers:
 *     sub_1409AB284 @ 0x1409AB284 (sub_1409AB284.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409A90B4()
{
  _DWORD *v0; // r9
  __int64 v1; // r10
  int v2; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  _QWORD *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  int *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_140D3B908 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140D3B908, 1LL) )
    {
      v4 = v0;
      v6 = &v3;
      v3 = v1;
      v8 = &v4;
      v2 = *v0;
      v7 = 8LL;
      v10 = &v2;
      v9 = 8LL;
      v11 = 4LL;
      sub_14020A9C4((__int64)&dword_140D3B908, (unsigned __int8 *)&dword_14003371C, 0LL, 0LL, 5u, &v5);
    }
  }
}
