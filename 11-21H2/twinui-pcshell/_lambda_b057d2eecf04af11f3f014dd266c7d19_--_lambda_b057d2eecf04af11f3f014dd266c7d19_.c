/*
 * XREFs of _lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA3E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____lambda_dc9a4f30738474328512289af513d076___ @ 0x1801E9F4C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___--CTaskW.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_____lambda_1dc6729d9ad27942be7b6a7593c66a88___ @ 0x1801EA02C (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88_.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA178 (CreationThreadDispatcher--RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___.c)
 *     CreationThreadDispatcher::RunSync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA1F4 (CreationThreadDispatcher--RunSync__lambda_b057d2eecf04af11f3f014dd266c7d19___.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  a1[1] = __abi_winrt_ptr_ctor(a2[1]);
  a1[2] = __abi_winrt_ptr_ctor(a2[2]);
  return a1;
}
