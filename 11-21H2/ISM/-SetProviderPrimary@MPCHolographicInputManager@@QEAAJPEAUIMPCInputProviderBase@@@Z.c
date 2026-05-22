/*
 * XREFs of ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800A0CE0
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18009D2BC (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800A06A4 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801CACCC (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800348D0 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800A1754 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

__int64 __fastcall MPCHolographicInputManager::SetProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v4; // r14
  __int64 *i; // rdi
  struct IMPCInputProviderBase *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCInputProviderBase *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 414);
  for ( i = (__int64 *)*((_QWORD *)this + 413); i != v4; ++i )
  {
    v11 = (struct IMPCInputProviderBase *)*i;
    v8 = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v11);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v11);
    if ( a2 == v8 )
      break;
  }
  if ( i == *((__int64 **)this + 414) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      277LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear((char *)this + 3600);
  MPCHolographicInputManager::AddPrimaryInputProvider(this, a2);
  return 0LL;
}
