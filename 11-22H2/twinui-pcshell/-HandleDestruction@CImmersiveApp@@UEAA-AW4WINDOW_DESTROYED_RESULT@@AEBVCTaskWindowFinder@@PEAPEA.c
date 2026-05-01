/*
 * XREFs of ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18001DF70
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18001D8CC (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x18001DDE8 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18001E9B8 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800206BC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800212C0 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18002368C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023778 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180059A68 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleDestruction(
        __int64 a1,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3)
{
  unsigned int v6; // esi
  CImmersiveApp::CImmersiveWindowCollection *v7; // r14
  __int64 v8; // rbp
  bool v9; // bl
  int v10; // ebx
  bool v11; // r14
  char v12; // bl
  struct IApplicationPresentationLayer *v14; // rdx
  int v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v7 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  v8 = a1 + 432;
  v17 = 0LL;
  v9 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
              a1 + 432,
              a2,
              a3,
              &v18) >= 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  if ( v9 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::RemoveAt(
      v8,
      v18);
    return 7;
  }
  else if ( (int)CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(v7, a2, (bool *)&v17, a3) >= 0 )
  {
    v6 = 2;
    v10 = *(_DWORD *)(a1 + 464) & 2;
    v11 = (*(_DWORD *)(a1 + 464) & 4) != 0 && !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v7);
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)(a1 - 112));
    if ( *(_QWORD *)(a1 + 352) )
    {
      if ( v11 )
      {
        GetSystemTimeAsFileTime((LPFILETIME)(a1 + 596));
        if ( v10 )
          *(_QWORD *)(a1 + 580) = *(_QWORD *)(a1 + 596);
        else
          v6 = 1;
        *(_DWORD *)(a1 + 464) &= ~2u;
        v14 = *(struct IApplicationPresentationLayer **)(a1 + 328);
        *(_DWORD *)(a1 + 512) |= 1u;
        CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 512), v14);
      }
      else if ( (_BYTE)v17 && v10 )
      {
        *(_DWORD *)(a1 + 464) &= ~2u;
        v6 = 4;
      }
      else
      {
        v6 = 3;
      }
    }
    else
    {
      v12 = *(_BYTE *)(a1 + 616);
      *(_DWORD *)(a1 + 464) = 0;
      *(_DWORD *)(a1 + 552) = 0;
      CImmersiveApp::_ClearForegroundBoostHintedProcess((HANDLE *)(a1 - 112));
      *(_DWORD *)(a1 + 692) = 1;
      *(_OWORD *)(a1 + 556) = 0LL;
      *(_OWORD *)(a1 + 572) = 0LL;
      *(_OWORD *)(a1 + 588) = 0LL;
      GetSystemTimeAsFileTime((LPFILETIME)(a1 + 564));
      CImmersiveApp::_RemoveFromChain((CImmersiveApp *)(a1 - 112));
      v6 = (v12 != 0) + 5;
    }
    if ( !*(_BYTE *)(a1 + 616) && v6 == 5 )
    {
      v15 = 6;
      v16 = 0LL;
      CImmersiveApp::_ScheduleApplicationNotifications(
        (CImmersiveApp *)(a1 - 112),
        (const struct APP_CHANGE_INFO *const)&v15,
        1uLL);
    }
  }
  return v6;
}
