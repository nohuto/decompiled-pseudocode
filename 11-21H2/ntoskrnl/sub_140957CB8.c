/*
 * XREFs of sub_140957CB8 @ 0x140957CB8
 * Callers:
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140957CB8(int a1)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 *v3; // r10
  int v4; // r11d
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  __int64 v7; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-29h]
  __int64 v10; // [rsp+68h] [rbp-21h]
  int *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  int *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  _DWORD *v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  __int64 v17; // [rsp+A0h] [rbp+17h]
  _DWORD v18[2]; // [rsp+A8h] [rbp+1Fh] BYREF
  _DWORD *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  __int64 v21; // [rsp+C0h] [rbp+37h]
  _DWORD v22[2]; // [rsp+C8h] [rbp+3Fh] BYREF

  if ( (unsigned int)dword_140C06550 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL) )
    {
      v7 = 0x1000000LL;
      v9 = &v7;
      v10 = 8LL;
      v11 = &v5;
      v5 = a1;
      v13 = &v6;
      v15 = v18;
      v17 = *((_QWORD *)v3 + 1);
      v18[0] = *v3;
      v19 = v22;
      v21 = *((_QWORD *)v2 + 1);
      v22[0] = *v2;
      v12 = 4LL;
      v6 = v4;
      v14 = 4LL;
      v16 = 2LL;
      v18[1] = 0;
      v20 = 2LL;
      v22[1] = 0;
      sub_14020A9C4((__int64)&dword_140C06550, (unsigned __int8 *)byte_14002BDB1, 0LL, 0LL, 9u, &v8);
    }
  }
}
