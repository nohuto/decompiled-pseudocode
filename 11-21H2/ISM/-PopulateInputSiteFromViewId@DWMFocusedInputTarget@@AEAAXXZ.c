/*
 * XREFs of ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18019CAB4
 * Callers:
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z @ 0x18019C350 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z.c)
 * Callees:
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180019A08 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180019AF0 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180019B30 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18004E0F0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180086B08 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008B160 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z @ 0x180144B98 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSite@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMFocusedInputTarget::PopulateInputSiteFromViewId(DWMFocusedInputTarget *this)
{
  int v2; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *InputSiteFromId; // rax
  __int64 v7; // rcx
  struct InputSiteManager *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v2);
    InputSiteManager = ISMStatics::GetInputSiteManager();
    InputSiteFromId = InputSiteManager::GetInputSiteFromId((__int64)InputSiteManager, &v11, 1, WindowIdFromViewId);
    Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)this + 10, (char *)InputSiteFromId);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( !*((_QWORD *)this + 10) )
    {
      v8 = ISMStatics::GetInputSiteManager();
      v9 = (__int64 *)*((_QWORD *)v8 + 7);
      v10 = (__int64 *)*((_QWORD *)v8 + 8);
      while ( v9 != v10 )
      {
        if ( *(_BYTE *)(*v9 + 480)
          && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v9 + 48)) == *((_DWORD *)this + 17) )
        {
          Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)this + 10, *v9);
          return;
        }
        ++v9;
      }
    }
  }
}
