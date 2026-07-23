/*
 * XREFs of sub_1405F6854 @ 0x1405F6854
 * Callers:
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 *     sub_140381E98 @ 0x140381E98 (sub_140381E98.c)
 *     sub_140395F60 @ 0x140395F60 (sub_140395F60.c)
 *     sub_140396030 @ 0x140396030 (sub_140396030.c)
 *     sub_140396180 @ 0x140396180 (sub_140396180.c)
 *     sub_1405F6404 @ 0x1405F6404 (sub_1405F6404.c)
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

unsigned __int64 __fastcall sub_1405F6854(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rdx

  v2 = *a1;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v3 = *a2 & 0xFFFFFFFFFFFFF000uLL;
    v4 = (__int64 *)((v3 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
    v5 = *v4;
    if ( *v4 && (v5 & 2) == 0 )
    {
      sub_14042A5E0(a1, v5);
      *(_DWORD *)v4 |= 2u;
      --*(_DWORD *)(v2 + 48);
    }
  }
  else
  {
    --*(_DWORD *)(v2 + 44);
    sub_14042A5E0(a1, *a2);
    return 0LL;
  }
  return v3;
}
