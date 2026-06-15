/*
 * XREFs of ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800C5C24
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800C54A0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x18003ED24 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x180042AEC (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800C50C0 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800C57A0 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800C61CC (WPP_SF_D.c)
 *     ?Shutdown@AudioSessionManagerProvider@@YAXXZ @ 0x1800E2BA4 (-Shutdown@AudioSessionManagerProvider@@YAXXZ.c)
 *     ?DestroyDeviceGraphManager@@YAXXZ @ 0x1800F8BC0 (-DestroyDeviceGraphManager@@YAXXZ.c)
 *     ?DestroySpatialAudioResourceManager@@YAXXZ @ 0x1801266C8 (-DestroySpatialAudioResourceManager@@YAXXZ.c)
 *     ?UninitializeEndpointCharacteristicsCache@@YAJXZ @ 0x18014CDDC (-UninitializeEndpointCharacteristicsCache@@YAJXZ.c)
 */

__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStop(CAudioSrv *this)
{
  CEndpointStoreCache *v2; // rcx
  __int64 *v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // eax
  CSerialWorkQueue *v8; // rax
  AudioSessionManagerProvider *v9; // rcx
  void *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
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
        (void *)0x612,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *((_DWORD *)this + 26) = 0;
    v2 = WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 25) )
  {
    if ( v2 != (CEndpointStoreCache *)&WPP_GLOBAL_Control && (*((_BYTE *)v2 + 28) & 4) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v2 + 2), 39LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
    v7 = RpcServerUnregisterIfEx(&unk_18016A680, 0LL, 1);
    if ( v7
      && WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids, v7);
    }
    *((_DWORD *)this + 25) = 0;
  }
  if ( g_DuckingManager )
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 24LL))(g_DuckingManager);
  EnterCriticalSection(&g_csVadList);
  v12 = &g_csVadList;
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v12);
  v8 = (CSerialWorkQueue *)(*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)this + 120LL))(this);
  CSerialWorkQueue::Shutdown(v8);
  DestroySpatialAudioResourceManager();
  AudioSessionManagerProvider::Shutdown(v9);
  if ( g_AudioResourceManager )
  {
    (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 16LL))(g_AudioResourceManager);
    g_AudioResourceManager = 0LL;
  }
  DestroyDeviceGraphManager();
  v10 = (void *)g_AudioHealthMonitor;
  if ( g_AudioHealthMonitor )
  {
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)&g_AudioHealthMonitor + 24LL));
    operator delete(v10);
  }
  g_AudioHealthMonitor = 0LL;
  UninitializeEndpointCharacteristicsCache();
  if ( g_pVolumeProvider )
  {
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 16LL))(g_pVolumeProvider);
    g_pVolumeProvider = 0LL;
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&g_PolicyConfig);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids, 0LL);
  }
  return 0LL;
}
