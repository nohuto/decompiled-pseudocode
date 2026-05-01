/*
 * XREFs of RmpClientReleaseResourceSet @ 0x1800092CC
 * Callers:
 *     RmReleaseResourceSetEx @ 0x1800092B0 (RmReleaseResourceSetEx.c)
 * Callees:
 *     HamIpcChannelObjectMakeZombie @ 0x1800099BC (HamIpcChannelObjectMakeZombie.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientReleaseResourceSet(__int64 a1, __int64 a2, int a3)
{
  CLIENT_CALL_RETURN result; // rax
  _QWORD v7[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h]
  __int128 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-10h]

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021F00, 6u, 0LL, *(_QWORD *)(a1 + 16), a2, a3).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v7[0] = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v7[1] = a2;
    HamIpcChannelObjectMakeZombie(a1 + 24, v7);
    return 0LL;
  }
  return result;
}
