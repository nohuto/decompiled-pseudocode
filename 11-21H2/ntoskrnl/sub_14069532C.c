/*
 * XREFs of sub_14069532C @ 0x14069532C
 * Callers:
 *     sub_140695160 @ 0x140695160 (sub_140695160.c)
 * Callees:
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 */

__int64 __fastcall sub_14069532C(__int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  v5 = *((_QWORD *)CurrentThread + 23);
  v6 = sub_140347920(v5, 0x746C6644u);
  if ( !v6 )
    return 3221225473LL;
  v7 = *(_QWORD *)(v6 + 16);
  sub_1402F89B0((signed __int64 *)(v5 + 1208), v6, 0x746C6644u);
  if ( *(_QWORD *)(a1 + 32) == v7 )
    *a2 = 1;
  return 0LL;
}
