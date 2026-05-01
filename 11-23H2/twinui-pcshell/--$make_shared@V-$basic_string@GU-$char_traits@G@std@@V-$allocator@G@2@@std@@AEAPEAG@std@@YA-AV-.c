/*
 * XREFs of ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x1807392F0
 * Callers:
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18073951C (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<std::wstring,unsigned short * &>(_QWORD *a1, _WORD **a2)
{
  _DWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x30uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<std::wstring>::`vftable';
  std::wstring::wstring((_QWORD *)v5 + 2, *a2);
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
