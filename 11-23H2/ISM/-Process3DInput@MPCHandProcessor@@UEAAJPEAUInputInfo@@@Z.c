/*
 * XREFs of ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800BFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ??$MPCHandProcessor_UseGazeForTargetingChange@AEAPEAULegacyInputInfo@@AEB_N@ISMTracing@@SAXAEAPEAULegacyInputInfo@@AEB_N@Z @ 0x1800BDD88 (--$MPCHandProcessor_UseGazeForTargetingChange@AEAPEAULegacyInputInfo@@AEB_N@ISMTracing@@SAXAEAPE.c)
 *     ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BEC90 (-HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800C0234 (-SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C0394 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800C5930 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800C812C (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C8298 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHandProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCInputProviderBase *v4; // r15
  char v5; // al
  struct IMPCTarget *v6; // rbx
  MPCHolographicInputManager *Instance; // rdi
  int v8; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IMPCTarget *v12; // [rsp+50h] [rbp+30h] BYREF
  struct IMPCTarget *v13; // [rsp+58h] [rbp+38h] BYREF
  const struct LegacyInputInfo *v14; // [rsp+60h] [rbp+40h] BYREF

  v14 = a2;
  v4 = (MPCInputProviderBase *)(this - 24);
  v5 = MPCHandProcessor::HandleHomeGesture((MPCHandProcessor *)(this - 24), a2);
  if ( !v5 )
  {
    v13 = 0LL;
    *(_BYTE *)(this + 9896) = 0;
    if ( !*((_BYTE *)a2 + 1204) || !*((_BYTE *)a2 + 964) || !*((_BYTE *)a2 + 965) )
      v5 = 1;
    LOBYTE(v12) = v5;
    if ( v5 != *(_BYTE *)(this + 3640) )
    {
      *(_BYTE *)(this + 3640) = v5;
      ISMTracing::MPCHandProcessor_UseGazeForTargetingChange<LegacyInputInfo * &,bool const &>(&v14, (bool *)&v12);
    }
    if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this)
      && MPCHandProcessor::ShouldRequestPrimary(v4, a2) )
    {
      MPCInputProviderBase::SetRequestingPrimary(v4);
    }
    v6 = *(struct IMPCTarget **)(this + 3608);
    v12 = v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v12);
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v13);
    v8 = MPCHolographicInputManager::Process3DInput(
           Instance,
           a2,
           (struct IMPCInputProviderBase *)(this & -(__int64)(v4 != 0LL)),
           &v13);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x70,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
        (const char *)(unsigned int)v8,
        savedregs);
    MPCInputProviderBase::SendInputToPostProcessor(v4, a2);
    MPCHandProcessor::SendInputToTargetApp(v4, v6, v13, a2);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v13);
  }
  return 0LL;
}
