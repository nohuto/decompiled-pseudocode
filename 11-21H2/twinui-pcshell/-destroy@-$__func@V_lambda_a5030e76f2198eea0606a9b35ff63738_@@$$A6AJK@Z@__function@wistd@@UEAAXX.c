/*
 * XREFs of ?destroy@?$__func@V_lambda_a5030e76f2198eea0606a9b35ff63738_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x18017FE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_a5030e76f2198eea0606a9b35ff63738_,long (unsigned long)>::destroy(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 8));
}
