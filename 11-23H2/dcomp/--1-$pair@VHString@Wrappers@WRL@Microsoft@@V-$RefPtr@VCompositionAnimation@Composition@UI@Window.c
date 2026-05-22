/*
 * XREFs of ??1?$pair@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@QEAA@XZ @ 0x18014EE88
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@1@@Z @ 0x18014E548 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$RefPtr.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801948D4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$.c)
 *     ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194E48 (-Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@$0A@@std@@@std@@QEAA_KAEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180195380 (-erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$RefPtr@VCompositionAnimation@.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

HRESULT __fastcall std::pair<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>::~pair<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>(
        __int64 a1)
{
  HRESULT result; // eax

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(a1 + 8));
  result = WindowsDeleteString(*(HSTRING *)a1);
  *(_QWORD *)a1 = 0LL;
  return result;
}
