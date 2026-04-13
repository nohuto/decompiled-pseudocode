/*
 * XREFs of ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEB_WI@Z @ 0x1800AC678
 * Callers:
 *     ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x1800AF874 (-UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTi.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002F774 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        unsigned int a3)
{
  UINT32 v6; // eax

  hstringHeader[1].Reserved.Reserved1 = 0LL;
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(a3, (int)sourceString, a3);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, sourceString, v6, a3);
  return hstringHeader;
}
