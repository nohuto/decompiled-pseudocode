/*
 * XREFs of sub_140596944 @ 0x140596944
 * Callers:
 *     sub_1405962EC @ 0x1405962EC (sub_1405962EC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140596944()
{
  int v0; // edx
  char *v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11
  char v4; // al
  int v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-29h] BYREF
  int *v11; // [rsp+80h] [rbp-9h]
  int v12; // [rsp+88h] [rbp-1h]
  int v13; // [rsp+8Ch] [rbp+3h]
  __int64 *v14; // [rsp+90h] [rbp+7h]
  int v15; // [rsp+98h] [rbp+Fh]
  int v16; // [rsp+9Ch] [rbp+13h]
  __int64 *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  int v19; // [rsp+ACh] [rbp+23h]
  __int64 *v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+2Fh]
  int v22; // [rsp+BCh] [rbp+33h]
  __int64 *v23; // [rsp+C0h] [rbp+37h]
  int v24; // [rsp+C8h] [rbp+3Fh]
  int v25; // [rsp+CCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C53448 && **(_DWORD **)&qword_140C53448 > 5u )
  {
    if ( sub_1402A2000(*(__int64 *)&qword_140C53448, 1LL) )
    {
      v4 = *v1;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v5 = v4 & 0x7F;
      v11 = &v5;
      v6 = *((_QWORD *)v1 + 12);
      v14 = &v6;
      v7 = *((_QWORD *)v1 + 10);
      v17 = &v7;
      v8 = *((_QWORD *)v1 + 9);
      v20 = &v8;
      v9 = *(_QWORD *)(v3 + 16896);
      v23 = &v9;
      v15 = v0 + 7;
      v18 = v0 + 7;
      v21 = v0 + 7;
      v24 = v0 + 7;
      v12 = 4;
      sub_14020A9C4(v2, (unsigned __int8 *)&unk_14002CCF0, 0LL, 0LL, 7u, &v10);
    }
  }
}
