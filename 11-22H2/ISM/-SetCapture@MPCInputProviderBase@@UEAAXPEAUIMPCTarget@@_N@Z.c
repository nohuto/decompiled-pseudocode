/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z @ 0x1800D0930
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIMPCTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCTarget@@@Z @ 0x1800CE928 (--4-$ComPtr@UIMPCTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCTarget@@@Z.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCTarget *a2, char a3)
{
  Microsoft::WRL::ComPtr<IMPCTarget>::operator=((__int64 *)this + 450, (__int64)a2);
  *((_BYTE *)this + 3624) = a3;
}
