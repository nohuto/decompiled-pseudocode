/*
 * XREFs of ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801EA760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800B7050 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800C5930 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C7F44 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     ?SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1800C812C (-SendInputToPostProcessor@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800C8298 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801EA8F8 (-ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCClickerProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  struct IMPCTarget *v4; // rbx
  MPCHolographicInputManager *Instance; // rdi
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  const char *v10; // r9
  signed int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCTarget *v14; // [rsp+50h] [rbp+8h] BYREF
  struct IMPCTarget *v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v4 = *(struct IMPCTarget **)(this + 3608);
  v15 = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v15);
  if ( !MPCInputProviderBase::IsPrimary(this) )
    MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
  Instance = MPCHolographicInputManager::GetInstance();
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
  v6 = MPCHolographicInputManager::Process3DInput(
         Instance,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
         &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    MPCInputProviderBase::SendInputToPostProcessor((MPCInputProviderBase *)(this - 24), a2);
    if ( v14 )
    {
      MPCInputProviderBase::ProcessSourceDetectedAndLost((MPCInputProviderBase *)(this - 24), v4, v14, 0LL, v12);
      if ( *(_BYTE *)(this + 3544) )
      {
        v9 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *))(*(_QWORD *)v14 + 24LL))(v14, a2);
        if ( v9 == -2147417853 )
        {
          *(_BYTE *)(this + 3544) = 0;
        }
        else if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147417828 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x7C,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
            v10);
        }
      }
      MPCClickerProcessor::ProcessPoints((MPCClickerProcessor *)(this - 24), a2);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
    return v7;
  }
}
