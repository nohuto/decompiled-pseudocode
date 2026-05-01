/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged @ 0x18058FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStoryboardExtraData@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStoryboardExtraData@@@WRL@Microsoft@@@Details@12@@Z @ 0x18055471C (--$As@UIStoryboardExtraData@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     _lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator() @ 0x18058F308 (_lambda_b0b710aa7dd78fb14938fbcb95e31413_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_0688f707641f84dad399f01864cccda0___lambda_b0b710aa7dd78fb14938fbcb95e31413___::OnStoryboardStatusChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int (__fastcall *v5)(__int64, _QWORD, _QWORD); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF

  if ( a3 == 1 )
  {
    v10 = 0LL;
    v5 = *(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    if ( v5(a2, &v10, 0LL) >= 0 )
    {
      v11[0] = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IStoryboardExtraData>(&v10, v11) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 40LL))(v11[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
    }
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
  else if ( a3 == 5 )
  {
    lambda_b0b710aa7dd78fb14938fbcb95e31413_::operator()((unsigned int *)(a1 + 24));
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  }
  else if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
  }
  return 0LL;
}
