/*
 * XREFs of ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x1803D99DC
 * Callers:
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803DAD7C (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::Run @ 0x1803DB590 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C468 (--4-$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803D12D8 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1803D12D8.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x1803D5FC4 (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1803DBAC4 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnAddRemoveGameTask(__int64 a1, void *a2, char a3, unsigned int a4, char a5)
{
  int v9; // r9d
  __int64 *v10; // rax
  __int64 *v11; // r15
  std::_Ref_count_base *v12; // rbx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // esi
  char v21; // al
  char v22; // al
  int v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v27; // [rsp+50h] [rbp-20h]
  __int64 v28; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v30; // [rsp+68h] [rbp-8h]
  __int64 *v31; // [rsp+A0h] [rbp+30h] BYREF

  *(_OWORD *)v25 = 0LL;
  v24 = 0LL;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v26,
    (_QWORD *)(a1 + 312));
  GameDVRTraceProvider::BroadcastDVRComponent_OnAddRemoveGameTask(a2, v9);
  v10 = **(__int64 ***)(a1 + 264);
  v31 = v10;
  while ( v10 != *(__int64 **)(a1 + 264) )
  {
    v11 = v10 + 4;
    std::shared_ptr<SnapInteraction::InteractionRecord>::operator=(v25, v10 + 5);
    v12 = v25[0];
    if ( *(void **)v25[0] == a2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v24, v11);
      *((_BYTE *)v12 + 16) = a3 != 0;
      *((_DWORD *)v12 + 14) ^= (*((_DWORD *)v12 + 14) ^ (32 * *(unsigned __int8 *)(a1 + 451))) & 0x20;
      v13 = *((_DWORD *)v12 + 14) ^ (*((_DWORD *)v12 + 14) ^ (*(unsigned __int8 *)(a1 + 452) << 6)) & 0x40;
      *((_DWORD *)v12 + 14) = v13;
      v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 449))) & 8;
      *((_DWORD *)v12 + 14) = v14;
      v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(16 * *(_BYTE *)(a1 + 450))) & 0x10;
      *((_DWORD *)v12 + 14) = v15;
      *((_DWORD *)v12 + 15) = 0;
      LOBYTE(v31) = (v15 & 2) != 0;
      v16 = (*((_BYTE *)v12 + 16) != 0) | 0x40;
      if ( !*((_BYTE *)v12 + 18) )
        v16 = *((_BYTE *)v12 + 16) != 0;
      v17 = v16 | 2;
      if ( (v15 & 8) == 0 )
        v17 = v16;
      v18 = v17 | 4;
      if ( (v15 & 0x10) == 0 )
        v18 = v17;
      v19 = v18 | 8;
      if ( (v15 & 0x20) == 0 )
        v19 = v18;
      v20 = v19 | 0x10;
      if ( (*((_BYTE *)v12 + 56) & 0x40) == 0 )
        v20 = v19;
      if ( a3 )
      {
        v28 = v24;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          &v29,
          v25);
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
          (__int64 *)(a1 + 280),
          &v28);
        if ( v30 )
          std::_Ref_count_base::_Decref(v30);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
        if ( *(_BYTE *)(a1 + 433) )
        {
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2LL, v12, v20, 0, &v31);
          v21 = (char)v31;
          if ( (_BYTE)v31 )
          {
            *((_DWORD *)v12 + 14) &= ~2u;
            *((_DWORD *)v12 + 14) |= 2 * (v21 & 1);
          }
        }
        if ( a5 )
        {
          LOBYTE(v23) = 0;
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, a4, v12, v20, v23, &v31);
          v22 = (char)v31;
          if ( (_BYTE)v31 )
          {
            *((_DWORD *)v12 + 14) &= ~2u;
            *((_DWORD *)v12 + 14) |= 2 * (v22 & 1);
          }
        }
      }
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v31);
    v10 = v31;
  }
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
}
