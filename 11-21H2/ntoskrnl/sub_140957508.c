/*
 * XREFs of sub_140957508 @ 0x140957508
 * Callers:
 *     sub_14075E568 @ 0x14075E568 (sub_14075E568.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140957508(__int64 a1, __int64 a2)
{
  const WCHAR *v3; // r9
  int v4; // r11d
  int v5; // r10d
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-9h]
  int v11; // [rsp+68h] [rbp-1h]
  int v12; // [rsp+6Ch] [rbp+3h]
  _BYTE v13[16]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  int *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  int *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_140C06550 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL) )
    {
      v12 = 0;
      v10 = &v8;
      v8 = 2048LL;
      v11 = 8;
      sub_1402A2094((__int64)v13, v3);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v17 = &v6;
      v18 = 4;
      v20 = &v7;
      v21 = 4;
      v14 = a2;
      v15 = 16;
      v6 = v4;
      v7 = v5;
      sub_14020A9C4((__int64)&dword_140C06550, (unsigned __int8 *)word_14002BD52, 0LL, 0LL, 7u, &v9);
    }
  }
}
