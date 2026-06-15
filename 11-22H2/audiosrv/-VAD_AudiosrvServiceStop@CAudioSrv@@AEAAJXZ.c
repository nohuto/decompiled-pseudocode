/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800F0CC4
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0560 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180014950 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x18005590C (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 *     ?reset@?$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180065D48 (-reset@-$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800E9CA0 (WPP_SF_D.c)
 *     ?Shutdown@AudioSessionManagerProvider@@YAXXZ @ 0x1800EA424 (-Shutdown@AudioSessionManagerProvider@@YAXXZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800F0488 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800F0848 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 *     ?DestroyDeviceGraphManager@@YAXXZ @ 0x180106A98 (-DestroyDeviceGraphManager@@YAXXZ.c)
 *     ?Shutdown@EffectPackConfigurationManager@@QEAAXXZ @ 0x18010E438 (-Shutdown@EffectPackConfigurationManager@@QEAAXXZ.c)
 *     ?DestroySpatialAudioResourceManager@@YAXXZ @ 0x180134228 (-DestroySpatialAudioResourceManager@@YAXXZ.c)
 *     ?UninitializeEndpointCharacteristicsCache@@YAJXZ @ 0x1801503B8 (-UninitializeEndpointCharacteristicsCache@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  CAudioSessionManager *v2; // rcx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  RPC_STATUS v7; // eax
  EffectPackConfigurationManager *v8; // rcx
  __int64 v9; // rcx
  CSerialWorkQueue *v10; // rax
  AudioSessionManagerProvider *v11; // rcx
  void *v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 26) )
  {
    v3 = Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create();
    v4 = Windows::Internal::ServiceModuleBase::Uninitialize((Windows::Internal::ServiceModuleBase *)v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x626,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *((_DWORD *)this + 26) = 0;
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 25) )
  {
    if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v2 + 28) & 4) != 0
      && *((_BYTE *)v2 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v2 + 2), 0x27u, (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
    }
    v7 = RpcServerUnregisterIfEx(&unk_18016EBA0, 0LL, 1);
    if ( v7
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x28u,
        (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids,
        v7);
    }
    *((_DWORD *)this + 25) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  v8 = (EffectPackConfigurationManager *)*((_QWORD *)this + 70);
  if ( v8 )
  {
    EffectPackConfigurationManager::Shutdown(v8);
    v9 = *((_QWORD *)this + 70);
    *((_QWORD *)this + 70) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  EnterCriticalSection(&g_csVadList);
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList);
  LeaveCriticalSection(&g_csVadList);
  v10 = (CSerialWorkQueue *)(*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)this + 128LL))(this);
  CSerialWorkQueue::Shutdown(v10);
  DestroySpatialAudioResourceManager();
  AudioSessionManagerProvider::Shutdown(v11);
  if ( g_AudioResourceManager )
  {
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 16LL))(g_AudioResourceManager);
    g_AudioResourceManager = 0LL;
  }
  DestroyDeviceGraphManager();
  v12 = (void *)g_AudioHealthMonitor;
  if ( g_AudioHealthMonitor )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)&g_AudioHealthMonitor + 24LL));
    operator delete(v12);
  }
  g_AudioHealthMonitor = 0LL;
  UninitializeEndpointCharacteristicsCache();
  if ( g_CustomEndpointResourceManagerProvider )
  {
    (*(void (__fastcall **)(struct IEndpointResourceManagerProvider *))(*(_QWORD *)g_CustomEndpointResourceManagerProvider
                                                                      + 32LL))(g_CustomEndpointResourceManagerProvider);
    wil::com_ptr_t<IEndpointResourceManagerProvider,wil::err_returncode_policy>::reset();
  }
  if ( g_pVolumeProvider )
  {
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 48LL))(g_pVolumeProvider);
    if ( g_pVolumeProvider )
    {
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 16LL))(g_pVolumeProvider);
      g_pVolumeProvider = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)&g_PolicyConfig);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids, 0);
  }
  return 0LL;
}
