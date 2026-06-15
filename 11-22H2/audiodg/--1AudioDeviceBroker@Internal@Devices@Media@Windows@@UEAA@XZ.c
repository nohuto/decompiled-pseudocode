/*
 * XREFs of ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140080750
 * Callers:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140081CF0 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        volatile int *a2)
{
  __int64 *v3; // r14
  __int64 v4; // rcx
  __int64 *v5; // rdi
  unsigned int i; // esi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  volatile int *v10; // rdx
  unsigned int v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+58h] [rbp+38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+40h] BYREF
  __int64 v14; // [rsp+68h] [rbp+48h] BYREF

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v3 = (__int64 *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v11 = 0;
    v12 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 56LL))(v4, &v11);
    v5 = (__int64 *)((char *)this + 72);
    (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9), &v12);
    for ( i = 0; i < v11; ++i )
    {
      v7 = (_QWORD *)*v3;
      v8 = *(_QWORD *)*v3;
      v13 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD *, _QWORD, __int64 *))(v8 + 48))(v7, i, &v13) >= 0
        && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v5 + 48LL))(*v5, i, &v14) >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 72LL))(v13, v14);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v13);
    }
  }
  else
  {
    v5 = (__int64 *)((char *)this + 72);
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    *((_QWORD *)this + 10) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9, a2);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v5);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v3);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v10);
}
