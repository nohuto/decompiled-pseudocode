/*
 * XREFs of ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x1800B40C0
 * Callers:
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180151040 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18000F5C0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x180070B6C (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x1800AA6F4 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@2@QEAU32@@Z @ 0x1800B67F4 (-_Unchecked_erase@-$list@U-$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V-$allocator@U-$pa.c)
 */

void __fastcall ForegroundManager::ClearInputDelegation(
        ForegroundManager *this,
        struct InputSite *a2,
        char a3,
        const char *a4)
{
  __int64 v6; // rcx
  __int64 i; // r11
  __int64 v8; // rsi
  unsigned __int64 appended; // rax
  _QWORD *v10; // r11
  unsigned __int8 *v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned __int64 v15; // rsi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  __int64 v18; // [rsp+30h] [rbp-18h] BYREF
  char v19; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x239,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  InputSite::GetIdForNamespace((__int64)a2, (__int64)&v18, 1);
  if ( v19 )
  {
    i = *((_QWORD *)this + 20);
    v8 = v18;
LABEL_5:
    for ( i = *(_QWORD *)i;
          i != *((_QWORD *)this + 20);
          i = std::list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>::_Unchecked_erase((char *)this + 160) )
    {
      if ( *(_QWORD *)(i + 24) != v8 )
        goto LABEL_5;
      appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)(i + 16), 4uLL);
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
        (__int64)this + 152,
        v10,
        appended & *((_QWORD *)this + 25));
    }
    v11 = (unsigned __int8 *)*((_QWORD *)this + 12);
LABEL_10:
    v11 = *(unsigned __int8 **)v11;
    while ( v11 != *((unsigned __int8 **)this + 12) )
    {
      if ( *((_QWORD *)v11 + 3) != v8 )
        goto LABEL_10;
      v12 = std::_Fnv1a_append_bytes(v6, v11 + 16, 4uLL);
      std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
        (__int64)this + 88,
        v11,
        v12 & *((_QWORD *)this + 17));
      std::list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>::_Unchecked_erase((char *)this + 96);
    }
  }
  if ( (a3 & 0xE) != 0 && (a3 & 1) == 0 )
  {
    v13 = *((_DWORD *)this + 56);
    v14 = *((_DWORD *)this + 57);
    v15 = *((_QWORD *)this + 27);
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v15);
    ForegroundManager::UpdateForegroundTarget(this, v15, ViewIdFromWindowId, v13, v14, 0);
  }
}
