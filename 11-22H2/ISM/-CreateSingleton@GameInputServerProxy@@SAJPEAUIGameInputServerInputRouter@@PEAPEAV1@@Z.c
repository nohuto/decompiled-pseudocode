/*
 * XREFs of ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18004B640
 * Callers:
 *     GameInputServerCreate @ 0x18004B550 (GameInputServerCreate.c)
 * Callees:
 *     ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x18004B71C (--0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z.c)
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18004B808 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InitPublicReferenceCount@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@IEAAXXZ @ 0x18006D908 (-InitPublicReferenceCount@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@I.c)
 *     ?PrivateRelease@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@QEAAXXZ @ 0x18006D9CC (-PrivateRelease@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@QEAAXXZ.c)
 *     ??1ExclusiveSrwLock@@QEAA@XZ @ 0x180125E68 (--1ExclusiveSrwLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputServerProxy::CreateSingleton(
        struct IGameInputServerInputRouter *a1,
        struct GameInputServerProxy **a2)
{
  unsigned int v3; // ebx
  int v5; // edx
  GameInputServerProxy *v6; // rax
  SharedObjectBase *v7; // rax
  int GameInput; // edi
  int v9; // edx
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v11 = &GameInputServerProxy::s_singletonLock;
  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  if ( GameInputServerProxy::s_singleton )
  {
    v3 = -2147418113;
LABEL_10:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v3, v5);
    goto LABEL_11;
  }
  v6 = (GameInputServerProxy *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    GameInputServerProxy::s_singleton = 0LL;
    goto LABEL_9;
  }
  v7 = GameInputServerProxy::GameInputServerProxy(v6, a1);
  GameInputServerProxy::s_singleton = v7;
  if ( !v7 )
  {
LABEL_9:
    v3 = -2147024882;
    goto LABEL_10;
  }
  GameInput = GameInputServerProxy::LoadGameInput(v7);
  if ( GameInput < 0 )
  {
    SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::PrivateRelease();
    GameInputServerProxy::s_singleton = 0LL;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)GameInput, v9);
    v3 = GameInput;
  }
  else
  {
    SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::InitPublicReferenceCount();
    *a2 = GameInputServerProxy::s_singleton;
  }
LABEL_11:
  ExclusiveSrwLock::~ExclusiveSrwLock((ExclusiveSrwLock *)&v11);
  return v3;
}
