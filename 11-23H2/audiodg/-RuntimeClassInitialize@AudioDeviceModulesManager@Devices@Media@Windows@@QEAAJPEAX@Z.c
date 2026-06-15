/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001C5A8
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x14001B550 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B10C (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x14001BE18 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1400584F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        void *a2)
{
  RTL_SRWLOCK *v3; // rdi
  char *v4; // r14
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, char *); // rbp
  __int64 v10; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v15; // [rsp+40h] [rbp+8h] BYREF
  void *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v3 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  v15 = v3;
  v4 = (char *)this + 104;
  v5 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
         (Windows::Media::Devices::Internal::AudioDeviceBroker **)this + 13,
         &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 624LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v6,
      v13);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
    return v7;
  }
  v6 = Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 625LL;
    goto LABEL_14;
  }
  v8 = *(_QWORD *)v4;
  v9 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)v4 + 48LL);
  v10 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v6 = v9(v8, (char *)this + 112);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 626LL;
    goto LABEL_14;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
