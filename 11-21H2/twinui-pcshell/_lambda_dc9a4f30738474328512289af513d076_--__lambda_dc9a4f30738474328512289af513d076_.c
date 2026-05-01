/*
 * XREFs of _lambda_dc9a4f30738474328512289af513d076_::__lambda_dc9a4f30738474328512289af513d076_ @ 0x1801EA574
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA178 (CreationThreadDispatcher--RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___::_CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___ @ 0x1801EA5D8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_dc9a4f30738474328512289af513d076_::__lambda_dc9a4f30738474328512289af513d076_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 3);
  return lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_(a1);
}
