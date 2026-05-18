/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5efd0f16faa6f6439fdb99826dc3e8ab__void_std::shared_ptr_Spectre::Engine::Texture__enum_Spectre::Engine::Format_unsigned_int_::_Do_call @ 0x1800D7030
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5efd0f16faa6f6439fdb99826dc3e8ab_::operator() @ 0x1800D5AEC (_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_--operator().c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_5efd0f16faa6f6439fdb99826dc3e8ab__void_std::shared_ptr_Spectre::Engine::Texture__enum_Spectre::Engine::Format_unsigned_int_::_Do_call(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        int *a4)
{
  __int64 v4; // rax
  int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  v5 = *a4;
  v6 = *a3;
  *a2 = 0LL;
  v8[0] = v4;
  v7 = a2[1];
  a2[1] = 0LL;
  v8[1] = v7;
  lambda_5efd0f16faa6f6439fdb99826dc3e8ab_::operator()(a1 + 8, v8, v6, v5);
}
