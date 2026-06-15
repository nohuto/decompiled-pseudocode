/*
 * XREFs of ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140021D28
 * Callers:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140021EA0 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140025A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  unsigned int i; // edi
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+50h] [rbp+28h] BYREF
  int v9; // [rsp+58h] [rbp+30h] BYREF
  __int64 v10; // [rsp+60h] [rbp+38h] BYREF
  __int64 v11; // [rsp+68h] [rbp+40h] BYREF

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (__int64 *)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    v8 = 0;
    v9 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
    (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9), &v9);
    for ( i = 0; i < v8; ++i )
    {
      v5 = (_QWORD *)*v2;
      v6 = *(_QWORD *)*v2;
      v10 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD *, _QWORD, __int64 *))(v6 + 48))(v5, i, &v10) >= 0
        && (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 9) + 48LL))(
             *((_QWORD *)this + 9),
             i,
             &v11) >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v11);
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
    }
  }
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    *((_QWORD *)this + 10) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 9);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>(this);
}
