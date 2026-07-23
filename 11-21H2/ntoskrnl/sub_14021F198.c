/*
 * XREFs of sub_14021F198 @ 0x14021F198
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 * Callees:
 *     sub_14021DCF4 @ 0x14021DCF4 (sub_14021DCF4.c)
 *     sub_14021E8B8 @ 0x14021E8B8 (sub_14021E8B8.c)
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     sub_140541A84 @ 0x140541A84 (sub_140541A84.c)
 */

char __fastcall sub_14021F198(__int64 a1, unsigned __int64 *a2)
{
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // rax
  PRTL_SPLAY_LINKS v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Links = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    v8 = sub_14021E8B8(v5, a2, a2 + 5, &Links, 0LL);
    if ( v8 )
    {
      v11 = *(_BYTE *)(v8 - 16) ? sub_140541A84(v8 - 24, a2, a2 + 5) : *(_QWORD *)(v8 - 24);
      if ( v11 && (a2[1] || *(_QWORD *)(v11 + 16)) )
        return 0;
    }
    v4 = Links;
    if ( Links )
    {
      v9 = RtlSplay(Links);
      v4 = 0LL;
      *(_QWORD *)(a1 + 8) = v9;
      Links = 0LL;
    }
  }
  v6 = *(_QWORD **)(a1 + 16);
  if ( v6 )
  {
    v10 = sub_14021DCF4(v6, a2, a2 + 5, &Links, 0LL);
    if ( !v10 || !a2[1] && !v10[4] )
    {
      v4 = Links;
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  if ( v4 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v4);
  return 1;
}
