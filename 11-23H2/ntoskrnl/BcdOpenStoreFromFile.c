/*
 * XREFs of BcdOpenStoreFromFile @ 0x140A5C5F8
 * Callers:
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 * Callees:
 *     BcdOpenStore @ 0x140803368 (BcdOpenStore.c)
 */

NTSTATUS __cdecl BcdOpenStoreFromFile(UNICODE_STRING *BcdFilePath, PHANDLE BcdStoreHandle)
{
  if ( BcdFilePath )
    return BcdOpenStore(BcdFilePath, BCD_OPEN_NONE, BcdStoreHandle);
  else
    return -1073741585;
}
