/*
 * XREFs of sub_140667810 @ 0x140667810
 * Callers:
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140667810(__int64 a1)
{
  PSLIST_ENTRY v2; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_140202234((__int64)&unk_140CF5B80);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 16) = 16LL;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}
