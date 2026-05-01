/*
 * XREFs of ?SendNotificationIfGameAppInFocusTask@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@@Z @ 0x1803DB99C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e___::Run @ 0x1803DB6D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ef26dee21aeac91685b7d7242343189e___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1803DBAC4 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::SendNotificationIfGameAppInFocusTask(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-10h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v12 = *(_QWORD *)(a1 + 304);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v10,
    (_QWORD *)(a1 + 312));
  v3 = v10;
  if ( v10 && *(_BYTE *)(v10 + 16) && *(_QWORD *)v10 )
  {
    v4 = *(_DWORD *)(v10 + 56);
    LOBYTE(v13) = (v4 & 2) != 0;
    v5 = (*(_BYTE *)(v10 + 18) != 0 ? 65 : 1) | 2;
    if ( (v4 & 8) == 0 )
      v5 = *(_BYTE *)(v10 + 18) != 0 ? 65 : 1;
    v6 = v5 | 4;
    if ( (v4 & 0x10) == 0 )
      v6 = v5;
    v7 = v6 | 8;
    if ( (v4 & 0x20) == 0 )
      v7 = v6;
    v8 = v7 | 0x10;
    if ( (v4 & 0x40) == 0 )
      v8 = v7;
    BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2LL, v10, v8, (v4 & 2) == 0, &v13);
    if ( (_BYTE)v13 )
      *(_DWORD *)(v3 + 56) |= 2u;
  }
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  return 0LL;
}
