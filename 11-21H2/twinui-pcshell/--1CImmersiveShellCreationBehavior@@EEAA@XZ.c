/*
 * XREFs of ??1CImmersiveShellCreationBehavior@@EEAA@XZ @ 0x1803AFC4C
 * Callers:
 *     ??_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z @ 0x1803AFE60 (--_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ComponentCreator@@QEAA@XZ @ 0x1803AFCB8 (--1ComponentCreator@@QEAA@XZ.c)
 */

void __fastcall CImmersiveShellCreationBehavior::~CImmersiveShellCreationBehavior(
        CImmersiveShellCreationBehavior *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveShellCreationBehavior>>'};
  *((_QWORD *)this + 4) = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellCreationBehavior>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveShellCreationBehavior>>'};
  ComponentCreator::~ComponentCreator((CImmersiveShellCreationBehavior *)((char *)this + 72));
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
