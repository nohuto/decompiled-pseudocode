/*
 * XREFs of ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x1800A12BC
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18009F804 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800A0E5C (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::UpdatePrimary(
        MPCHolographicInputManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // r8
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct IMPCInputProviderBase *v13; // [rsp+30h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      597LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v5 = 0LL;
  v6 = *((_QWORD *)this + 413);
  if ( (*((_QWORD *)this + 414) - v6) >> 3 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 8 * v5) + 24LL))(*(_QWORD *)(v6 + 8 * v5)) )
    {
      ++v5;
      v6 = *((_QWORD *)this + 413);
      if ( v5 >= (*((_QWORD *)this + 414) - v6) >> 3 )
        return;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 8 * v5) + 72LL))(*(_QWORD *)(v6 + 8 * v5))
      || (v7 = (_QWORD *)*((_QWORD *)this + 450), *v7 == *((_QWORD *)this + 418))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 72LL))(*v7) )
    {
      v13 = *(struct IMPCInputProviderBase **)(v6 + 8 * v5);
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v13);
      MPCHolographicInputManager::TrySetProviderAsPrimary(this, &v13, v10, v11);
    }
    else
    {
      v13 = (struct IMPCInputProviderBase *)*((_QWORD *)this + 418);
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v13);
      MPCHolographicInputManager::TrySetProviderAsPrimary(this, &v13, v8, v9);
    }
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v13);
  }
}
