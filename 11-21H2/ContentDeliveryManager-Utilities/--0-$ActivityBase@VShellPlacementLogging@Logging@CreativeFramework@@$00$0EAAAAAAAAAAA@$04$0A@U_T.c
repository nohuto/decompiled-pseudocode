/*
 * XREFs of ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800DBC7C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800E2404 (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$?0V?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@RefAndObject@?$shared_object@V?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA@$$QEAV?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@3@@Z @ 0x1800DAAE0 (--$-0V-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0I.c)
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800DC410 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_1800DC410.c)
 */

__int64 __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  volatile signed __int32 **v6; // r15
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 **v8; // rbx
  volatile signed __int32 *v9; // rbp
  volatile signed __int32 *v10; // rax
  void *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // r13
  volatile signed __int32 *v14; // rbx

  *(_QWORD *)a1 = &wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  v5 = (_QWORD *)(a1 + 136);
  v5[19] = 0LL;
  v5[20] = 0LL;
  memset_0(v5, 0, 0x98uLL);
  *(_QWORD *)(v4 + 248) = 0LL;
  v6 = (volatile signed __int32 **)(a1 + 312);
  *(_QWORD *)(a1 + 312) = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  v7 = (volatile signed __int32 **)(a2 + 39);
  if ( a2[39] )
  {
    v8 = (volatile signed __int32 **)(a1 + 312);
    *(_QWORD *)(a1 + 48) = a2[6];
    if ( (volatile signed __int32 **)(a1 + 312) != v7 )
    {
      if ( *v8 )
      {
        if ( _InterlockedExchangeAdd(*v8, 0xFFFFFFFF) == 1 )
        {
          v9 = *v8;
          if ( *v8 )
          {
            wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v9 + 2);
            operator delete((void *)v9);
          }
        }
        *v8 = 0LL;
      }
      v10 = *v7;
      *v8 = *v7;
      if ( v10 )
        _InterlockedIncrement(v10);
    }
  }
  else
  {
    v11 = operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      v12 = (volatile signed __int32 *)wil::details::shared_object<wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::RefAndObject(
                                         (__int64)v11,
                                         (__int64)(a2 + 7));
      if ( v12 )
      {
        if ( *v6 )
        {
          if ( _InterlockedExchangeAdd(*v6, 0xFFFFFFFF) == 1 )
          {
            v13 = *v6;
            if ( *v6 )
            {
              wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v13 + 2);
              operator delete((void *)v13);
            }
          }
        }
        *v6 = v12;
        *(_QWORD *)(a1 + 48) = (unsigned __int64)(v12 + 2) & -(__int64)(v12 != 0LL);
        if ( v7 != v6 )
        {
          if ( *v7 )
          {
            if ( !_InterlockedDecrement(*v7) )
            {
              v14 = *v7;
              if ( *v7 )
              {
                wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(v14 + 2);
                operator delete((void *)v14);
              }
            }
            *v7 = 0LL;
            v12 = *v6;
          }
          *v7 = v12;
          if ( v12 )
            _InterlockedIncrement(v12);
        }
        a2[6] = *(_QWORD *)(a1 + 48);
        a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
      }
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
