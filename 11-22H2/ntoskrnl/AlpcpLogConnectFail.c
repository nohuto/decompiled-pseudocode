/*
 * XREFs of AlpcpLogConnectFail @ 0x14097A390
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715C44 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1407C43C0 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x14097A28C (AlpcpInvokeLogCallbacks.c)
 */

signed __int32 __fastcall AlpcpLogConnectFail(int a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+34h] [rbp-24h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0uLL;
  v6 = 0;
  v2 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v7 = a1;
  v8 = a2;
  v4 = v2;
  v5 = 8;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x20u);
}
