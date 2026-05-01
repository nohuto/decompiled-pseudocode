/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::operator() @ 0x1804E49F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::Run @ 0x1804E4CE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::operator()(_QWORD *a1)
{
  int v2; // eax
  void *v3; // rbx
  int (__fastcall *v4)(void *, GUID *, __int64 *); // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::AgileRef::InternalResolve(
    (Microsoft::WRL::AgileRef *)(a1 + 2),
    &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
    &v6);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(*(_QWORD *)*a1 + 32LL))(*a1, a1[1], v6);
  v3 = v6;
  if ( v6 && (v2 <= -1 || (unsigned int)(v2 - 2556504) <= 1) )
  {
    v7 = 0LL;
    v4 = **(int (__fastcall ***)(void *, GUID *, __int64 *))v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    if ( v4(v3, &GUID_94e76fd7_6ec7_4a63_a8fb_5d5cb760b7f6, &v7) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  }
  return Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v6);
}
