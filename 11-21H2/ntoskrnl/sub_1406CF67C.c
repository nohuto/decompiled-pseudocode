/*
 * XREFs of sub_1406CF67C @ 0x1406CF67C
 * Callers:
 *     sub_1406CF5D0 @ 0x1406CF5D0 (sub_1406CF5D0.c)
 *     sub_1409380B4 @ 0x1409380B4 (sub_1409380B4.c)
 * Callees:
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_1407E65A0 @ 0x1407E65A0 (sub_1407E65A0.c)
 */

__int64 __fastcall sub_1406CF67C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  int v6; // ebx

  CurrentThread = KeGetCurrentThread();
  ++*((_QWORD *)CurrentThread + 114);
  __incgsdword(0x2EE4u);
  v5 = sub_1402A7370(a1, *((_QWORD *)KeGetCurrentThread() + 23), a2, 0LL, 0, 0);
  v6 = v5;
  if ( !a2 || !v5 )
    v6 = sub_1407E65A0(a1, a2) | v5;
  return v6 == 0 ? 0xC0000225 : 0;
}
