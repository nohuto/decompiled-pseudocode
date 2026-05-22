/*
 * XREFs of ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800269EC
 * Callers:
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z @ 0x1800261B8 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180022308 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180023B44 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180023B80 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009DCC4 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800A2288 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18013F7C8 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x1801638D0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMFocusedInputTarget::PopulateInputSiteFromViewId(DWMFocusedInputTarget *this)
{
  unsigned int v2; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  char *InputSiteFromId; // rax
  __int64 v7; // rcx
  struct InputSiteManager *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v2);
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(
                                (__int64)InputSiteManager,
                                (__int64)&v11,
                                1,
                                WindowIdFromViewId);
    Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)this + 10, InputSiteFromId);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( !*((_QWORD *)this + 10) )
    {
      v8 = ISMStatics::GetInputSiteManager();
      v9 = (_QWORD *)*((_QWORD *)v8 + 7);
      v10 = (_QWORD *)*((_QWORD *)v8 + 8);
      while ( v9 != v10 )
      {
        if ( *(_BYTE *)(*v9 + 480LL)
          && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v9 + 48LL)) == *((_DWORD *)this + 17) )
        {
          Microsoft::WRL::ComPtr<InputSite>::operator=((char *)this + 80, *v9);
          return;
        }
        ++v9;
      }
    }
  }
}
