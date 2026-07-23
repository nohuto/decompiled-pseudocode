/*
 * XREFs of sub_140365C94 @ 0x140365C94
 * Callers:
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 *     sub_1407E5148 @ 0x1407E5148 (sub_1407E5148.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     sub_140366094 @ 0x140366094 (sub_140366094.c)
 *     sub_140366BE8 @ 0x140366BE8 (sub_140366BE8.c)
 */

void __fastcall sub_140365C94(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = sub_1402CD7F0(*((_QWORD *)CurrentThread + 23));
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)sub_140366BE8(CurrentThread, v7, a3) )
        sub_140366094((_DWORD)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      sub_1402AD030(v8 + 45);
    }
  }
}
