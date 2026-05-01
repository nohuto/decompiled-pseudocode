/*
 * XREFs of ??$InvokeDelegates@V_lambda_e58599acbd90c5b132e1494e473a22d4_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_e58599acbd90c5b132e1494e473a22d4_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18003E114
 * Callers:
 *     ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x18003E050 (-Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEn.c)
 * Callees:
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800205D0 (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029FC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_e58599acbd90c5b132e1494e473a22d4_,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
        _QWORD *a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  signed __int32 v7; // eax
  __int64 v8; // r15
  struct IUnknown **i; // r14
  int v10; // eax
  int MatchingRestrictedErrorInfo; // ecx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h]

  v5 = 0;
  v6 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    do
      v7 = *(_DWORD *)(a2 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), v7 + 1, v7) );
    v6 = a2;
    v16 = a2;
  }
  v8 = *(_QWORD *)(v6 + 32);
  for ( i = *(struct IUnknown ***)(v6 + 16); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, *a1);
    v5 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
    }
    else
    {
      if ( v10 >= 0 )
        goto LABEL_18;
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v15 = 0LL;
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        v12 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v12 = v5;
        v5 = v12;
        v13 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v6 = v16;
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
    }
    v5 = 0;
LABEL_18:
    v8 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  return v5;
}
