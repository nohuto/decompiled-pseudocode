/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x180390134
 * Callers:
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801821A4 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180182318 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18018251C (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x1802D243C (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1802D2494 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1802EB77A (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1803E5FB4 (--1_variant_t@@QEAA@XZ.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x1804947D8 (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1804956F8 (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180738EAC (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1807393D4 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x18073940C (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18073951C (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180739760 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180739DD0 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn _com_issue_error(char *a1)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x26,
    (int)"pcshell\\twinui\\dll\\twinui.cpp",
    (const char *)(unsigned int)a1,
    v1);
}
