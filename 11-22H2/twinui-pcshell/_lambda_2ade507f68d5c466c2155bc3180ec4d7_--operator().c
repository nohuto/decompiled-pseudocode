/*
 * XREFs of _lambda_2ade507f68d5c466c2155bc3180ec4d7_::operator() @ 0x1803EF2C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___::Run @ 0x1803F0480 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_2ade507f68d5c466c2155bc3180ec4d7_::operator()(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v6);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v4 = *(_QWORD *)a1;
      v7 = 0LL;
      v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v7);
      if ( v5(v4, i, &GUID_7adc3cb7_307a_4f32_b2c6_c007ee409fd0, &v7) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, a1[2]);
      result = Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v7);
    }
  }
  return result;
}
