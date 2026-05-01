/*
 * XREFs of ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180021024
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001F590 (-add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180021E94 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18002AC4C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rdi
  Microsoft::WRL::Details::EventTargetArray *v9; // rcx
  __int64 v10; // rcx
  int v11; // esi
  Microsoft::WRL::Details::EventTargetArray *v13; // rax
  Microsoft::WRL::Details::EventTargetArray *v14; // r14
  void **v15; // r15
  struct IUnknown **i; // rsi
  Microsoft::WRL::Details::EventTargetArray *v17; // rsi
  Microsoft::WRL::Details::EventTargetArray *v18; // rcx
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
  v19 = 0LL;
  if ( v9 )
    v10 = ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3) + 1;
  else
    v10 = 1LL;
  v20 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v19,
          &v20);
  if ( v11 >= 0 )
  {
    v13 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v14 = v19;
    if ( *(_QWORD *)a1 )
    {
      v15 = (void **)*((_QWORD *)v13 + 4);
      for ( i = (struct IUnknown **)*((_QWORD *)v13 + 2); i != *((struct IUnknown ***)v13 + 3); ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v14, *i, *v15);
        v13 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
        ++v15;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v14, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v17 = 0LL;
    if ( &v19 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      v17 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
      *(_QWORD *)a1 = 0LL;
    }
    v18 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    *(_QWORD *)a1 = v14;
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
    return 0LL;
  }
  else
  {
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v11;
  }
}
