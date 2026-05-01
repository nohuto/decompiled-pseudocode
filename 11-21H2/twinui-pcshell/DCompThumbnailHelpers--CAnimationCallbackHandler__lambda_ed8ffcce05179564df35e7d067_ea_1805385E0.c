/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::OnStoryboardStatusChanged @ 0x1805385E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x18049B684 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::operator() @ 0x180537F70 (_lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_--operator().c)
 *     _lambda_ed8ffcce05179564df35e7d067b53c30_::operator() @ 0x180537FD0 (_lambda_ed8ffcce05179564df35e7d067b53c30_--operator().c)
 */

__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 *a2,
        int a3)
{
  char v3; // bp
  __int64 v6; // rax
  int (__fastcall *v7)(__int64 *, __int64 *, _QWORD); // rdi
  __int64 *v8; // rbx
  __int64 **v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 1;
  if ( a3 == 1 )
  {
    v6 = *a2;
    v15 = 0LL;
    v7 = *(int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v6 + 136);
    v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, &v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
    if ( v7(a2, v8, 0LL) >= 0 )
    {
      v14 = 0LL;
      v9 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v14, v16);
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v15, *v9) >= 0 )
        v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    lambda_ed8ffcce05179564df35e7d067b53c30_::operator()((_QWORD *)(a1 + 16), v3);
    v10 = *(_QWORD *)(a1 + 48);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  }
  else if ( a3 == 5 )
  {
    lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb_::operator()((unsigned int *)(a1 + 32));
    v11 = *(_QWORD *)(a1 + 48);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
  }
  else if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
  }
  return 0LL;
}
