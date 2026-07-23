/*
 * XREFs of sub_14026099C @ 0x14026099C
 * Callers:
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 * Callees:
 *     sub_1402609F4 @ 0x1402609F4 (sub_1402609F4.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14026099C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rcx

  v2 = sub_1402609F4(*(_QWORD *)(a1 + 16));
  v3 = v2;
  if ( v2 )
  {
    v4 = *(void **)v2;
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
    memmove(v4, *(const void **)a1, 16LL * *(_QWORD *)(a1 + 16));
  }
  return v3;
}
