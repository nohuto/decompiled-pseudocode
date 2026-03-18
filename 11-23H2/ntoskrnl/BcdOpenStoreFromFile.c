/*
 * XREFs of BcdOpenStoreFromFile @ 0x140A5C348
 * Callers:
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 * Callees:
 *     BcdOpenStore @ 0x140803098 (BcdOpenStore.c)
 */

__int64 __fastcall BcdOpenStoreFromFile(unsigned __int16 *a1, __int64 *a2)
{
  if ( a1 )
    return BcdOpenStore(a1, 0, a2);
  else
    return 3221225711LL;
}
