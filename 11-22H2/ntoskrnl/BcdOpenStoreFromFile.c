/*
 * XREFs of BcdOpenStoreFromFile @ 0x140A5C3B8
 * Callers:
 *     BapdpProcessBCDCache @ 0x140B38EBC (BapdpProcessBCDCache.c)
 * Callees:
 *     BcdOpenStore @ 0x14080561C (BcdOpenStore.c)
 */

NTSTATUS __cdecl BcdOpenStoreFromFile(UNICODE_STRING *BcdFilePath, PHANDLE BcdStoreHandle)
{
  if ( BcdFilePath )
    return BcdOpenStore(BcdFilePath, BCD_OPEN_NONE, BcdStoreHandle);
  else
    return -1073741585;
}
