/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800D34D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800119A0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004D854 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800C9960 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NXZ @ 0x1800D1AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45035559@@@details@wil@@QEAA_NX.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x1800D5D3C (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4ClassicWindowCreationOptions@@@Z @ 0x1800D5F38 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4ClassicWindowCreationOptio.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1800D5FEC (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1801618D0 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180161A30 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18016387C (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802D0518 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1803A84C0 (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall CClassicWindowManager::HandleCreation(
        _QWORD *a1,
        HWND a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  CClassicWindowManager *v10; // r15
  int v11; // ebx
  int v12; // ebx
  int v13; // esi
  int v14; // esi
  __int64 *ClassicWindowOwner; // rax
  char v16; // di
  __int64 v17; // rbx
  int v18; // edi
  int v19; // edi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  CApplicationManagerUtility *v29; // rax
  HWND v30; // rdx
  __int64 v31; // rbx
  int v32; // edi
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // rdi
  int v37; // edi
  int v38; // eax
  __int64 v39; // [rsp+20h] [rbp-60h]
  __int64 v40; // [rsp+20h] [rbp-60h]
  _QWORD v41[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v42[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v44[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v46; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v47; // [rsp+C8h] [rbp+48h] BYREF

  v10 = (CClassicWindowManager *)(a1 - 9);
  v44[0] = a1 + 14;
  v47 = (__int64)a2;
  v46 = 0LL;
  v11 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
          a1 + 15,
          &v47,
          &v46,
          v41,
          v39);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
  if ( v11 >= 0 )
  {
    v27 = v41[0];
    v28 = *(_QWORD *)(a1[15] + 8LL * v41[0]);
    v29 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v28);
    if ( CApplicationManagerUtility::IsValidWindow(v29, v30) )
    {
      v22 = -2147024713;
      v31 = *(_QWORD *)(a1[15] + 8 * v27);
      v46 = v31;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v46);
      v32 = 0;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
        v32 = (a7 & 1) << 13;
      if ( a4 )
      {
        v33 = a4 - 1;
        if ( v33 )
        {
          if ( v33 == 1 )
            CClassicWindowManager::_ChangeWindowType(v10, v31, v32 | 8u);
        }
        else
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
            v34 = v32 | 4u;
          else
            v34 = 4LL;
          if ( (CClassicWindowManager::_ChangeWindowType(v10, v31, v34) & 4) != 0 )
          {
            v41[0] = v10;
            v47 = v31;
            v44[0] = &v47;
            v44[1] = v41;
            CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___(v10, v44);
          }
        }
      }
      else
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
          v35 = v32 | 9u;
        else
          v35 = 9LL;
        CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v10, v31, v35);
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl)
        && a7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 200LL))(v31);
      }
      v25 = &v46;
      goto LABEL_30;
    }
  }
  v12 = 0;
  if ( !a4 )
  {
    v12 = 4;
    goto LABEL_7;
  }
  v13 = a4 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
      goto LABEL_7;
  }
  else
  {
    v12 = 1;
  }
  if ( GetWindow(a2, 4u) )
    v12 |= 4u;
LABEL_7:
  v14 = v12 | 8;
  if ( !(unsigned int)GetPropW(a2, L"ITaskList_Deleted") )
    v14 = v12;
  if ( (v14 & 4) == 0 )
  {
    v46 = 0LL;
    ClassicWindowOwner = &v46;
    v16 = 2;
    v41[0] = 0LL;
LABEL_12:
    v17 = *ClassicWindowOwner;
    v41[0] = *ClassicWindowOwner;
    *ClassicWindowOwner = 0LL;
    goto LABEL_13;
  }
  ClassicWindowOwner = CClassicWindowManager::GetClassicWindowOwner(v10, v42, a2);
  v17 = 0LL;
  v41[0] = 0LL;
  v16 = 1;
  if ( v41 != ClassicWindowOwner )
    goto LABEL_12;
LABEL_13:
  if ( (v16 & 2) != 0 )
  {
    v16 &= ~2u;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
  }
  if ( (v16 & 1) != 0 )
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v42);
  v47 = 0LL;
  v42[0] = (__int64)a2;
  v46 = 0LL;
  v18 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
          a1 + 20,
          v42,
          &v46,
          v43,
          v40);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v46);
  if ( v18 >= 0 )
  {
    v36 = v43[0];
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v47, (__int64 *)(a1[20] + 8LL * v43[0]));
    (*(void (__fastcall **)(_QWORD *, __int64))(a1[19] + 16LL))(a1 + 19, v36);
    v37 = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
    {
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 216LL))(v47);
      v37 = 16 * ((a7 | v38) & 1);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v47 + 32LL))(
            v47,
            v17,
            a5,
            v37 | (unsigned int)v14);
  }
  else
  {
    v19 = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
      v19 = 16 * (a7 & 1);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v47);
    v20 = CClassicWindow::s_CreateInstance(a2, v17, a5, v19 | (unsigned int)v14, &v47);
  }
  v22 = v20;
  if ( v20 < 0 )
    goto LABEL_57;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45035559>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_ID45035559>::GetImpl'::`2'::impl) )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v47 + 200LL))(v47, a7);
  v46 = v47;
  v42[0] = (__int64)&v46;
  v42[1] = (__int64)v10;
  v43[0] = v17;
  v45[0] = v43;
  v45[1] = v42;
  CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(v10, v45);
  if ( (unsigned __int8)CClassicWindowManager::IsWindowPseudoTrayAfterChange(v23, v47, 0LL) )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 112LL))(v47, 32LL);
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v44[0] + 8LL))(v44[0], &v47);
  if ( v22 < 0 )
  {
LABEL_57:
    if ( v47 )
      CClassicWindowManager::RemoveApplicationView(v21, v47, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v47 + 120LL))(v47) )
  {
    CClassicWindowManager::AddApplicationView(v24, v47, a6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v47);
  v25 = v41;
LABEL_30:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v25);
  return v22 >= 0;
}
