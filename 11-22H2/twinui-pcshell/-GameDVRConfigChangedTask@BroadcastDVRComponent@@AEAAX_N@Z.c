/*
 * XREFs of ?GameDVRConfigChangedTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801B2A74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___::Run @ 0x1801B2A60 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ada185189abb389ce449ddc8fe061d95___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1803DBAC4 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BroadcastDVRComponent::GameDVRConfigChangedTask(BroadcastDVRComponent *this, char a2)
{
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-10h]
  bool v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = *((_QWORD *)this + 38);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v10,
    (_QWORD *)this + 39);
  v4 = v10;
  if ( v10 && *(_BYTE *)(v10 + 16) && a2 )
  {
    v5 = *(_DWORD *)(v10 + 56);
    v6 = (*(_BYTE *)(v10 + 18) != 0 ? 65 : 1) | 2;
    if ( (v5 & 8) == 0 )
      v6 = *(_BYTE *)(v10 + 18) != 0 ? 65 : 1;
    v7 = v6 | 4;
    if ( (v5 & 0x10) == 0 )
      v7 = v6;
    v8 = v7 | 8;
    if ( (v5 & 0x20) == 0 )
      v8 = v7;
    v9 = v8 | 0x10;
    if ( (v5 & 0x40) == 0 )
      v9 = v8;
    v12 = (*(_DWORD *)(v10 + 56) & 2) != 0;
    BroadcastDVRComponent::SendShellNotificationToDVR2(this, 2LL, v10, v9, (v5 & 2) == 0, &v12);
    if ( v12 )
      *(_DWORD *)(v4 + 56) |= 2u;
  }
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
}
