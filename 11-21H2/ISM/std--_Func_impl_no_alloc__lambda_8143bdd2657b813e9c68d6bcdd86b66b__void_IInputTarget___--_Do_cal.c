/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8143bdd2657b813e9c68d6bcdd86b66b__void_IInputTarget___::_Do_call @ 0x18000B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_8143bdd2657b813e9c68d6bcdd86b66b__void_IInputTarget___::_Do_call(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(*(_QWORD *)result + 76LL) == 3 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))Win32kInterop::s_pfnMTCallback)(*(_QWORD *)(a1 + 16) + 128LL, 0LL);
  return result;
}
