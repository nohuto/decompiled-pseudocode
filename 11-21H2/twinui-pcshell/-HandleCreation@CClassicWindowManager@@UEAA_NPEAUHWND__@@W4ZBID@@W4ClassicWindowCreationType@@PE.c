/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1801031C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18003C658 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180103180 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180103668 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801043A8 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1801051D8 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1801053C0 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801054EC (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180105678 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x1801057D8 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180105A54 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1802EFACC (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802F0FA8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CClassicWindowManager::HandleCreation(
        _QWORD *a1,
        CApplicationManagerUtility *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  CClassicWindowManager *v8; // r14
  _QWORD *v9; // r12
  int v10; // ebx
  HWND v11; // rdx
  int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 *ClassicWindowOwner; // rax
  char v16; // di
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  CClassicWindowManager *v22; // rcx
  __int64 *v23; // rcx
  __int64 v25; // r12
  __int64 v26; // rcx
  CApplicationManagerUtility *v27; // rax
  HWND v28; // rdx
  struct IClassicWindow *v29; // rbx
  __int64 v30; // rdi
  __int64 v31[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-10h] BYREF
  struct IClassicWindow *v35; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+48h] BYREF

  v8 = (CClassicWindowManager *)(a1 - 9);
  v9 = a1 + 14;
  v36 = (__int64)a2;
  v35 = 0LL;
  v10 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
          (int)a1 + 120,
          (unsigned int)&v36,
          (unsigned int)&v35,
          (unsigned int)v31);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
  if ( v10 < 0 )
  {
LABEL_2:
    v12 = 0;
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        v12 = 1;
        if ( CApplicationManagerUtility::IsOwnedWindow(a2, v11) )
          v12 = 5;
      }
    }
    else
    {
      v12 = 4;
    }
    v14 = v12 | 8;
    if ( !(unsigned int)GetPropW((HWND)a2, L"ITaskList_Deleted") )
      v14 = v12;
    if ( (v14 & 4) != 0 )
    {
      ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(v8, v32, (HWND)a2);
      v17 = 0LL;
      v36 = 0LL;
      v16 = 1;
      if ( &v36 == ClassicWindowOwner )
      {
LABEL_12:
        if ( (v16 & 2) != 0 )
        {
          v16 &= ~2u;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v31);
        }
        if ( (v16 & 1) != 0 )
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v32);
        v35 = 0LL;
        v32[0] = (__int64)a2;
        if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                    (int)a1 + 152,
                    (int)v32,
                    v13,
                    (int)v31) >= 0 )
        {
          v30 = v31[0];
          Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v35, (__int64 *)(a1[20] + 8 * v31[0]));
          (*(void (__fastcall **)(_QWORD *, __int64))(a1[19] + 16LL))(a1 + 19, v30);
          v18 = (*(__int64 (__fastcall **)(struct IClassicWindow *, __int64, __int64, _QWORD))(*(_QWORD *)v35 + 32LL))(
                  v35,
                  v17,
                  a5,
                  v14);
        }
        else
        {
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
          v18 = CClassicWindow::s_CreateInstance(a2, v17, a5, v14, &v35);
        }
        v20 = v18;
        if ( v18 < 0 )
          goto LABEL_36;
        v32[0] = (__int64)v35;
        v33[0] = v32;
        v33[1] = v8;
        v31[0] = v17;
        v34[0] = v31;
        v34[1] = v33;
        CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(v8, v34);
        if ( (unsigned __int8)CClassicWindowManager::IsWindowPseudoTrayAfterChange(v21, v35, 0LL) )
          (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v35 + 112LL))(v35, 32LL);
        v20 = (*(__int64 (__fastcall **)(_QWORD *, struct IClassicWindow **))(*v9 + 8LL))(v9, &v35);
        if ( v20 < 0 )
        {
LABEL_36:
          if ( v35 )
            CClassicWindowManager::RemoveApplicationView(v19, v35, 0LL);
        }
        else if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v35 + 120LL))(v35) )
        {
          CClassicWindowManager::AddApplicationView(v22, v35);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
        v23 = &v36;
        goto LABEL_25;
      }
    }
    else
    {
      v31[0] = 0LL;
      ClassicWindowOwner = v31;
      v16 = 2;
    }
    v17 = *ClassicWindowOwner;
    v36 = *ClassicWindowOwner;
    *ClassicWindowOwner = 0LL;
    goto LABEL_12;
  }
  v25 = v31[0];
  v26 = *(_QWORD *)(a1[15] + 8 * v31[0]);
  v27 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
  if ( !CApplicationManagerUtility::IsValidWindow(v27, v28) )
  {
    v9 = a1 + 14;
    goto LABEL_2;
  }
  v20 = -2147024713;
  v29 = *(struct IClassicWindow **)(a1[15] + 8 * v25);
  v35 = v29;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
  if ( a4 )
  {
    if ( a4 == 1 && (CClassicWindowManager::_ChangeWindowType(v8, v29, 4LL) & 4) != 0 )
    {
      v31[0] = (__int64)v8;
      v36 = (__int64)v29;
      v32[0] = (__int64)&v36;
      v32[1] = (__int64)v31;
      CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___(v8, v32);
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v8, v29, 9LL);
  }
  v23 = (__int64 *)&v35;
LABEL_25:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v23);
  return v20 >= 0;
}
