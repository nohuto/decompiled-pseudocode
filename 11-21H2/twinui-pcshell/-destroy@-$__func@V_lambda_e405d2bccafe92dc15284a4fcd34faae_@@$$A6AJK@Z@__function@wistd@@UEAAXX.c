/*
 * XREFs of ?destroy@?$__func@V_lambda_e405d2bccafe92dc15284a4fcd34faae_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x180043400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_e405d2bccafe92dc15284a4fcd34faae_,long (unsigned long)>::destroy(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 8));
}
