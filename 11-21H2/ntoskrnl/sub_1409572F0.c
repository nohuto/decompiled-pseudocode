/*
 * XREFs of sub_1409572F0 @ 0x1409572F0
 * Callers:
 *     sub_140950744 @ 0x140950744 (sub_140950744.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1409572F0()
{
  unsigned __int16 *v0; // r9
  unsigned __int16 *v1; // r10
  unsigned __int16 *v2; // r11
  __int64 v3; // [rsp+30h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v5; // [rsp+60h] [rbp-29h]
  __int64 v6; // [rsp+68h] [rbp-21h]
  _DWORD *v7; // [rsp+70h] [rbp-19h]
  __int64 v8; // [rsp+78h] [rbp-11h]
  __int64 v9; // [rsp+80h] [rbp-9h]
  _DWORD v10[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD *v11; // [rsp+90h] [rbp+7h]
  __int64 v12; // [rsp+98h] [rbp+Fh]
  __int64 v13; // [rsp+A0h] [rbp+17h]
  _DWORD v14[2]; // [rsp+A8h] [rbp+1Fh] BYREF
  _DWORD *v15; // [rsp+B0h] [rbp+27h]
  __int64 v16; // [rsp+B8h] [rbp+2Fh]
  __int64 v17; // [rsp+C0h] [rbp+37h]
  _DWORD v18[2]; // [rsp+C8h] [rbp+3Fh] BYREF

  if ( (unsigned int)dword_140C06550 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL) )
    {
      v3 = 0x1000000LL;
      v5 = &v3;
      v6 = 8LL;
      v7 = v10;
      v9 = *((_QWORD *)v2 + 1);
      v10[0] = *v2;
      v11 = v14;
      v13 = *((_QWORD *)v1 + 1);
      v14[0] = *v1;
      v15 = v18;
      v17 = *((_QWORD *)v0 + 1);
      v18[0] = *v0;
      v8 = 2LL;
      v10[1] = 0;
      v12 = 2LL;
      v14[1] = 0;
      v16 = 2LL;
      v18[1] = 0;
      sub_14020A9C4((__int64)&dword_140C06550, (unsigned __int8 *)&byte_14002C0A7, 0LL, 0LL, 9u, &v4);
    }
  }
}
