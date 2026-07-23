/*
 * XREFs of sub_14039E55C @ 0x14039E55C
 * Callers:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039E55C(int a1)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1 )
    return 0LL;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return *((_QWORD *)KeGetCurrentThread() + 23) + 368LL;
}
