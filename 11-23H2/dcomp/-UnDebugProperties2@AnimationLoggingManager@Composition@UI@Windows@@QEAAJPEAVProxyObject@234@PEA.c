/*
 * XREFs of ?UnDebugProperties2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVDebugPropertyRegistration@234@@Z @ 0x18016EF30
 * Callers:
 *     ?Destroy@DebugPropertyRegistration@Composition@UI@Windows@@MEAAXXZ @ 0x18019FB70 (-Destroy@DebugPropertyRegistration@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029F08 (-UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@@1@AEBI@Z @ 0x18002E5CC (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUReferencedObject@AnimationLoggingManager@Compos.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019D780 (-ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Compositio.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationLoggingManager::UnDebugProperties2(
        Windows::UI::Composition::AnimationLoggingManager *this,
        struct Windows::UI::Composition::ProxyObject *a2,
        struct Windows::UI::Composition::DebugPropertyRegistration *a3)
{
  unsigned int v6; // r10d
  _QWORD *v7; // r11
  CompObjectDiagnosticsPrincipal *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  DirectComposition::CDevice *v11; // rcx
  int v12; // edx
  _DWORD v14[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = *((_DWORD *)a2 + 32);
  std::_Tree<std::_Tmap_traits<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 19,
    (__int64)v14,
    &v16);
  if ( !*(_BYTE *)(v15 + 25) && v6 >= *(_DWORD *)(v15 + 32) && v15 != *v7 )
  {
    v8 = *(CompObjectDiagnosticsPrincipal **)(v15 + 48);
    if ( v8 )
    {
      if ( CompObjectDiagnosticsPrincipal::ForgetProperties(v8, a3) )
      {
        Windows::UI::Composition::AnimationLoggingManager::UnregisterDebugPropertyForObject(this, *((_DWORD *)a2 + 32));
        *((_DWORD *)a2 + 31) &= ~4u;
        v9 = *((_QWORD *)this + 3);
        v10 = *((_DWORD *)a2 + 32);
        v14[1] = 0;
        v14[2] = 0;
        v11 = *(DirectComposition::CDevice **)(v9 + 456);
        v14[3] = 0;
        v12 = *((_DWORD *)this + 32);
        v14[0] = v10;
        DirectComposition::CDevice::ResourceSetBufferProperty(v11, v12, 5, v14, 0x10uLL);
      }
    }
  }
  return 0LL;
}
