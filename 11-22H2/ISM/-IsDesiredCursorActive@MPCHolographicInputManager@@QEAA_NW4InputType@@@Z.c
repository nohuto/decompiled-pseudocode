/*
 * XREFs of ?IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z @ 0x1800C6DBC
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800D6FA0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall MPCHolographicInputManager::IsDesiredCursorActive(__int64 a1, int a2)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = **(_QWORD **)(a1 + 3600);
  v3 = v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v6);
  v4 = 0;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3) )
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v6);
    return a2 == v4;
  }
  else
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v6);
    return 0;
  }
}
