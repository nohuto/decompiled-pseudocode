/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140021330
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140021424 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001207C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140020EE4 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x14002120C (--0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140029430 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModul.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140075560 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,void * &>(
        void ***a1,
        void **a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v4; // rax
  void **v5; // rbx
  int CanCastTo; // edi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r9
  __int64 v10; // rdx

  *a1 = 0LL;
  v4 = (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)operator new(
                                                                       0xE8uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = (void **)Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::AudioDeviceBrokerDevice(v4);
  CanCastTo = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::RuntimeClassInitialize(v5, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_79cc8d75_9666_4c7d_90b9_56de0ec14239, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v5;
      (*((void (__fastcall **)(void **))*v5 + 1))(v5);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v8, v9) )
      {
        *a1 = v5;
        CanCastTo = 0;
LABEL_7:
        (*((void (__fastcall **)(void **))**a1 + 1))(*a1);
        goto LABEL_8;
      }
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    v5 + 1,
                    v10,
                    a1);
      if ( CanCastTo >= 0 )
        goto LABEL_7;
    }
  }
LABEL_8:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)CanCastTo;
}
