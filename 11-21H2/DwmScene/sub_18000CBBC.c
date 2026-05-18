/*
 * XREFs of sub_18000CBBC @ 0x18000CBBC
 * Callers:
 *     sub_18000F344 @ 0x18000F344 (sub_18000F344.c)
 * Callees:
 *     sub_18000CAC8 @ 0x18000CAC8 (sub_18000CAC8.c)
 *     sub_18000CCF8 @ 0x18000CCF8 (sub_18000CCF8.c)
 *     sub_18000E82C @ 0x18000E82C (sub_18000E82C.c)
 */

__int64 __fastcall sub_18000CBBC(int a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int LastError; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-10h]

  LastError = GetLastError();
  v9 = LastError;
  if ( !LastError )
  {
    sub_18000CCF8(a1, a2, (unsigned int)"wil", 0, 0LL, a6, -2147024228);
    LOWORD(v9) = 668;
LABEL_4:
    v9 = (unsigned __int16)v9 | 0x80070000;
    goto LABEL_5;
  }
  if ( LastError > 0 )
    goto LABEL_4;
LABEL_5:
  LODWORD(v13) = v9;
  HIDWORD(v13) = sub_18000E82C(v9);
  LOBYTE(v14) = 0;
  v16 = v14;
  v15 = v13;
  sub_18000CAC8(a1, a2, (int)"wil", v10, v12, a6, (__int64)&v15);
  return v9;
}
