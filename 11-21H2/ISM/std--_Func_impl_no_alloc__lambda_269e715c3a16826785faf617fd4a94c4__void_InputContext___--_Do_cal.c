/*
 * XREFs of std::_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___::_Do_call @ 0x1800E20F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800DE7F4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_DWORD *__fastcall std::_Func_impl_no_alloc__lambda_269e715c3a16826785faf617fd4a94c4__void_InputContext___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rcx
  _DWORD *result; // rax

  v2 = *a2;
  v4 = (__int64 *)(*a2 + 16LL);
  if ( !*v4 )
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(v4, *(__int64 **)(a1 + 8));
  *(_QWORD *)(v2 + 88) = **(_QWORD **)(a1 + 16);
  result = *(_DWORD **)(a1 + 24);
  *(_DWORD *)(v2 + 96) = *result;
  return result;
}
