/*
 * XREFs of sub_1402F3A88 @ 0x1402F3A88
 * Callers:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_1403AD40C @ 0x1403AD40C (sub_1403AD40C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402F3A88(unsigned __int64 a1, int a2)
{
  return a2 == 1 && a1 <= 0x7FFFFFFEFFFFLL && *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 992LL);
}
