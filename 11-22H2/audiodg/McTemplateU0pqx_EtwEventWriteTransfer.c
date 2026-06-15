/*
 * XREFs of McTemplateU0pqx_EtwEventWriteTransfer @ 0x1400741E8
 * Callers:
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x140073EE0 (-Stop@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x140037F7C (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0pqx_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  char v6[16]; // [rsp+48h] [rbp-1h] BYREF
  __int64 *v7; // [rsp+58h] [rbp+Fh]
  __int64 v8; // [rsp+60h] [rbp+17h]
  int *v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 *v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+B8h] [rbp+6Fh] BYREF
  int v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v5 = 0LL;
  v7 = &v13;
  v9 = &v14;
  v11 = &v5;
  v10 = 4LL;
  v12 = 8LL;
  return McGenEventWrite_EtwEventWriteTransfer(a1, (__int64)&AudioCore_AEControl, a3, 4LL, (__int64)v6);
}
