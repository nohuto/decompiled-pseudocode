/*
 * XREFs of ?SetLastTarget@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@@Z @ 0x1800C0380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::SetLastTarget(MPCInputProviderBase *this, struct IMPCTarget *a2)
{
  Microsoft::WRL::ComPtr<IMPCTarget>::operator=((__int64 *)this + 451, (__int64)a2);
}
