/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___::OnStoryboardStatusChanged @ 0x1805ED850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x18055471C (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x1805EC714 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 *a2,
        int a3)
{
  __int64 v5; // rax
  int (__fastcall *v6)(__int64 *, __int64 *, _QWORD); // rdi
  __int64 *v7; // rbx
  __int64 **v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 == 1 )
  {
    v5 = *a2;
    v14 = 0LL;
    v6 = *(int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v5 + 136);
    v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v14, &v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
    if ( v6(a2, v7, 0LL) >= 0 )
    {
      v13 = 0LL;
      v8 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, v15);
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v14, *v8) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    }
    v9 = *(_QWORD *)(a1 + 40);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  }
  else if ( a3 == 5 )
  {
    lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()((_QWORD *)(a1 + 24));
    v10 = *(_QWORD *)(a1 + 40);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
  }
  else if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  }
  return 0LL;
}
