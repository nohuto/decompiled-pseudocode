/*
 * XREFs of _WINRT_GetActivationFactory_::_1_::catch$34 @ 0x18021E206
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall WINRT_GetActivationFactory_::_1_::catch_34(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 80) = *(_DWORD *)winrt::to_hresult(a2 + 80);
  return 0LL;
}
