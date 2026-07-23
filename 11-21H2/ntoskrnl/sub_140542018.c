/*
 * XREFs of sub_140542018 @ 0x140542018
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 * Callees:
 *     sub_14021DEB4 @ 0x14021DEB4 (sub_14021DEB4.c)
 *     sub_14021E048 @ 0x14021E048 (sub_14021E048.c)
 */

__int64 __fastcall sub_140542018(_QWORD *a1, __int64 a2, char a3)
{
  int v3; // eax
  _SLIST_ENTRY **v4; // r9
  _RTL_SPLAY_LINKS *v5; // r10
  bool v7; // zf
  _RTL_SPLAY_LINKS *v8; // rdx

  v3 = *(_DWORD *)(a2 + 20);
  v4 = (_SLIST_ENTRY **)(a2 + 8);
  v5 = *(_RTL_SPLAY_LINKS **)(a2 + 32);
  v7 = *(_BYTE *)(a2 + 16) == 0;
  v8 = *(_RTL_SPLAY_LINKS **)(a2 + 24);
  if ( v7 )
    return sub_14021E048(a1, (__int64)v8, (unsigned __int64 *)a2, v4, (__int64)v5, v3, 0LL, 1, a3);
  else
    return sub_14021DEB4(a1, v8, (unsigned __int64 *)a2, (_RTL_SPLAY_LINKS **)v4, v5, v3, 0LL, 1, a3);
}
