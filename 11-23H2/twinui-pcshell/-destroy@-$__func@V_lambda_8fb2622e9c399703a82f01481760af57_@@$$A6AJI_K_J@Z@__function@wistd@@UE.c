/*
 * XREFs of ?destroy@?$__func@V_lambda_8fb2622e9c399703a82f01481760af57_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAXXZ @ 0x1801BCDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_8fb2622e9c399703a82f01481760af57_,long (unsigned int,unsigned __int64,__int64)>::destroy(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 8));
}
