/*
 * XREFs of ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180077A1C
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800798A0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180079DF0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 * Callees:
 *     ??0?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180077B44 (--0-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180077B44.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802DF530 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 **v4; // r14
  volatile signed __int32 **v5; // rdi
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rsi
  volatile signed __int32 *v10; // rsi
  volatile signed __int32 *v11; // r13
  volatile signed __int32 *v12; // rsi

  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  v4 = (volatile signed __int32 **)(a2 + 39);
  v5 = (volatile signed __int32 **)(a1 + 312);
  if ( a2[39] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    if ( v5 != v4 )
    {
      if ( *v5 )
      {
        if ( _InterlockedExchangeAdd(*v5, 0xFFFFFFFF) == 1 )
        {
          v10 = *v5;
          if ( *v5 )
          {
            wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v10 + 2);
            operator delete((void *)v10, 0x108uLL);
          }
        }
        *v5 = 0LL;
      }
      v6 = *v4;
      *v5 = *v4;
      if ( v6 )
        _InterlockedIncrement(v6);
    }
  }
  else
  {
    v8 = (volatile signed __int32 *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      *v8 = 1;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
        v8 + 2,
        a2 + 7);
      if ( *v5 )
      {
        if ( _InterlockedExchangeAdd(*v5, 0xFFFFFFFF) == 1 )
        {
          v11 = *v5;
          if ( *v5 )
          {
            wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v11 + 2);
            operator delete((void *)v11, 0x108uLL);
          }
        }
      }
      *v5 = v9;
      *(_QWORD *)(a1 + 48) = (unsigned __int64)(v9 + 2) & -(__int64)(v9 != 0LL);
      if ( v4 != v5 )
      {
        if ( *v4 )
        {
          if ( _InterlockedExchangeAdd(*v4, 0xFFFFFFFF) == 1 )
          {
            v12 = *v4;
            if ( *v4 )
            {
              wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v12 + 2);
              operator delete((void *)v12, 0x108uLL);
            }
          }
          *v4 = 0LL;
          v9 = *v5;
        }
        *v4 = v9;
        if ( v9 )
          _InterlockedIncrement(v9);
      }
      a2[6] = *(_QWORD *)(a1 + 48);
      a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
