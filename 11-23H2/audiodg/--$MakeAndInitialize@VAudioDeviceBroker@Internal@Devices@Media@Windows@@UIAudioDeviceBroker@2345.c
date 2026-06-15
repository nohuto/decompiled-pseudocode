/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B10C
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001C5A8 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x140003F00 (--0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140017FD8 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001BFB0 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400246D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModul.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F0CC (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x140080374 (--1-$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140082698 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_140082698.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
        Windows::Media::Devices::Internal::AudioDeviceBroker **a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v5; // rbx
  int CanCastTo; // esi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r9
  __int64 v10; // rdx
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v13 = v4;
  if ( !v4 )
  {
    CanCastTo = -2147024882;
LABEL_13:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v12);
    return (unsigned int)CanCastTo;
  }
  v5 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(v4);
  v13 = v5;
  v12 = 0LL;
  CanCastTo = Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(v5, *a2);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice>::~ComPtr<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice>(&v13);
    goto LABEL_13;
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v8, v9) )
    {
      *a1 = v5;
      CanCastTo = 0;
LABEL_7:
      (*(void (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_8;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  (char *)v5 + 8,
                  v10,
                  a1);
    if ( CanCastTo >= 0 )
      goto LABEL_7;
  }
LABEL_8:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)CanCastTo;
}
