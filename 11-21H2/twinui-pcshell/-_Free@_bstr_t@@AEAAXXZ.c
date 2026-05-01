/*
 * XREFs of ?_Free@_bstr_t@@AEAAXXZ @ 0x18031A368
 * Callers:
 *     ??1_bstr_t@@QEAA@XZ @ 0x18031715C (--1_bstr_t@@QEAA@XZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1803188B8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18031BF18 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803BDF44 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1805E4470 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1805E4824 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x1805E5610 (--1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1805E5680 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Release@Data_t@_bstr_t@@QEAAKXZ @ 0x18022B8BE (-Release@Data_t@_bstr_t@@QEAAKXZ.c)
 */

void __fastcall _bstr_t::_Free(_bstr_t::Data_t **this)
{
  _bstr_t::Data_t *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    _bstr_t::Data_t::Release(v2);
    *this = 0LL;
  }
}
