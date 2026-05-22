/*
 * XREFs of ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x1800B4A38
 * Callers:
 *     ?ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z @ 0x1800AF2A0 (-ForcePrimaryInputType@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@W4InputType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCHolographicInputManager_ForcedPrimary@AEAW4InputType@@@ISMTracing@@SAXAEAW4InputType@@@Z @ 0x1800B2F20 (--$MPCHolographicInputManager_ForcedPrimary@AEAW4InputType@@@ISMTracing@@SAXAEAW4InputType@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800B8514 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 */

__int64 __fastcall MPCHolographicInputManager::ForcePrimaryInputType(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 48LL))(**(_QWORD **)(a1 + 3600)) != a2 )
  {
    v4 = *(_QWORD **)(a1 + 3304);
    v5 = *(_QWORD **)(a1 + 3312);
    while ( v4 != v5 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 48LL))(*v4) == a2
        && !(unsigned __int8)MPCHolographicInputManager::TrySetProviderAsPrimary((MPCHolographicInputManager *)a1) )
      {
        v6 = -2147467259;
        v7 = 1104LL;
        goto LABEL_10;
      }
      ++v4;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 3600) + 48LL))(**(_QWORD **)(a1 + 3600)) != a2 )
    {
      v6 = -2147024809;
      v7 = 1108LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)v6);
      return v6;
    }
    ISMTracing::MPCHolographicInputManager_ForcedPrimary<enum InputType &>(&v10);
  }
  return 0LL;
}
