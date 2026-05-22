/*
 * XREFs of ?Create@CFlipProducer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z @ 0x1801AA458
 * Callers:
 *     OpenFlipProducer @ 0x1801AA160 (OpenFlipProducer.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipProducer::Create(void *a1, struct Flip::CFlipProducer **a2, void **a3)
{
  struct Flip::CFlipProducer *v6; // rax
  struct Flip::CFlipProducer *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct Flip::CFlipProducer *v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = (struct Flip::CFlipProducer *)DefaultHeap::AllocClear(0x60uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v6 + 2) = 0;
  *(_QWORD *)v6 = &Flip::CFlipProducer::`vftable';
  *((_QWORD *)v6 + 4) = 1LL;
  *((_QWORD *)v6 + 5) = v6;
  *((_QWORD *)v6 + 6) = 0LL;
  *((_QWORD *)v6 + 7) = 0LL;
  *((_DWORD *)v6 + 16) = 0;
  *((_DWORD *)v6 + 17) = 0;
  *((_DWORD *)v6 + 18) = 0;
  *((_QWORD *)v6 + 10) = 1LL;
  *((_QWORD *)v6 + 11) = 0LL;
  (*(void (__fastcall **)(struct Flip::CFlipProducer *))(*(_QWORD *)v6 + 8LL))(v6);
  v12[0] = 0LL;
  v14 = v7;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v12);
  v8 = NtFlipObjectOpen(a1, 1LL, (char *)v7 + 24, a3);
  v9 = HRESULTFromNTSTATUS(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    DoStackCaptureDirect(v9, 0x132u);
    DoStackCaptureDirect(v10, 0x25u);
  }
  else
  {
    *((_BYTE *)v7 + 16) = 1;
    v14 = 0LL;
    *a2 = v7;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
  return v10;
}
