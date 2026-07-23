/*
 * XREFs of sub_140395E40 @ 0x140395E40
 * Callers:
 *     sub_140395BDC @ 0x140395BDC (sub_140395BDC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140395E40(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-19h]
  int v11; // [rsp+78h] [rbp-11h]
  int v12; // [rsp+7Ch] [rbp-Dh]
  __int64 *v13; // [rsp+80h] [rbp-9h]
  int v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+8Ch] [rbp+3h]
  __int64 v16; // [rsp+90h] [rbp+7h]
  int v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+9Ch] [rbp+13h]
  __int64 v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  __int64 *v22; // [rsp+B0h] [rbp+27h]
  int v23; // [rsp+B8h] [rbp+2Fh]
  int v24; // [rsp+BCh] [rbp+33h]
  __int64 *v25; // [rsp+C0h] [rbp+37h]
  int v26; // [rsp+C8h] [rbp+3Fh]
  int v27; // [rsp+CCh] [rbp+43h]

  if ( !dword_140D014AC && (unsigned int)dword_140C04570 > 5 )
  {
    if ( sub_1402A2000((__int64)&dword_140C04570, 0x400000000000LL) )
    {
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v5 = qword_140C21FA8;
      v10 = &v5;
      v13 = &v6;
      v17 = 40;
      v20 = 40;
      v22 = &v7;
      v25 = &v8;
      v11 = 8;
      v14 = 8;
      v19 = v2;
      v23 = 8;
      v26 = 8;
      v6 = a1;
      v16 = v3;
      v7 = v4;
      v8 = 0x1000000LL;
      sub_14020A9C4((__int64)&dword_140C04570, (unsigned __int8 *)word_14002F97A, 0LL, 0LL, 8u, &v9);
    }
  }
}
