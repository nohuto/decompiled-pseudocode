/*
 * XREFs of ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x1800C605C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800C8144 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800C9648 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800C9914 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHolographicInputManager::ForEachActiveProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = a2;
  v2 = a2;
  v3 = *(__int64 **)(a1 + 3600);
  v4 = *(__int64 **)(a1 + 3608);
  while ( v3 != v4 )
  {
    v9 = *v3;
    v5 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v9);
    v11 = v5;
    v6 = *(_QWORD *)(v2 + 56);
    if ( !v6 )
    {
      std::_Xbad_function_call();
      return MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor_0();
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v11);
    result = Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v9);
    ++v3;
  }
  v8 = *(_QWORD *)(v2 + 56);
  if ( v8 )
  {
    LOBYTE(a2) = v8 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
