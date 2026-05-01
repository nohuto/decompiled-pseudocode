/*
 * XREFs of ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800C66F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18002E340 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180059118 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1800C6208 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800C6880 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800C6984 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800C6D60 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800C6E9C (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18017C784 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleDestruction(
        __int64 a1,
        const struct CTaskWindowFinder *a2,
        struct ITaskWindow **a3)
{
  unsigned int v6; // esi
  CImmersiveApp::CImmersiveWindowCollection *v7; // r14
  _QWORD *v8; // rbp
  bool v9; // bl
  int v10; // ebx
  bool v11; // r14
  char v12; // bl
  struct IApplicationPresentationLayer *v14; // rdx
  int v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v7 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176);
  v8 = (_QWORD *)(a1 + 432);
  v17 = 0LL;
  v9 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
              a1 + 432,
              a2,
              a3,
              &v18) >= 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  if ( v9 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::RemoveAt(
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
        CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 512), v14);
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
      CImmersiveApp::_ClearForegroundBoostHintedProcess((void **)(a1 - 112));
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
