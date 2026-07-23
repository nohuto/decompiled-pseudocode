/*
 * XREFs of DnsPrint_RpcStatsBuffer @ 0x14074B910
 * Callers:
 *     sub_14074C12C @ 0x14074C12C (sub_14074C12C.c)
 * Callees:
 *     sub_1402D2B6C @ 0x1402D2B6C (sub_1402D2B6C.c)
 *     sub_1402D2BA0 @ 0x1402D2BA0 (sub_1402D2BA0.c)
 */

__int64 __fastcall DnsPrint_RpcStatsBuffer(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( !sub_1402D2BA0(a1, a2) )
    return 3221226094LL;
  *a4 -= 18;
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL);
  sub_1402D2B6C(a1, a2);
  return 0LL;
}
