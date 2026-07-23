/*
 * XREFs of sub_14036DC90 @ 0x14036DC90
 * Callers:
 *     sub_1402A0EF8 @ 0x1402A0EF8 (sub_1402A0EF8.c)
 *     sub_140363EF0 @ 0x140363EF0 (sub_140363EF0.c)
 * Callees:
 *     sub_1403644A4 @ 0x1403644A4 (sub_1403644A4.c)
 *     sub_14036DD30 @ 0x14036DD30 (sub_14036DD30.c)
 *     sub_14036E0E4 @ 0x14036E0E4 (sub_14036E0E4.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 */

__int64 __fastcall sub_14036DC90(__int64 a1)
{
  int v1; // ebx
  int v3; // ecx
  unsigned int v4; // ebx
  PSLIST_ENTRY v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 220);
  v4 = v1 & 0x13000003;
  if ( v3 && v3 == *((_DWORD *)KeGetCurrentThread() + 308) )
    v4 |= 1u;
  v5 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 768));
  if ( v5 )
    sub_14036E0E4(a1 + 704, v4, v5);
  sub_1403644A4(a1 + 896, v4, v6, v7);
  sub_14036DD30(a1 + 320, v4);
  sub_14036DD30(a1 + 512, v4);
  return 0LL;
}
