/*
 * XREFs of ??1MPCConstantManager@@UEAA@XZ @ 0x18009468C
 * Callers:
 *     ??_GMPCConstantManager@@UEAAPEAXI@Z @ 0x1800948A0 (--_GMPCConstantManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@1@@Z @ 0x180093DE0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4InputType@@V-$map@V-$basic_string@GU-$ch.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCConstantManager::~MPCConstantManager(MPCConstantManager *this)
{
  void **v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v2 = (void **)((char *)this + 72);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>,void *>>>(
    (__int64)this + 72,
    (__int64)this + 72,
    *(void ***)(*((_QWORD *)this + 9) + 8LL));
  std::_Deallocate<16,0>(*v2, 0x38uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>,void *>>>(
    (__int64)this + 56,
    (__int64)this + 56,
    *(void ***)(*((_QWORD *)this + 7) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 7), 0x38uLL);
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, v3, v4, v5);
}
