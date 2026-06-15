/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800441C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180019500 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002D72C (Create_SpatialAudioDevicePropertyReader.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x1800443D0 (-IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     ?IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x180044468 (-IsHolographicSpaceAvailable@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     ?Find@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@@Z @ 0x180046A68 (-Find@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sa.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084474 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DDC74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x180133068 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180133E34 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x180134378 (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180135134 (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1801354D0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801362A4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1801369CC (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180137418 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  const char *v9; // r9
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct ISaDeviceProxy **); // rdi
  int v15; // eax
  struct ISaDeviceProxy *v16; // rdx
  int v17; // r15d
  struct _RTL_CRITICAL_SECTION *v19; // rcx
  CSpatialAudioResourceManagerTraceLogger *v20; // rcx
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 (__fastcall *v27)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // eax
  int *v33; // rdi
  struct Sarm::CEndpointResourcePool *v34; // rbx
  const char *v35; // r9
  unsigned int v36; // ebx
  unsigned int v37; // edi
  __int64 v38; // rax
  int v39; // eax
  struct ISaDeviceProxy *v40; // [rsp+30h] [rbp-81h] BYREF
  __int64 v41; // [rsp+38h] [rbp-79h] BYREF
  __int64 v42; // [rsp+40h] [rbp-71h] BYREF
  __int64 v43; // [rsp+48h] [rbp-69h] BYREF
  int v44; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-5Dh]
  int *v46; // [rsp+58h] [rbp-59h]
  struct Sarm::CEndpointResourcePool *v47; // [rsp+60h] [rbp-51h] BYREF
  char *v48; // [rsp+68h] [rbp-49h] BYREF
  struct _GUID *v49; // [rsp+70h] [rbp-41h]
  int v50[4]; // [rsp+78h] [rbp-39h] BYREF
  __int128 v51; // [rsp+88h] [rbp-29h]
  __int128 v52; // [rsp+98h] [rbp-19h]
  __int64 v53; // [rsp+A8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v49 = a4;
  v45 = a3;
  v46 = (int *)a5;
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice", 299);
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v9);
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x130,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v9);
  if ( !a5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x131,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v9);
  if ( util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Find((char *)this + 232, a2) )
    return 0LL;
  if ( !*((_QWORD *)this + 72) && Sarm::CSpatialAudioResourceManager::IsHolographicSpaceAvailable(this) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    CSpatialAudioResourceManagerTraceLogger::LogExclusiveListenerRequired(v20, *((unsigned __int8 *)this + 145));
    if ( *((_BYTE *)this + 145) )
    {
      if ( !*((_QWORD *)this + 72) )
      {
        wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576);
        v21 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,>((char *)this + 576);
        v22 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x143,
            (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)(unsigned int)v21);
          if ( this == (Sarm::CSpatialAudioResourceManager *)-104LL )
            return v22;
          v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
LABEL_18:
          LeaveCriticalSection(v19);
          return v22;
        }
      }
    }
    if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v48 = (char *)this + 64;
  v10 = *(_QWORD *)a2;
  v43 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v10 + 112))(a2, &v43);
  v12 = v11;
  if ( v11 < 0 )
  {
    v23 = (unsigned int)v11;
    v24 = 333LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v23);
    goto LABEL_14;
  }
  v13 = v43;
  if ( !v43 )
  {
    v12 = -2005139190;
    v23 = 2289828106LL;
    v24 = 334LL;
    goto LABEL_33;
  }
  v40 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v43 + 232LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v40);
  v15 = v14(v13, &v40);
  v12 = v15;
  if ( v15 < 0 )
  {
    v25 = 337LL;
LABEL_53:
    v26 = (unsigned int)v15;
    goto LABEL_54;
  }
  v16 = v40;
  if ( !v40 )
  {
    v12 = -2005139197;
    v26 = 2289828099LL;
    v25 = 338LL;
LABEL_54:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v26);
    goto LABEL_55;
  }
  v17 = a3 & 0x800000;
  if ( v17 )
  {
    v33 = v46;
    goto LABEL_50;
  }
  if ( !Sarm::CSpatialAudioResourceManager::IsAppPinningEnabled(this) )
  {
LABEL_13:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
    v12 = 0;
LABEL_14:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v43);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v48);
    return v12;
  }
  v41 = 0LL;
  v27 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v41);
  v28 = v27(a2, &v41);
  v12 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v28);
LABEL_40:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
LABEL_55:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
    goto LABEL_14;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v41 + 368LL))(v41) )
  {
LABEL_46:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
    goto LABEL_13;
  }
  v42 = 0LL;
  v30 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v40 + 24LL))(v40);
  v32 = Create_SpatialAudioDevicePropertyReader(v30, 0LL, &v42, v31);
  v12 = v32;
  if ( v32 < 0 )
  {
    v29 = 352LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v32);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v42);
    goto LABEL_40;
  }
  v32 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 112LL))(v42, &v44);
  v12 = v32;
  if ( v32 < 0 )
  {
    v29 = 355LL;
    goto LABEL_39;
  }
  if ( !v44 )
  {
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v42);
    goto LABEL_46;
  }
  v50[2] = 1;
  v50[3] = 1;
  v33 = v50;
  v46 = v50;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v42);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
  v16 = v40;
LABEL_50:
  v34 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(
                                                (char *)this + 152,
                                                v16);
  v47 = v34;
  if ( !v34 )
  {
    v15 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v40, &v47);
    v12 = v15;
    if ( v15 < 0 )
    {
      v25 = 374LL;
      goto LABEL_53;
    }
    v34 = v47;
    if ( !v47 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x177,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v35);
  }
  v22 = Sarm::CSpatialAudioResourceManager::AddStream(
          this,
          a2,
          v45,
          v49,
          (const struct SPATIAL_STREAM_PROPERTIES *)v33,
          v34);
  if ( (v22 & 0x80000000) != 0 )
  {
    if ( !*((_DWORD *)v34 + 3) )
    {
      if ( *(_QWORD *)v34 )
        ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x181,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)v22);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v43);
    if ( this == (Sarm::CSpatialAudioResourceManager *)-64LL )
      return v22;
    v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
    goto LABEL_18;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v43);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !v17 )
  {
    v36 = v46[3];
    v37 = v46[2];
    v38 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v39 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(this, v38, v37, v36);
    v12 = v39;
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v39);
      return v12;
    }
  }
  return 0LL;
}
