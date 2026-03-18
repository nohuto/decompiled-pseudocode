/*
 * XREFs of AlpcpLogConnectSuccess @ 0x14097A3C4
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715BD4 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1407C3E30 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x14097A1DC (AlpcpInvokeLogCallbacks.c)
 */

signed __int32 __fastcall AlpcpLogConnectSuccess(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]

  v4 = 0LL;
  v3 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  DWORD2(v4) = a1;
  LODWORD(v4) = 7;
  v3 = v1;
  return AlpcpInvokeLogCallbacks((__int64)&v3, 0x1Cu);
}
