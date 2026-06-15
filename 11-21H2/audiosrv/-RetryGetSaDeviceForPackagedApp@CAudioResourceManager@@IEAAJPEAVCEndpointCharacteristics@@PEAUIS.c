/*
 * XREFs of ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101924
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x18002786C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDev.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180100778 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISa.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@7PEAPEAUISaDeviceProxy@@@Z @ 0x180100930 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISa.c)
 * Callees:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18000B87C (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x1800E0844 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101728 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaD.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
        CAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct ISaDeviceResourceManager *a3,
        struct SaDeviceParams *a4,
        unsigned int a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7,
        struct CAudioSessionManager *a8,
        struct ISaDeviceProxy **a9)
{
  struct CAudioSessionManager *v11; // rbx
  CAudioResourceManager *v12; // rcx
  struct ISaDeviceResourceManager *v13; // r8
  struct CAudioSession *v14; // rbx
  __int64 *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // r9
  __int64 v19; // rdx
  int SaDeviceForExclusive; // eax
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct CAudioSession *v25; // [rsp+A0h] [rbp+30h] BYREF

  v25 = 0LL;
  v11 = a8;
  if ( (int)CAudioSessionManager::FindExclusiveModeAudioSession(a8, &v25) < 0 )
  {
    SaDeviceForExclusive = CAudioResourceManager::RetryGetSaDeviceForExclusive(v12, a2, v13, a4, a5, a6, a7, v11, a9);
    v17 = SaDeviceForExclusive;
    if ( SaDeviceForExclusive < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8CB,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForExclusive);
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v22 = 0LL;
  v23 = 0LL;
  v14 = v25;
  CAudioSession::GetOwningProcesses((__int64)v25, (__int64)&v22);
  v15 = (__int64 *)v22;
  if ( (__int64)(*((_QWORD *)&v22 + 1) - v22) >> 3 == 1
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v22 + 96LL))(*(_QWORD *)v22)
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v15 + 104LL))(*v15) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v15 + 168LL))(*v15);
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v14 + 1) + 160LL))((__int64)v14 + 8, 0xFFFFFFFFLL);
    v16 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a4,
            a5,
            a6,
            a7,
            0LL,
            0LL,
            a9);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = (unsigned int)v16;
      v19 = 2235LL;
      goto LABEL_11;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
      v15,
      *((__int64 **)&v22 + 1));
    std::_Deallocate<16,0>(v15, (v23 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_8:
    v17 = 0;
    goto LABEL_9;
  }
  v17 = -2005139364;
  v18 = 2289827932LL;
  v19 = 2240LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v18);
  if ( v15 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
      v15,
      *((__int64 **)&v22 + 1));
    std::_Deallocate<16,0>(v15, (v23 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL);
  }
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
  return v17;
}
