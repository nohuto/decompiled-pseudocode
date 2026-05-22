/*
 * XREFs of ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x1800B57F4
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800C5930 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1801E0930 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall MPCHolographicInputManager::IsProviderPrimary(
        MPCHolographicInputManager *this,
        const struct IMPCInputProviderBase *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rsi
  const struct IMPCInputProviderBase *v5; // rbx
  const struct IMPCInputProviderBase *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 450);
  v4 = (__int64 *)*((_QWORD *)this + 451);
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0;
    v7 = (const struct IMPCInputProviderBase *)*v2;
    v5 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v7);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v7);
    if ( v5 == a2 )
      break;
    ++v2;
  }
  return 1;
}
