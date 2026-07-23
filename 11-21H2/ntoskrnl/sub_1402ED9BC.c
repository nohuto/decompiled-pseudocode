/*
 * XREFs of sub_1402ED9BC @ 0x1402ED9BC
 * Callers:
 *     sub_140205B1C @ 0x140205B1C (sub_140205B1C.c)
 *     sub_1402ED98C @ 0x1402ED98C (sub_1402ED98C.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1409CA928 @ 0x1409CA928 (sub_1409CA928.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402ED9BC(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v1 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 152) + 16 * v1;
}
