/*
 * XREFs of ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x180104974
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x18010549C (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800142B0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveStreamGroupProxy::~CExclusiveStreamGroupProxy(CExclusiveStreamGroupProxy *this)
{
  CBaseStreamGroupProxy *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable';
  v2 = (CExclusiveStreamGroupProxy *)((char *)this + 8);
  *(_QWORD *)v2 = &CExclusiveStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_QWORD *)this + 2) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  *((_QWORD *)this + 40) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 41) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  CBaseStreamGroupProxy::DisconnectFromSaDevice(v2);
  v3 = *((_QWORD *)this + 88);
  if ( v3 )
  {
    *((_QWORD *)this + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>((__int64)this);
}
