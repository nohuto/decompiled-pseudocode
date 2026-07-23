/*
 * XREFs of sub_140202234 @ 0x140202234
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x140202160 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1402021D0 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     sub_14021E5E4 @ 0x14021E5E4 (sub_14021E5E4.c)
 *     sub_14021E6C4 @ 0x14021E6C4 (sub_14021E6C4.c)
 *     sub_14021F468 @ 0x14021F468 (sub_14021F468.c)
 *     sub_14021F514 @ 0x14021F514 (sub_14021F514.c)
 *     FsRtlTruncateBaseMcb @ 0x14022BCB0 (FsRtlTruncateBaseMcb.c)
 *     sub_140247914 @ 0x140247914 (sub_140247914.c)
 *     sub_140248914 @ 0x140248914 (sub_140248914.c)
 *     FsRtlAllocateFileLock @ 0x140256110 (FsRtlAllocateFileLock.c)
 *     sub_1402A2EF0 @ 0x1402A2EF0 (sub_1402A2EF0.c)
 *     sub_1402D83B4 @ 0x1402D83B4 (sub_1402D83B4.c)
 *     sub_14035D158 @ 0x14035D158 (sub_14035D158.c)
 *     sub_14039653C @ 0x14039653C (sub_14039653C.c)
 *     sub_14039E588 @ 0x14039E588 (sub_14039E588.c)
 *     sub_1403A3F0C @ 0x1403A3F0C (sub_1403A3F0C.c)
 *     sub_140584030 @ 0x140584030 (sub_140584030.c)
 *     sub_140667810 @ 0x140667810 (sub_140667810.c)
 *     sub_140667864 @ 0x140667864 (sub_140667864.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140694B30 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14071E5C0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     sub_14075E074 @ 0x14075E074 (sub_14075E074.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     sub_1407A73B0 @ 0x1407A73B0 (sub_1407A73B0.c)
 *     sub_14083A160 @ 0x14083A160 (sub_14083A160.c)
 *     sub_14083A490 @ 0x14083A490 (sub_14083A490.c)
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 *     sub_140A375DC @ 0x140A375DC (sub_140A375DC.c)
 *     sub_140A835CC @ 0x140A835CC (sub_140A835CC.c)
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A8AAA4 @ 0x140A8AAA4 (sub_140A8AAA4.c)
 *     sub_140A8D11C @ 0x140A8D11C (sub_140A8D11C.c)
 *     sub_140A98DCC @ 0x140A98DCC (sub_140A98DCC.c)
 *     sub_140A999D0 @ 0x140A999D0 (sub_140A999D0.c)
 *     sub_140A9BFC0 @ 0x140A9BFC0 (sub_140A9BFC0.c)
 *     sub_140A9CDF4 @ 0x140A9CDF4 (sub_140A9CDF4.c)
 *     sub_140A9D128 @ 0x140A9D128 (sub_140A9D128.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PSLIST_ENTRY __fastcall sub_140202234(__int64 a1)
{
  PSLIST_ENTRY result; // rax

  ++*(_DWORD *)(a1 + 20);
  result = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1);
  if ( !result )
  {
    ++*(_DWORD *)(a1 + 24);
    return (PSLIST_ENTRY)sub_14042A5E0(
                           *(unsigned int *)(a1 + 36),
                           *(unsigned int *)(a1 + 44),
                           *(unsigned int *)(a1 + 40));
  }
  return result;
}
