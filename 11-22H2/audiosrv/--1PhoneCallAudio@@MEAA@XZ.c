/*
 * XREFs of ??1PhoneCallAudio@@MEAA@XZ @ 0x18013BF14
 * Callers:
 *     ??_GPhoneCallAudio@@MEAAPEAXI@Z @ 0x18013C050 (--_GPhoneCallAudio@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x180065D20 (-Free@-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall PhoneCallAudio::~PhoneCallAudio(PhoneCallAudio *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &PhoneCallAudio::`vftable'{for `IEndpointNotificationCallback'};
  *((_QWORD *)this + 1) = &PhoneCallAudio::`vftable'{for `ITelephonyControl'};
  *((_QWORD *)this + 2) = &PhoneCallAudio::`vftable'{for `ITelephonyControlInternal'};
  *((_QWORD *)this + 3) = &PhoneCallAudio::`vftable'{for `CUnknown'};
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  ATL::CAutoPtr<PhoneCallEndTimer>::Free((__int64 *)this + 7);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 17);
  `eh vector destructor iterator'(
    (char *)this + 120,
    8LL,
    2LL,
    (void (*)(void *))ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  ATL::CAutoPtr<PhoneCallEndTimer>::Free((__int64 *)this + 7);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &CUnknown::`vftable';
}
