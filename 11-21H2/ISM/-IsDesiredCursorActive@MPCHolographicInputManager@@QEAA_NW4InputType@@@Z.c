/*
 * XREFs of ?IsDesiredCursorActive@MPCHolographicInputManager@@QEAA_NW4InputType@@@Z @ 0x18009E48C
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800AEC60 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCHolographicInputManager::IsDesiredCursorActive(__int64 a1, int a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = **(_QWORD **)(a1 + 3600);
  v3 = v6;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v6);
  v4 = 0;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3) )
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
    LOBYTE(v4) = a2 == v4;
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v6);
  return v4;
}
