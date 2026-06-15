/*
 * XREFs of ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D429C
 * Callers:
 *     ??$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Z @ 0x1800D24EC (--$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoveryS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000F3B4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003FC74 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BED90 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VAudioEffectsWatcher@@@WRL@Microsoft@@YAJPEAVAudioEffectsWatcher@@PEAVWeakRef@01@@Z @ 0x1800D23C0 (--$AsWeak@VAudioEffectsWatcher@@@WRL@Microsoft@@YAJPEAVAudioEffectsWatcher@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800D260C (--$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAP.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800D2B98 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x1800D38EC (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D3B14 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4278 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall AudioEffectsWatcher::RuntimeClassInitialize(__int64 a1, __int64 *a2, int a3, int a4, int a5)
{
  unsigned __int64 v9; // r14
  unsigned __int16 *v10; // rdi
  unsigned __int64 v11; // r15
  int v12; // ebx
  int v13; // eax
  const char *v14; // r9
  int LastError; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  wil::details *v19; // rcx
  __int64 v20; // r8
  const char *v21; // r9
  HANDLE Event; // r14
  wil::details *v23; // rdi
  DWORD v24; // ebx
  void *v25; // rdx
  int v26; // eax
  signed int LastErrorFailHr; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v36; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v37; // [rsp+48h] [rbp-99h] BYREF
  __int64 *v38; // [rsp+50h] [rbp-91h] BYREF
  __int64 v39; // [rsp+58h] [rbp-89h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-81h] BYREF
  CEndpointCharacteristics *v41; // [rsp+68h] [rbp-79h] BYREF
  void **v42; // [rsp+70h] [rbp-71h]
  unsigned __int16 *v43; // [rsp+78h] [rbp-69h] BYREF
  char v44; // [rsp+80h] [rbp-61h]
  void *v45; // [rsp+88h] [rbp-59h] BYREF
  _QWORD v46[8]; // [rsp+90h] [rbp-51h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-11h] BYREF
  __int128 v48; // [rsp+D8h] [rbp-9h]
  __int128 v49; // [rsp+E8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v38 = a2;
  v48 = *(_OWORD *)(a1 + 40);
  v49 = v48;
  EtwEventActivityIdControl(4LL, &v49);
  *(_DWORD *)(a1 + 180) = a3;
  *(_DWORD *)(a1 + 184) = a4;
  *(_DWORD *)(a1 + 188) = a5;
  v42 = (void **)(a1 + 56);
  v44 = 1;
  v9 = -1LL;
  do
    ++v9;
  while ( *((_WORD *)a2 + v9) );
  v10 = 0LL;
  v11 = v9 + 1;
  if ( v9 + 1 >= v9 && (v43 = 0LL, is_mul_ok(v11, 2uLL)) )
  {
    v12 = CTCoAllocPolicy::Alloc(0LL, (v11 * (unsigned __int128)2uLL) >> 64, 2 * v11, (void **)&v43);
    v10 = v43;
    if ( v12 >= 0 )
      StringCchCopyNExW((char *)v43, v9 + 1, (const unsigned __int16 *)a2, v9);
  }
  else
  {
    v12 = -2147024362;
  }
  if ( v44 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v42,
      v10);
  if ( v12 >= 0 )
  {
    v41 = 0LL;
    v13 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                + 24LL))(
            g_pEndpointCharacteristicsCache,
            *(_QWORD *)(a1 + 56),
            0LL,
            0LL,
            &v41);
    v12 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v13);
LABEL_41:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      goto LABEL_42;
    }
    SecurityDescriptor = 0LL;
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159"
             "816984-2199008581-497492991)",
            1u,
            &SecurityDescriptor,
            0LL) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x6D,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
                    v14);
LABEL_46:
      v12 = LastError;
      goto LABEL_40;
    }
    v16 = NtCreateWnfStateName(&v47, 3LL, 0LL);
    if ( v16 < 0 )
    {
      v17 = 122LL;
LABEL_45:
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)v17,
                    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
                    (const char *)(unsigned int)v16);
      goto LABEL_46;
    }
    *(_QWORD *)(a1 + 92) = v47;
    *(_BYTE *)(a1 + 88) = 1;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v41, eHostProcessConnector) )
    {
      Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
      if ( Event )
      {
        GetLastError();
        v23 = *(wil::details **)(a1 + 152);
        if ( v23 )
        {
          v24 = GetLastError();
          wil::details::CloseHandle(v23, v25);
          SetLastError(v24);
        }
        *(_QWORD *)(a1 + 152) = Event;
      }
      else
      {
        LastErrorFailHr = wil::details::GetLastErrorFailHr(v19, v18, v20, v21);
        v12 = LastErrorFailHr;
        if ( LastErrorFailHr < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x87,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
            (const char *)(unsigned int)LastErrorFailHr);
LABEL_40:
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&SecurityDescriptor);
          goto LABEL_41;
        }
      }
      v45 = *(void **)(a1 + 152);
      v36 = 0LL;
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher::CMMNotificationDelegator,IMMNotificationClient,unsigned short const * &,void *>(
                  &v36,
                  (const unsigned __int16 **)&v38,
                  &v45) >= 0 )
      {
        v26 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)g_DeviceEnumerator + 48LL))(
                g_DeviceEnumerator,
                v36);
        v12 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8D,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
            (const char *)(unsigned int)v26);
LABEL_37:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
          goto LABEL_40;
        }
        v28 = v36;
        v36 = 0LL;
        v29 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 80) = v28;
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos((AudioEffectsWatcher *)a1);
      v37 = 0LL;
      v38 = &v37;
      v30 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v38);
      v31 = Microsoft::WRL::AsWeak<AudioEffectsWatcher>(a1, v30);
      v12 = v31;
      if ( v31 < 0 )
      {
        v32 = 150LL;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
          (const char *)(unsigned int)v31);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
        goto LABEL_37;
      }
      v33 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v38 = (__int64 *)a1;
      v34 = v37;
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
      v46[0] = off_18016BB68;
      v46[1] = a1;
      v46[2] = v34;
      v39 = 0LL;
      v46[7] = v46;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v39);
      v31 = CSerialWorkQueue::QueueRecurringWaitItem(v33, *(_QWORD *)(a1 + 152), (__int64)v46, a1 + 160);
      v12 = v31;
      if ( v31 < 0 )
      {
        v32 = 154LL;
        goto LABEL_36;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
    }
    else
    {
      v16 = RtlPublishWnfStateData(*(_QWORD *)(a1 + 92), 0LL, &unk_180191188, 16LL, 0LL);
      if ( v16 < 0 )
      {
        v17 = 159LL;
        goto LABEL_45;
      }
    }
    v12 = 0;
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
    (const char *)(unsigned int)v12);
LABEL_42:
  EtwEventActivityIdControl(4LL, &v49);
  return (unsigned int)v12;
}
