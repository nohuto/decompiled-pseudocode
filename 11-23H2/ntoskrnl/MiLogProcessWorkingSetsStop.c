/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x140220530
 * Callers:
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void MiLogProcessWorkingSetsStop()
{
  int v0; // edx
  int v1; // r8d
  int v2; // r10d
  _QWORD *v3; // r11
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-49h]
  int v6; // [rsp+28h] [rbp-41h]
  __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+48h] [rbp-21h] BYREF
  __int64 v9; // [rsp+50h] [rbp-19h] BYREF
  __int64 v10[5]; // [rsp+60h] [rbp-9h] BYREF
  int v11; // [rsp+88h] [rbp+1Fh]
  int v12; // [rsp+8Ch] [rbp+23h]
  __int64 *v13; // [rsp+90h] [rbp+27h]
  int v14; // [rsp+98h] [rbp+2Fh]
  int v15; // [rsp+9Ch] [rbp+33h]
  __int64 *v16; // [rsp+A0h] [rbp+37h]
  int v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+ACh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C698E8 && **(_DWORD **)&qword_140C698E8 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C698E8, 1LL) )
    {
      v4 = v3[2152];
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v7 = v4;
      v10[4] = (__int64)&v7;
      v8 = v3[2200];
      v13 = &v8;
      v9 = v3[2228];
      v16 = &v9;
      v11 = 8;
      v14 = 8;
      v17 = 8;
      tlgWriteEx_EtwWriteEx(v2, (int)&byte_1400388DF, v1, v0, v5, v6, 5u, (__int64)v10);
    }
  }
}
