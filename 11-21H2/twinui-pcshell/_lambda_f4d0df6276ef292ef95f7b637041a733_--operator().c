/*
 * XREFs of _lambda_f4d0df6276ef292ef95f7b637041a733_::operator() @ 0x18006B0C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4d0df6276ef292ef95f7b637041a733___::Run @ 0x18006AB70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4d0df6276ef292ef95f7b637041a733___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f4d0df6276ef292ef95f7b637041a733_::operator()(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  unsigned int j; // ebx
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v7);
  if ( (int)result >= 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v8 = 0LL;
      v4 = *(_QWORD *)(a1 + 8);
      v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
      if ( v5(v4, i, &GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7, &v8) >= 0 )
      {
        for ( j = 0; j < *(_DWORD *)(a1 + 32); ++j )
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 32LL))(
            v8,
            *(_QWORD *)a1,
            *(_QWORD *)(a1 + 24) + 16LL * j,
            *(unsigned int *)(a1 + 16));
      }
      result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    }
  }
  return result;
}
