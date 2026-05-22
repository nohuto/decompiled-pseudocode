/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800296EC
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180028B0C (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800A8434 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801BCD14 (-RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C1D6C (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801C67F0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801CA7EC (-RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801CACCC (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801CAE50 (-RuntimeClassInitialize@MPCHomeGestureProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801CBF18 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x180029854 (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180034810 (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z @ 0x1800489DC (--4-$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800A5EAC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??4?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z @ 0x1800AD124 (--4-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z @ 0x1800AE788 (-MPCEyeGazeProcessor_DeviceAttached_@ISMTracing@@QEAAXK@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  struct IMPCInputProviderBase *v3; // rdi
  struct MPCHolographicInputManager *Instance; // rbx
  int v5; // eax
  unsigned int v6; // ebp
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // cl
  const char *v9; // r9
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  int *v14; // rbx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  unsigned int *v21; // r14
  __int64 v22; // rcx
  ISMTracing *v23; // rcx
  int v24; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v26; // [rsp+50h] [rbp+8h] BYREF
  int v27; // [rsp+58h] [rbp+10h] BYREF

  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  v3 = (MPCInputProviderBase *)((char *)this + 24);
  Instance = MPCHolographicInputManager::GetInstance();
  v5 = MPCHolographicInputManager::AddInputProvider(Instance, v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      (const char *)(unsigned int)v5,
      v24);
    return v6;
  }
  else
  {
    if ( !*((_QWORD *)Instance + 412) )
      Microsoft::WRL::ComPtr<IInputProcessorHost>::operator=((char *)Instance + 3296, *((_QWORD *)this + 5));
    if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v3 + 112LL))((char *)this + 24) == 8 )
    {
      v21 = (unsigned int *)*((_QWORD *)this + 6);
      if ( ISMTracing::IsEnabled(v8, v7) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v22,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCEyeGazeProcessor_DeviceAttached_(v23, *v21);
      }
      Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=((char *)Instance + 3352, (char *)this + 24);
    }
    if ( !*((_QWORD *)Instance + 418)
      && (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v3 + 112LL))((char *)this + 24) == 1 )
    {
      if ( *((_QWORD *)Instance + 418) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x7A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCHolographicInputManager.h",
          v9);
      Microsoft::WRL::ComPtr<IMPCInputProviderBase>::operator=((char *)Instance + 3344, (char *)this + 24);
    }
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 112LL))((char *)this + 24);
    v11 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 88LL))((char *)this + 24);
    MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 3576), v11, v10);
    v13 = (_DWORD *)wil::details::static_lazy<ISMTracing>::get(
                      v12,
                      _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( v13 )
    {
      if ( *v13 )
      {
        wil::details::static_lazy<ISMTracing>::get(
          (__int64)v13,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        v14 = (int *)*((_QWORD *)this + 6);
        v16 = (_DWORD *)wil::details::static_lazy<ISMTracing>::get(
                          v15,
                          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
        if ( v16 )
        {
          if ( *v16 )
          {
            v17 = wil::details::static_lazy<ISMTracing>::get(
                    (__int64)v16,
                    _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
            if ( *(_DWORD *)v17 > 4u
              && (*(_BYTE *)(v17 + 16) & 1) != 0
              && (*(_QWORD *)(v17 + 24) & 1LL) == *(_QWORD *)(v17 + 24) )
            {
              v26 = v14[1];
              v27 = *v14;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v17,
                (unsigned int)&unk_180201461,
                v18,
                v19,
                (__int64)&v27,
                (__int64)&v26);
            }
          }
        }
      }
    }
    return 0LL;
  }
}
