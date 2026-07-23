/*
 * XREFs of sub_1403DE2B0 @ 0x1403DE2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueue @ 0x14023FFE0 (KeRemoveQueue.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall __noreturn sub_1403DE2B0(PRKQUEUE Queue)
{
  __int64 v2; // rdx
  PLIST_ENTRY v3; // rcx

  while ( 1 )
  {
    do
      v3 = KeRemoveQueue(Queue, 0, 0LL);
    while ( v3 == (PLIST_ENTRY)128 );
    sub_14042A5E0(v3[1].Blink, v2);
  }
}
