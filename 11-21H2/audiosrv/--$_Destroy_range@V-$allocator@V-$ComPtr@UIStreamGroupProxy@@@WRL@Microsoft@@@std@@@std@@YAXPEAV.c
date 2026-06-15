/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x18002786C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDev.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IStreamGroupProxy__std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IStreamGroupProxy__const_&__::_1_::catch$0 @ 0x1800DE566 (_std--vector_Microsoft--WRL--ComPtr_IStreamGroupProxy__std--allocator_Microsoft--WRL--ComPtr_ISt.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE774 (--$_Uninitialized_move@PEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@U.c)
 *     ??1?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800DF298 (--1-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamGroupPr.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DFDF8 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800E13F4 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 *     _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x1800F7BE0 (_lambda_cbfc2ac73cdc91d5edb18bccca546a72_--operator().c)
 *     _lambda_b2b2edcacba8310f83e1be2040a50861_::operator() @ 0x1800FBDC4 (_lambda_b2b2edcacba8310f83e1be2040a50861_--operator().c)
 *     _lambda_51b537ae7010953ae74a8f2f5f133c3e_::operator() @ 0x1800FE60C (_lambda_51b537ae7010953ae74a8f2f5f133c3e_--operator().c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180100034 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x180100160 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AV-$uniqu.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x180100BC8 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x180101470 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     ?DoHfpRenderStreamGroupsExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x180114FA4 (-DoHfpRenderStreamGroupsExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManager@@AEAAJPEAVCEndpointStore@@@Z @ 0x180115394 (-FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManager@@AEAAJPEAVCEndpoint.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
