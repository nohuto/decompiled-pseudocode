/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18007A500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  __int64 v1; // r8
  int v2; // edi
  unsigned int v3; // ebx

  do
    v1 = *(unsigned int *)(a1 + 12);
  while ( (_DWORD)v1 != 0x7FFFFFFF
       && (_DWORD)v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), v1 - 1, v1) );
  v2 = *(_DWORD *)(a1 + 20);
  v3 = v1 - 1;
  if ( (_DWORD)v1 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL, v1, 0x7FFFFFFFLL);
    if ( (v2 & 5) == 5 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  else if ( (v2 & 6) == 0 && (_DWORD)v1 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
      Microsoft::WRL::Details::ModuleBase::module_,
      *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
      v1,
      0x7FFFFFFFLL);
  }
  return v3;
}
