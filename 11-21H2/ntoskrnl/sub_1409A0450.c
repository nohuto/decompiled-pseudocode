/*
 * XREFs of sub_1409A0450 @ 0x1409A0450
 * Callers:
 *     sub_140990548 @ 0x140990548 (sub_140990548.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409A0450(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v5; // ebx
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // r11
  int v9; // [rsp+30h] [rbp-41h] BYREF
  int v10; // [rsp+34h] [rbp-3Dh] BYREF
  BOOL v11; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-31h] BYREF
  int *v13; // [rsp+60h] [rbp-11h]
  __int64 v14; // [rsp+68h] [rbp-9h]
  int *v15; // [rsp+70h] [rbp-1h]
  __int64 v16; // [rsp+78h] [rbp+7h]
  BOOL *v17; // [rsp+80h] [rbp+Fh]
  __int64 v18; // [rsp+88h] [rbp+17h]
  _DWORD *v19; // [rsp+90h] [rbp+1Fh]
  __int64 v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]
  _DWORD v22[2]; // [rsp+A8h] [rbp+37h] BYREF

  v5 = a1;
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x800000000000LL) )
    {
      v13 = &v9;
      v10 = v6;
      v15 = &v10;
      v22[1] = 0;
      v11 = a5 != 0;
      v9 = v7;
      v17 = &v11;
      v14 = 4LL;
      v19 = v22;
      v16 = 4LL;
      v18 = 4LL;
      v22[0] = 2 * v5;
      v20 = 2LL;
      v21 = v8;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_140032743, 0LL, 0LL, 7u, &v12);
    }
  }
}
