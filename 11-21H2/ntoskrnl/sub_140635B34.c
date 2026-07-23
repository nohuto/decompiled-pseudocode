/*
 * XREFs of sub_140635B34 @ 0x140635B34
 * Callers:
 *     sub_1409EE8E0 @ 0x1409EE8E0 (sub_1409EE8E0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140460DBA @ 0x140460DBA (sub_140460DBA.c)
 */

char __fastcall sub_140635B34(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_140C15D88;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return sub_140460DBA(v1, v3, (_SLIST_ENTRY *)a1);
}
