/*
 * XREFs of ?GetInputSite@DWMFocusedInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x18000E650
 * Callers:
 *     <none>
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
__int64 *__fastcall DWMFocusedInputTarget::GetInputSite(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int64 InputSiteFromId; // rax
  __int64 v12; // rcx
  struct InputSiteManager *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = *(_DWORD *)(a1 + 36);
    if ( v5 )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v5);
      InputSiteManager = ISMStatics::GetInputSiteManager();
      InputSiteFromId = InputSiteManager::GetInputSiteFromId(InputSiteManager, &v16, 1LL, WindowIdFromViewId);
      Microsoft::WRL::ComPtr<InputSite>::operator=(v4, InputSiteFromId);
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( !*v4 )
      {
        v13 = ISMStatics::GetInputSiteManager();
        v14 = (_QWORD *)*((_QWORD *)v13 + 7);
        v15 = (_QWORD *)*((_QWORD *)v13 + 8);
        while ( v14 != v15 )
        {
          if ( *(_BYTE *)(*v14 + 480LL)
            && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v14 + 48LL)) == *(_DWORD *)(a1 + 36) )
          {
            Microsoft::WRL::ComPtr<InputSite>::operator=(v4, *v14);
            break;
          }
          ++v14;
        }
      }
    }
  }
  v6 = *v4;
  *a2 = *v4;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
