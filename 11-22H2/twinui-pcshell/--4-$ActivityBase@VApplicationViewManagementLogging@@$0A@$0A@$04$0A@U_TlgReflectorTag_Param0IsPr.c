/*
 * XREFs of ??4?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800C7F20
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180065328 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1803CBB84 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 */

__int64 __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 **v4; // r14
  volatile signed __int32 **v5; // r15
  char *v6; // rax
  char *v7; // rbx
  char v8; // al
  volatile signed __int32 *v9; // rax
  void *v11; // rdi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rbx

  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  v4 = (volatile signed __int32 **)(a2 + 312);
  v5 = (volatile signed __int32 **)(a1 + 312);
  if ( *(_QWORD *)(a2 + 312) )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a1 + 312,
      a2 + 312);
  }
  else
  {
    v6 = (char *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      *(_DWORD *)v6 = 1;
      *((_DWORD *)v6 + 2) = 0;
      v6[12] = 0;
      *((_DWORD *)v6 + 2) = *(_DWORD *)(a2 + 56);
      v6[12] = *(_BYTE *)(a2 + 60);
      *((_OWORD *)v6 + 1) = *(_OWORD *)(a2 + 64);
      *((_OWORD *)v6 + 2) = *(_OWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 56) = 0;
      *(_BYTE *)(a2 + 60) = 0;
      *((_OWORD *)v6 + 3) = 0LL;
      *((_OWORD *)v6 + 4) = 0LL;
      *((_DWORD *)v6 + 12) = *(_DWORD *)(a2 + 96);
      *((_QWORD *)v6 + 7) = *(_QWORD *)(a2 + 104);
      if ( v6[72] )
      {
        v11 = (void *)*((_QWORD *)v6 + 8);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v11);
        v7[72] = 0;
      }
      *((_QWORD *)v7 + 8) = 0LL;
      *((_QWORD *)v7 + 8) = *(_QWORD *)(a2 + 112);
      v8 = *(_BYTE *)(a2 + 120);
      *(_QWORD *)(a2 + 112) = 0LL;
      v7[72] = v8;
      *(_BYTE *)(a2 + 120) = 0;
      *((_DWORD *)v7 + 20) = *(_DWORD *)(a2 + 128);
      *((_DWORD *)v7 + 21) = *(_DWORD *)(a2 + 132);
      *(_OWORD *)(v7 + 88) = *(_OWORD *)(a2 + 136);
      *(_OWORD *)(v7 + 104) = *(_OWORD *)(a2 + 152);
      *(_OWORD *)(v7 + 120) = *(_OWORD *)(a2 + 168);
      *(_OWORD *)(v7 + 136) = *(_OWORD *)(a2 + 184);
      *(_OWORD *)(v7 + 152) = *(_OWORD *)(a2 + 200);
      *(_OWORD *)(v7 + 168) = *(_OWORD *)(a2 + 216);
      *(_OWORD *)(v7 + 184) = *(_OWORD *)(a2 + 232);
      *(_OWORD *)(v7 + 200) = *(_OWORD *)(a2 + 248);
      *(_OWORD *)(v7 + 216) = *(_OWORD *)(a2 + 264);
      *((_QWORD *)v7 + 29) = *(_QWORD *)(a2 + 280);
      *((_QWORD *)v7 + 30) = *(_QWORD *)(a2 + 288);
      *((_QWORD *)v7 + 31) = *(_QWORD *)(a2 + 296);
      *(_QWORD *)(a2 + 288) = 0LL;
      *(_QWORD *)(a2 + 296) = 0LL;
      *((_QWORD *)v7 + 32) = 0LL;
      if ( *v5 )
      {
        if ( _InterlockedExchangeAdd(*v5, 0xFFFFFFFF) == 1 )
        {
          v13 = *v5;
          if ( *v5 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v13 + 2));
            operator delete((void *)v13, 0x108uLL);
          }
        }
      }
      *v5 = (volatile signed __int32 *)v7;
      *(_QWORD *)(a1 + 48) = v7 + 8;
      if ( v4 != v5 )
      {
        if ( *v4 )
        {
          if ( _InterlockedExchangeAdd(*v4, 0xFFFFFFFF) == 1 )
          {
            v14 = *v4;
            if ( *v4 )
            {
              wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v14 + 2));
              operator delete((void *)v14, 0x108uLL);
            }
          }
          *v4 = 0LL;
        }
        v9 = *v5;
        *v4 = *v5;
        if ( v9 )
          _InterlockedIncrement(v9);
      }
      *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
