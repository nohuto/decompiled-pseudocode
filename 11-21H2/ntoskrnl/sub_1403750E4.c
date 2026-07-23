/*
 * XREFs of sub_1403750E4 @ 0x1403750E4
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x14021D280 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     sub_14021E8B8 @ 0x14021E8B8 (sub_14021E8B8.c)
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     sub_140541A84 @ 0x140541A84 (sub_140541A84.c)
 */

bool __fastcall sub_1403750E4(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 v6; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  Links = 0LL;
  v6 = sub_14021E8B8(*(_QWORD *)(a1 + 8), a2, a3, &Links, 0LL);
  if ( Links )
    *(_QWORD *)(a1 + 8) = RtlSplay(Links);
  if ( !v6 )
    return 1;
  if ( *(_BYTE *)(v6 - 24 + 8) )
    return sub_140541A84(v6 - 24, a2, a3) == 0;
  return 0;
}
