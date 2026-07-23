/*
 * XREFs of sub_140A4B520 @ 0x140A4B520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 */

void __fastcall sub_140A4B520(
        struct _KDPC *Dpc,
        _SLIST_HEADER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // r8
  _SLIST_ENTRY v6[10]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v6, 0, sizeof(v6));
  ExpInterlockedPushEntrySList(DeferredContext + 4, &v6[9]);
  do
    sub_140A4B5A0(DeferredContext, v6, v5);
  while ( LODWORD(v6[0].Next) != 16 );
}
