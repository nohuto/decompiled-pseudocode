/*
 * XREFs of sub_1402A1948 @ 0x1402A1948
 * Callers:
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1402A1948(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // edx
  __int64 v5; // r8
  __int64 v6; // r10
  _QWORD *v7; // r11
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-49h]
  int v10; // [rsp+28h] [rbp-41h]
  __int64 v11; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h] BYREF
  __int64 v13; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  __int64 *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  __int64 *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C53448 && **(_DWORD **)&qword_140C53448 > 5u )
  {
    if ( (unsigned __int8)sub_1402A2000(*(_QWORD *)&qword_140C53448, 1LL, a3, a4) )
    {
      v8 = v7[2112];
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v11 = v8;
      v15 = &v11;
      v12 = v7[2160];
      v18 = &v12;
      v13 = v7[2188];
      v21 = &v13;
      v16 = 8;
      v19 = 8;
      v22 = 8;
      sub_14024A9B0(v6, (unsigned __int8 *)&byte_14002CE7D, v5, v4, v9, v10, 5u, &v14);
    }
  }
}
