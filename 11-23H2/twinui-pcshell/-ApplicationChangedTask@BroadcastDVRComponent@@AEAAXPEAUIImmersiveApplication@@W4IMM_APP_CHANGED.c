/*
 * XREFs of ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180083BA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::Run @ 0x180083B90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083DE4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?4$$T$$T$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU?$pair@$$T$$T@1@@Z @ 0x18009C4AC (--$-4$$T$$T$0A@@-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRA.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18009D394 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803D12D8 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1803D12D8.c)
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D52DC (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1803DBAC4 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall BroadcastDVRComponent::ApplicationChangedTask(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // r12
  struct IApplicationView *v7; // rdi
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rsi
  __int64 *AddressOf; // rax
  int (__fastcall *v11)(__int64, __int64, GUID *, __int64 *); // rbx
  char v12; // r12
  struct BroadcastDVRActiveAppInfo *v13; // rsi
  int (__fastcall *v15)(__int64, __int64, GUID *, __int64 *); // rbx
  int v16; // r10d
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rbx
  int (__fastcall *v24)(__int64, __int64 *); // rsi
  __int64 *v25; // rax
  struct BroadcastDVRActiveAppInfo *v26; // rsi
  char v27; // cl
  int v28; // r10d
  BOOL v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rbx
  std::_Ref_count_base *v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-50h] BYREF
  struct IApplicationView *v39; // [rsp+38h] [rbp-48h] BYREF
  __int64 v40; // [rsp+40h] [rbp-40h] BYREF
  __int64 v41; // [rsp+48h] [rbp-38h] BYREF
  __int64 v42; // [rsp+50h] [rbp-30h] BYREF
  struct BroadcastDVRActiveAppInfo *v43; // [rsp+58h] [rbp-28h] BYREF
  std::_Ref_count_base *v44; // [rsp+60h] [rbp-20h]
  struct IApplicationView *v45; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v46[8]; // [rsp+70h] [rbp-10h] BYREF
  std::_Ref_count_base *v47; // [rsp+78h] [rbp-8h]
  __int64 v48; // [rsp+C0h] [rbp+40h] BYREF
  int v49; // [rsp+D8h] [rbp+58h] BYREF

  v41 = 0LL;
  v40 = 0LL;
  v6 = (_QWORD *)(a1 + 304);
  v39 = *(struct IApplicationView **)(a1 + 304);
  v7 = v39;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v39);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v43,
    a1 + 312);
  v49 = 0;
  if ( v7 )
  {
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v39, &v41) >= 0 )
    {
      v8 = v41;
      v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 24LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v40);
      if ( v9(v8, AddressOf) >= 0
        && (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v40 + 104LL))(v40, a2, &v49) >= 0
        && v49 )
      {
        if ( a3 == 8 )
        {
          v42 = 0LL;
          v38 = 0LL;
          v11 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
          v12 = 1;
          if ( v11(a2, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v38) >= 0
            && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 32LL))(v38, &v42) >= 0 )
          {
            v13 = v43;
            if ( v43 )
            {
              if ( v42 != *(_QWORD *)v43 )
              {
                *(_QWORD *)v43 = v42;
                v15 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
                if ( v15(a2, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v38) >= 0 )
                {
                  v48 = 0LL;
                  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 32LL))(v38, &v48);
                  *((_QWORD *)v13 + 1) = v48;
                }
                if ( *((_BYTE *)v13 + 16) )
                {
                  v45 = v7;
                  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v45);
                  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
                    v46,
                    &v43);
                  std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
                    a1 + 280,
                    &v45);
                  if ( v47 )
                    std::_Ref_count_base::_Decref(v47);
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v45);
                  v16 = *((_DWORD *)v13 + 14);
                  LOBYTE(v48) = (v16 & 2) != 0;
                  if ( !*((_BYTE *)v13 + 16) || (v16 & 2) != 0 )
                    v12 = 0;
                  v17 = (*((_BYTE *)v13 + 16) != 0) | 0x40;
                  if ( !*((_BYTE *)v13 + 18) )
                    v17 = *((_BYTE *)v13 + 16) != 0;
                  v18 = v17 | 2;
                  if ( (v16 & 8) == 0 )
                    v18 = v17;
                  v19 = v18 | 4;
                  if ( (v16 & 0x10) == 0 )
                    v19 = v18;
                  v20 = v19 | 8;
                  if ( (v16 & 0x20) == 0 )
                    v20 = v19;
                  v21 = v20 | 0x10;
                  if ( (*((_BYTE *)v13 + 56) & 0x40) == 0 )
                    v21 = v20;
                  BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2LL, v13, v21, v12, &v48);
                  if ( (_BYTE)v48 )
                    *((_DWORD *)v13 + 14) |= 2u;
                  BroadcastDVRComponent::EvaluateAppForGameMode((BroadcastDVRComponent *)a1, v7, v13);
                  if ( (*((_DWORD *)v13 + 14) & 0x104) == 0 )
                    BroadcastDVRComponent::AddGameToMruList((BroadcastDVRComponent *)a1, v13);
                }
              }
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
        }
        else if ( a3 == 6 )
        {
          v22 = **(_QWORD **)(a1 + 264);
          v48 = v22;
          while ( v22 != *(_QWORD *)(a1 + 264) )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v39, v22 + 32);
            if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v39, &v41) >= 0 )
            {
              LODWORD(v38) = 0;
              v23 = v41;
              v24 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 24LL);
              v25 = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v40);
              if ( v24(v23, v25) >= 0
                && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v40 + 104LL))(v40, a2, &v38) >= 0
                && (_DWORD)v38 )
              {
                std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(&v43, v22 + 40);
                v26 = v43;
                if ( *(_QWORD *)v43 )
                {
                  v27 = *((_BYTE *)v43 + 16);
                  if ( v27 || (*((_BYTE *)v43 + 56) & 2) != 0 )
                  {
                    v28 = *((_DWORD *)v43 + 14);
                    LOBYTE(v48) = (v28 & 2) != 0;
                    v29 = v27 != 0;
                    v30 = v29 | 0x40;
                    if ( !*((_BYTE *)v43 + 18) )
                      v30 = v29;
                    v31 = v30 | 2;
                    if ( (v28 & 8) == 0 )
                      v31 = v30;
                    v32 = v31 | 4;
                    if ( (v28 & 0x10) == 0 )
                      v32 = v31;
                    v33 = v32 | 8;
                    if ( (v28 & 0x20) == 0 )
                      v33 = v32;
                    v34 = v33 | 0x10;
                    if ( (v28 & 0x40) == 0 )
                      v34 = v33;
                    BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v43, v34, 0, &v48);
                    v6 = (_QWORD *)(a1 + 304);
                  }
                }
                v35 = (__int64)v39;
                if ( v39 == *(struct IApplicationView **)(a1 + 280) )
                  ((void (*)(void))std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>)();
                if ( v35 == *v6 )
                  std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(v6);
                if ( *((_BYTE *)v26 + 20) )
                  --*(_DWORD *)(a1 + 460);
                v36 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
                        a1 + 264,
                        v22);
                v37 = *(std::_Ref_count_base **)(v36 + 48);
                if ( v37 )
                  std::_Ref_count_base::_Decref(v37);
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v36 + 32);
                std::_Deallocate<16,0>(v36, 56LL);
                break;
              }
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v48);
            v22 = v48;
          }
        }
      }
    }
  }
  if ( v44 )
    std::_Ref_count_base::_Decref(v44);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v39);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v40);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v41);
}
