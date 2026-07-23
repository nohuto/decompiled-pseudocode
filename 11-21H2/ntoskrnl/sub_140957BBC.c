/*
 * XREFs of sub_140957BBC @ 0x140957BBC
 * Callers:
 *     sub_14095B48C @ 0x14095B48C (sub_14095B48C.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140957BBC()
{
  __int64 v0; // r9
  int v1; // r10d
  int v2; // r11d
  int v3; // [rsp+30h] [rbp-39h] BYREF
  int v4; // [rsp+34h] [rbp-35h] BYREF
  __int64 v5; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  _DWORD *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int64 v11; // [rsp+80h] [rbp+17h]
  _DWORD v12[2]; // [rsp+88h] [rbp+1Fh] BYREF
  int *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh]
  int *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_140C06550 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL) )
    {
      v5 = 2048LL;
      v7 = &v5;
      v8 = 8LL;
      v9 = v12;
      v11 = *(_QWORD *)(v0 + 48);
      v12[0] = *(unsigned __int16 *)(v0 + 40);
      v13 = &v3;
      v15 = &v4;
      v10 = 2LL;
      v12[1] = 0;
      v3 = v2;
      v14 = 4LL;
      v4 = v1;
      v16 = 4LL;
      sub_14020A9C4((__int64)&dword_140C06550, (unsigned __int8 *)&byte_14002BEB7, 0LL, 0LL, 7u, &v6);
    }
  }
}
