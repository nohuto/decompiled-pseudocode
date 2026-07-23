/*
 * XREFs of sub_1403A7B7C @ 0x1403A7B7C
 * Callers:
 *     sub_1403AA550 @ 0x1403AA550 (sub_1403AA550.c)
 * Callees:
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403A7B7C(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)sub_1403AA258(82LL);
  v3 = v2;
  if ( !v2 )
    return 3221225626LL;
  memset(v2, 0, 0x52uLL);
  *a1 = v3;
  *(_QWORD *)(v3 + 50) = v3 + 66;
  *(_QWORD *)(v3 + 58) = v3 + 74;
  return 0LL;
}
