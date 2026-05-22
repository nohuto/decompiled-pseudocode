/*
 * XREFs of ??0?$unordered_map@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$hash@_J@std@@U?$equal_to@_J@8@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@@std@@QEAA@XZ @ 0x1800A4DCC
 * Callers:
 *     ??$make_shared@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@$$V@std@@YA?AV?$shared_ptr@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@@0@XZ @ 0x1800A4B08 (--$make_shared@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@$$V@std@@YA-AV-$shared_ptr@.c)
 *     ??1SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A50C0 (--1SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@1@AEBV?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@1@@Z @ 0x1800A4D58 (--0-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@.c)
 */

__int64 __fastcall std::unordered_map<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::unordered_map<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>(
    a1,
    &v3);
  return a1;
}
