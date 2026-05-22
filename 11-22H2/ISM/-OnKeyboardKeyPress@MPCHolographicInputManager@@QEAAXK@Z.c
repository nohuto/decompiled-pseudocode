/*
 * XREFs of ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800C7C5C
 * Callers:
 *     ?SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z @ 0x180182C8C (-SendInputModalityToInputService@InputModalityManager@@QEBAXPEAUIInputServiceProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIInputDeviceInfoStore@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDeviceInfoStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C4D5C (--$As@UIInputDeviceInfoStore@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJAEAK$$QEAW4InputType@@AEA_N@Z @ 0x1800C4E24 (--$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJA.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800C9648 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::OnKeyboardKeyPress(MPCHolographicInputManager *this, unsigned int a2)
{
  int v4; // eax
  char v5; // di
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+28h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+30h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+38h] BYREF
  int v12; // [rsp+78h] [rbp+40h] BYREF

  v10 = a2;
  if ( *((_BYTE *)this + 3364) )
  {
    v6 = 0LL;
    v4 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<IInputDeviceInfoStore>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 410,
           &v6);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x606,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v4,
        v6);
    v5 = 1;
    LOBYTE(PerformanceCount.LowPart) = 1;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, a2, &v7);
    if ( v12 >= 0 )
    {
      v5 = *(_BYTE *)(v7 + 12);
      LOBYTE(PerformanceCount.LowPart) = v5;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 48LL))(**((_QWORD **)this + 450));
    ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress<long &,unsigned long &,enum InputType,bool &>(
      &v12,
      &v10,
      &v11,
      (bool *)&PerformanceCount);
    if ( !v5 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      MPCHandProcessor::m_lastKeyboardKeyPressTimeInTicks = PerformanceCount.QuadPart;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 48LL))(**((_QWORD **)this + 450)) == 512 )
      {
        PerformanceCount = *(LARGE_INTEGER *)((char *)this + 3344);
        Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&PerformanceCount);
        MPCHolographicInputManager::TrySetProviderAsPrimary(this);
        Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&PerformanceCount);
      }
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
  }
}
