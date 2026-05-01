/*
 * XREFs of _wil::CoCreateInstance_IImmersiveComponentCreator_wil::err_exception_policy__::_1_::dtor$0 @ 0x1802C5578
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::CoCreateInstance_IImmersiveComponentCreator_wil::err_exception_policy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(*(__int64 **)(a2 + 80));
  }
  return result;
}
