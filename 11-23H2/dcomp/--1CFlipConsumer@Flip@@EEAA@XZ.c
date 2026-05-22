/*
 * XREFs of ??1CFlipConsumer@Flip@@EEAA@XZ @ 0x1801AAB30
 * Callers:
 *     ??_ECFlipConsumer@Flip@@EEAAPEAXI@Z @ 0x1800B82C0 (--_ECFlipConsumer@Flip@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

void __fastcall Flip::CFlipConsumer::~CFlipConsumer(Flip::CFlipConsumer *this)
{
  bool v1; // zf
  int v3; // eax
  int v4; // eax
  void *v5; // rcx
  unsigned int i; // ebx
  __int64 v7; // rcx
  unsigned int j; // ebp
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rbx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &Flip::CFlipConsumer::`vftable';
  if ( !v1 )
  {
    v3 = NtFlipObjectDisconnectEndpoint(*((_QWORD *)this + 3), 0LL);
    v4 = HRESULTFromNTSTATUS(v3);
    if ( v4 < 0 )
      ModuleFailFastForHRESULT(v4, retaddr);
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    CloseHandle(v5);
  for ( i = 0; i < *((_DWORD *)this + 14); ++i )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * i + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  for ( j = 0; j < *((_DWORD *)this + 22); ++j )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * j + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
    v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * j + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (__int64 *)*((_QWORD *)this + 12);
  if ( v11 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v11 + 1);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v11);
    operator delete(v11);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 4);
}
