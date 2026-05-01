/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::OnStoryboardStatusChanged @ 0x1804DE8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x18049B684 (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_34f025963987b113629715f07186fc4a___lambda_ebf7812295cd6a46fe62472baa772b73___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rsi
  int (__fastcall *v5)(__int64, _QWORD, _QWORD); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v3 = a2;
  if ( a3 == 1 )
  {
    v10 = 0LL;
    v5 = *(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    if ( v5(v3, &v10, 0LL) >= 0 )
    {
      v11[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v10, v11) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 40LL))(v11[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
    }
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
  else if ( a3 == 5 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), a2);
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  }
  else if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
  }
  return 0LL;
}
