/*
 * XREFs of ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800D04B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800C8144 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800CF380 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z @ 0x1800CF8F4 (-MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z.c)
 *     ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800D0844 (-SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800D09A4 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800D57C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800D746C (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800D75D8 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHandProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCInputProviderBase *v4; // r14
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // rcx
  ISMTracing *v8; // rcx
  struct IMPCTarget *v9; // rbx
  MPCHolographicInputManager *Instance; // rdi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v15; // [rsp+40h] [rbp+8h] BYREF
  struct IMPCTarget *v16; // [rsp+48h] [rbp+10h] BYREF

  v4 = (MPCInputProviderBase *)(this - 24);
  if ( !MPCHandProcessor::HandleHomeGesture((MPCHandProcessor *)(this - 24), a2) )
  {
    v15 = 0LL;
    *(_BYTE *)(this + 9896) = 0;
    v6 = !*((_BYTE *)a2 + 1204) || !*((_BYTE *)a2 + 964) || !*((_BYTE *)a2 + 965);
    if ( v6 != *(_BYTE *)(this + 3640) )
    {
      *(_BYTE *)(this + 3640) = v6;
      if ( ISMTracing::IsEnabled(v5) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v7,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(v8, a2, v6);
      }
    }
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      && MPCHandProcessor::ShouldRequestPrimary(v4, a2) )
    {
      MPCInputProviderBase::SetRequestingPrimary(v4);
    }
    v9 = *(struct IMPCTarget **)(this + 3608);
    v16 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v16);
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
    v11 = MPCHolographicInputManager::Process3DInput(
            Instance,
            a2,
            (struct IMPCInputProviderBase *)(this & -(__int64)(v4 != 0LL)),
            &v15);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x70,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
        (const char *)(unsigned int)v11,
        v13);
    MPCInputProviderBase::SendInputToPostProcessor(v4, a2);
    MPCHandProcessor::SendInputToTargetApp(v4, v9, v15, a2);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
  }
  return 0LL;
}
