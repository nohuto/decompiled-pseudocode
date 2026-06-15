/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x18010ACF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a8db97ed7e8885f811a0d2f9622ff627_::operator() @ 0x18006B754 (_lambda_a8db97ed7e8885f811a0d2f9622ff627_--operator().c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rcx
  _QWORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (_QWORD *)(a1 + 8);
  if ( v1[3] >= 8uLL )
    v1 = (_QWORD *)*v1;
  v5 = v1;
  v4[0] = v2;
  v4[1] = &v5;
  return lambda_a8db97ed7e8885f811a0d2f9622ff627_::operator()(v4);
}
