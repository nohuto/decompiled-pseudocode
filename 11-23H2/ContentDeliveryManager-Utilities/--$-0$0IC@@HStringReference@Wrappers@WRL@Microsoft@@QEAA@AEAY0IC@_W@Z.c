/*
 * XREFs of ??$?0$0IC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IC@_W@Z @ 0x1800AB704
 * Callers:
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800AD0E0 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x1800B093C (-SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@Applicat.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002F774 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180030D64 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003B094 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        unsigned int a3)
{
  unsigned __int64 v5; // rbx
  UINT32 v6; // eax

  v5 = -1LL;
  do
    ++v5;
  while ( sourceString[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    JUMPOUT(0x1800AB767LL);
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v5, (int)sourceString, a3);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, sourceString, v6, v5);
  return hstringHeader;
}
