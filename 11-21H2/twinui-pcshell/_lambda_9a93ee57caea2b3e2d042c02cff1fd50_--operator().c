/*
 * XREFs of _lambda_9a93ee57caea2b3e2d042c02cff1fd50_::operator() @ 0x18031E57C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a93ee57caea2b3e2d042c02cff1fd50___::Run @ 0x180320780 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a93ee57caea2b3e2d042c02cff1fd50___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9a93ee57caea2b3e2d042c02cff1fd50_::operator()(_BYTE *a1)
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
      v7 = 0LL;
      v4 = *(_QWORD *)a1;
      v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)a1 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
      if ( v5(v4, i, &GUID_fe917f8f_4e14_41a5_83ba_a9f9de203a07, &v7) >= 0 )
        (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v7 + 24LL))(v7, a1[8] != 0);
      result = Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
    }
  }
  return result;
}
