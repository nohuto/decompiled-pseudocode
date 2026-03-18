/*
 * XREFs of AlpcpLogConnectRequest @ 0x14097A354
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715BD4 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1407C3E30 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x14097A1DC (AlpcpInvokeLogCallbacks.c)
 */

signed __int32 __fastcall AlpcpLogConnectRequest(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v5 = 0LL;
  v4 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  LODWORD(v5) = 6;
  v4 = v1;
  DWORD2(v5) = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x1Cu);
}
