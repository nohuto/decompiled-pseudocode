/*
 * XREFs of sub_140580088 @ 0x140580088
 * Callers:
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140580088(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r11
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  char *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r11
  int v13; // ecx
  int v14; // [rsp+20h] [rbp-39h]
  int v15; // [rsp+28h] [rbp-31h]
  int v16; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  __int64 *v23; // [rsp+90h] [rbp+37h]
  int v24; // [rsp+98h] [rbp+3Fh]
  int v25; // [rsp+9Ch] [rbp+43h]

  if ( *(_QWORD *)&qword_140C53448 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 4LL) )
        {
          sub_1403699D0((__int64)v19, (const CHAR *)(v11 + 1448));
          v10 = &byte_14002C87F;
          goto LABEL_13;
        }
      }
      else if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 4LL) )
      {
        sub_1403699D0((__int64)v19, (const CHAR *)(v12 + 1448));
        v10 = (char *)&byte_14002C82B;
        goto LABEL_13;
      }
    }
    else if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 4LL) )
    {
      sub_1403699D0((__int64)v19, (const CHAR *)(v5 + 1448));
      v10 = byte_14002C8D3;
LABEL_13:
      v13 = *(_DWORD *)(v9 + 1088);
      v22 = 0;
      v25 = 0;
      v20 = &v16;
      v23 = &v17;
      v21 = v7;
      v16 = v13;
      v17 = a2;
      v24 = 8;
      sub_14024A9B0(v8, (unsigned __int8 *)v10, v6, 1u, v14, v15, 5u, &v18);
    }
  }
}
