/*
 * XREFs of ?Create@CFlipConsumer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z @ 0x1801AAC6C
 * Callers:
 *     OpenFlipConsumer @ 0x1801AA0D0 (OpenFlipConsumer.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumer::Create(void *a1, struct Flip::CFlipConsumer **a2, void **a3)
{
  struct Flip::CFlipConsumer *v6; // rax
  struct Flip::CFlipConsumer *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  const void *retaddr; // [rsp+48h] [rbp+0h]
  struct Flip::CFlipConsumer *v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = (struct Flip::CFlipConsumer *)DefaultHeap::AllocClear(0x68uLL);
  v7 = v6;
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v6 + 2) = 0;
  *(_QWORD *)v6 = &Flip::CFlipConsumer::`vftable';
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 6) = 0LL;
  *((_DWORD *)v6 + 14) = 0;
  *((_QWORD *)v6 + 8) = 0LL;
  *((_QWORD *)v6 + 9) = 0LL;
  *((_QWORD *)v6 + 10) = 0LL;
  *((_DWORD *)v6 + 22) = 0;
  *((_QWORD *)v6 + 12) = 0LL;
  (*(void (__fastcall **)(struct Flip::CFlipConsumer *))(*(_QWORD *)v6 + 8LL))(v6);
  v12[0] = 0LL;
  v14 = v7;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v12);
  v8 = NtFlipObjectOpen(a1, 0LL, (char *)v7 + 24, a3);
  v9 = HRESULTFromNTSTATUS(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    DoStackCaptureDirect(v9, 0xFDu);
    DoStackCaptureDirect(v10, 0x34u);
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
