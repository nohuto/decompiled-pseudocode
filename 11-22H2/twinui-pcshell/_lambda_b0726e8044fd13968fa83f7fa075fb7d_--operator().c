/*
 * XREFs of _lambda_b0726e8044fd13968fa83f7fa075fb7d_::operator() @ 0x1803EC6A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___::Run @ 0x1803EE0B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b0726e8044fd13968fa83f7fa075fb7d___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b0726e8044fd13968fa83f7fa075fb7d_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = *a1;
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  v4 = v3(v2, &SID_FullScreenManager, &GUID_f0093591_bfa3_471f_b9f0_f17f8a979c6d, &v6);
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, a1[1], 0LL);
    v4 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return (unsigned int)v4;
}
