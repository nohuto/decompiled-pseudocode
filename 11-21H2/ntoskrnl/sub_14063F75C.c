/*
 * XREFs of sub_14063F75C @ 0x14063F75C
 * Callers:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_1403AD40C @ 0x1403AD40C (sub_1403AD40C.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

struct _KTHREAD *__fastcall sub_14063F75C(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  __int64 v5; // rcx

  result = KeGetCurrentThread();
  if ( a3 == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)result + 23) + 2184LL);
    if ( !v5 )
      return result;
  }
  else
  {
    v5 = qword_140C114A8;
  }
  return (struct _KTHREAD *)sub_14042A5E0(v5, a1);
}
