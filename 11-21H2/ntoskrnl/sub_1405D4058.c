/*
 * XREFs of sub_1405D4058 @ 0x1405D4058
 * Callers:
 *     sub_140808AEC @ 0x140808AEC (sub_140808AEC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D4058(__int64 a1, int a2)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  __int64 v8; // [rsp+38h] [rbp-31h] BYREF
  __int64 v9; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+7h]
  int v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+7Ch] [rbp+13h]
  int *v14; // [rsp+80h] [rbp+17h]
  int v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+8Ch] [rbp+23h]
  __int64 *v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  int v19; // [rsp+9Ch] [rbp+33h]
  int *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = &v8;
      v14 = &v6;
      v17 = &v9;
      v12 = 8;
      v20 = &v7;
      v15 = 4;
      v18 = 8;
      v7 = v3;
      v21 = 4;
      v8 = v4;
      v6 = a2;
      v9 = v5;
      sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002F7F3, 0LL, 0LL, 6u, &v10);
    }
  }
}
