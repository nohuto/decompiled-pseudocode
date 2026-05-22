/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003FB30
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003F8DC (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800D0734 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801E88C0 (-RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801EDA08 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F2530 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F654C (-RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F6A3C (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F6BC0 (-RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801F7CB4 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180039590 (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z @ 0x180041A00 (--$MPCInputProviderBase_Create@AEAPEAUDeviceInfo@@@ISMTracing@@SAXAEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x18004C594 (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     ??4?$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z @ 0x180055538 (--4-$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z @ 0x1800D5448 (--4-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z @ 0x1800D6AC8 (-MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned int **v2; // r15
  char *v4; // rdi
  struct MPCHolographicInputManager *Instance; // rbx
  int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // cl
  const char *v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned int *v14; // rsi
  __int64 v15; // rcx
  ISMTracing *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (unsigned int **)((char *)this + 48);
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
      v14 = *v2;
      if ( ISMTracing::IsEnabled(v9, v8) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v15,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCEyeGazeProcessor_DeviceAttached_(v16, *v14);
      }
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
          v10);
      Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=(
        (char *)Instance + 3344,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    }
    v11 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 112LL))((char *)this + 24);
    v12 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 88LL))((char *)this + 24);
    MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 3576), v12, v11);
    ISMTracing::MPCInputProviderBase_Create<DeviceInfo * &>(v2);
    return 0LL;
  }
}
