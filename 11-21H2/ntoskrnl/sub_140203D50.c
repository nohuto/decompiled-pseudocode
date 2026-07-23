/*
 * XREFs of sub_140203D50 @ 0x140203D50
 * Callers:
 *     FsRtlUninitializeBaseMcb @ 0x140203D00 (FsRtlUninitializeBaseMcb.c)
 *     sub_14021D85C @ 0x14021D85C (sub_14021D85C.c)
 *     sub_14021D8B4 @ 0x14021D8B4 (sub_14021D8B4.c)
 *     sub_14022C788 @ 0x14022C788 (sub_14022C788.c)
 *     FsRtlFreeFileLock @ 0x140259F70 (FsRtlFreeFileLock.c)
 *     sub_14066E830 @ 0x14066E830 (sub_14066E830.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14066EEA0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_1407A5530 @ 0x1407A5530 (sub_1407A5530.c)
 *     FsRtlDeleteTunnelCache @ 0x1407FC310 (FsRtlDeleteTunnelCache.c)
 *     sub_1408398AC @ 0x1408398AC (sub_1408398AC.c)
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 *     sub_140A375DC @ 0x140A375DC (sub_140A375DC.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PSLIST_ENTRY __fastcall sub_140203D50(__int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  ++*(_DWORD *)(a1 + 28);
  if ( *(_WORD *)a1 < *(_WORD *)(a1 + 16) )
    return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
  ++*(_DWORD *)(a1 + 32);
  return (PSLIST_ENTRY)sub_14042A5E0(a2, a2, a3);
}
