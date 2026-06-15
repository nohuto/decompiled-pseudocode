/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x14001A5B8
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x14001CA40 (-add_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEA.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x14001B748 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x14001C174 (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Wi.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x140025334 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  _OWORD *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int AgileReference; // edi
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    v5 = Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>(v4);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v10 = v5 + 48;
    v6 = (_QWORD *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v10);
    v7 = v6;
    if ( a1 )
    {
      Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(v6);
      AgileReference = RoGetAgileReference(0LL, &GUID_26b3f929_7275_5554_8092_5102d037ae06, a1, v7);
      if ( AgileReference < 0 )
        goto LABEL_7;
    }
    else
    {
      v11 = 0LL;
      v10 = *v6;
      *v6 = 0LL;
      Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v11);
    }
    AgileReference = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(
                       v5,
                       &GUID_26b3f929_7275_5554_8092_5102d037ae06,
                       a2);
  }
  else
  {
    AgileReference = -2147024882;
  }
LABEL_7:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)AgileReference;
}
