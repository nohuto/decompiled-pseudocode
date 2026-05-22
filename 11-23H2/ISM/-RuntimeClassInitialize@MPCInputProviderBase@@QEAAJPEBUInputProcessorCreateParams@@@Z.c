/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040560
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004030C (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800C0124 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801DB0B0 (-RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E07C0 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E5410 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E982C (-RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E9D0C (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E9E90 (-RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801EAF84 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x18003B504 (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18003D520 (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x180041018 (--$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z.c)
 *     ??4?$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z @ 0x1800547C8 (--4-$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MPCEyeGazeProcessor_DeviceAttached@AEAK@ISMTracing@@SAXAEAK@Z @ 0x1800C4398 (--$MPCEyeGazeProcessor_DeviceAttached@AEAK@ISMTracing@@SAXAEAK@Z.c)
 *     ??4?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z @ 0x1800C55C0 (--4-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  _QWORD *v2; // r15
  char *v4; // rdi
  struct MPCHolographicInputManager *Instance; // rbx
  int v6; // eax
  unsigned int v7; // esi
  const char *v8; // r9
  int v9; // ebx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  v4 = (char *)this + 24;
  Instance = MPCHolographicInputManager::GetInstance();
  v6 = MPCHolographicInputManager::AddInputProvider(
         Instance,
         (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)));
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    if ( !*((_QWORD *)Instance + 412) )
      Microsoft::WRL::ComPtr<IInputProcessorHost>::operator=((char *)Instance + 3296, *((_QWORD *)this + 5));
    if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v4 + 112LL))((char *)this + 24) == 8 )
    {
      ISMTracing::MPCEyeGazeProcessor_DeviceAttached<unsigned long &>(*v2);
      Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=(
        (char *)Instance + 3352,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    }
    if ( !*((_QWORD *)Instance + 418)
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v4 + 112LL))((char *)this + 24) == 1 )
    {
      if ( *((_QWORD *)Instance + 418) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x7A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
          v8);
      Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=(
        (char *)Instance + 3344,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    }
    v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 112LL))((char *)this + 24);
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 88LL))((char *)this + 24);
    MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 3576), v10, v9);
    ISMTracing::MPCInputProviderBase_Create<DeviceInfo * &>(v2);
    return 0LL;
  }
}
