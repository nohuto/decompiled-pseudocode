/*
 * XREFs of sub_140211750 @ 0x140211750
 * Callers:
 *     sub_14021162C @ 0x14021162C (sub_14021162C.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140211750(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v4; // r9
  __int64 v5; // r9
  int v6; // ecx
  int v7; // r8d
  int v8; // r10d
  int v9; // [rsp+20h] [rbp-39h]
  int v10; // [rsp+28h] [rbp-31h]
  int v11; // [rsp+40h] [rbp-19h] BYREF
  __int64 v12; // [rsp+48h] [rbp-11h] BYREF
  __int64 v13[4]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  __int64 *v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  result = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( result == 64 && *(_QWORD *)&qword_140C53448 && **(_DWORD **)&qword_140C53448 > 5u )
  {
    result = sub_1402A2000(*(_QWORD *)&qword_140C53448, 0x400000000008LL, a3, a1);
    if ( result )
    {
      sub_1403699D0(v14, v4 + 1448);
      v6 = *(_DWORD *)(v5 + 1088);
      v17 = 0;
      v20 = 0;
      v15 = &v11;
      v18 = &v12;
      v11 = v6;
      v16 = 4;
      v12 = 0x1000000LL;
      v19 = 8;
      return sub_14024A9B0(v8, (int)&byte_14002C7D7, v7, 1, v9, v10, 5u, (__int64)v13);
    }
  }
  return result;
}
