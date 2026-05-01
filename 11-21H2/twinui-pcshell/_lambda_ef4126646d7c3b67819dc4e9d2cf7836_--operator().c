/*
 * XREFs of _lambda_ef4126646d7c3b67819dc4e9d2cf7836_::operator() @ 0x180600EE4
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_ef4126646d7c3b67819dc4e9d2cf7836__void_::Invoke @ 0x1806029E0 (Platform--Details--__abi_FunctorCapture__lambda_ef4126646d7c3b67819dc4e9d2cf7836__void_--Invoke.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ef4126646d7c3b67819dc4e9d2cf7836_::operator()(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  _QWORD **v3; // rbx

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlSnapAssistViewController__, a1);
  result = __abi_winrt_ptr_ctor(v1);
  v3 = (_QWORD **)result;
  if ( v1 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v3[7] + 40LL))(v3[7]);
    return ((__int64 (__fastcall *)(_QWORD **))(*v3)[2])(v3);
  }
  return result;
}
