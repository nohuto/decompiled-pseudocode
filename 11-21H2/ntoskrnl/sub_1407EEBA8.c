/*
 * XREFs of sub_1407EEBA8 @ 0x1407EEBA8
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_14085D010 @ 0x14085D010 (sub_14085D010.c)
 *     sub_140995690 @ 0x140995690 (sub_140995690.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

int __fastcall sub_1407EEBA8(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edi
  const CHAR *v4; // rbx
  int v5; // r8d
  char v6; // r9
  char v7; // r8
  char v8; // r10
  char v9; // r11
  char v11; // [rsp+38h] [rbp-49h] BYREF
  char v12; // [rsp+39h] [rbp-48h] BYREF
  char v13; // [rsp+3Ah] [rbp-47h] BYREF
  char v14; // [rsp+3Bh] [rbp-46h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-39h] BYREF
  char v17[16]; // [rsp+68h] [rbp-19h] BYREF
  char *v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  char *v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  char *v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]
  char *v24; // [rsp+A8h] [rbp+27h]
  __int64 v25; // [rsp+B0h] [rbp+2Fh]
  int *v26; // [rsp+B8h] [rbp+37h]
  __int64 v27; // [rsp+C0h] [rbp+3Fh]

  v2 = *a1;
  v3 = dword_140C22B2C;
  if ( (unsigned int)v2 < 4 )
  {
    v4 = off_140008178[v2];
    if ( (unsigned int)v2 <= 1 )
    {
      v5 = *(_DWORD *)(a2 + 4);
      if ( v5 != dword_140C095A8[v2] )
      {
        dword_140C095A8[v2] = v5;
        if ( (unsigned int)dword_140C03A00 > 5 )
        {
          sub_1403699D0((__int64)v17, v4);
          v11 = v6;
          v18 = &v11;
          v13 = v7;
          v20 = &v12;
          v19 = 1LL;
          v22 = &v13;
          v12 = v8;
          v24 = &v14;
          v21 = 1LL;
          v26 = &v15;
          v23 = 1LL;
          v14 = v9;
          v25 = 1LL;
          v15 = v3;
          v27 = 4LL;
          LODWORD(v2) = sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&byte_14002EB4F, 0LL, 0LL, 8u, &v16);
        }
      }
    }
  }
  return v2;
}
