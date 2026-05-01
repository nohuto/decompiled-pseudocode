/*
 * XREFs of RmpClientUnregisterActivityHostCallbacks @ 0x180009384
 * Callers:
 *     RmUnregisterActivityHostCallbacks @ 0x1800092C0 (RmUnregisterActivityHostCallbacks.c)
 * Callees:
 *     HamIpcChannelObjectMakeZombie @ 0x1800099BC (HamIpcChannelObjectMakeZombie.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientUnregisterActivityHostCallbacks(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  _QWORD v5[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v6; // [rsp+48h] [rbp-30h]
  __int128 v7; // [rsp+58h] [rbp-20h]
  __int64 v8; // [rsp+68h] [rbp-10h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021F00, 3u, 0LL, *(_QWORD *)(a1 + 16), a2).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v5[0] = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v5[1] = a2;
    HamIpcChannelObjectMakeZombie(a1 + 24, v5);
    return 0LL;
  }
  return result;
}
