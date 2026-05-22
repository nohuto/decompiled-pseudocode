/*
 * XREFs of ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18003360C
 * Callers:
 *     GameInputServerCreate @ 0x1800335B8 (GameInputServerCreate.c)
 * Callees:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x18003370C (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x18003425C (--0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1ExclusiveSrwLock@@QEAA@XZ @ 0x1800FBFA0 (--1ExclusiveSrwLock@@QEAA@XZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800FC4EC (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800FC644 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
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
LABEL_12:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v3, v5);
    goto LABEL_13;
  }
  v6 = (GameInputServerProxy *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
  {
    GameInputServerProxy::s_singleton = 0LL;
    goto LABEL_11;
  }
  v7 = GameInputServerProxy::GameInputServerProxy(v6, a1);
  GameInputServerProxy::s_singleton = v7;
  if ( !v7 )
  {
LABEL_11:
    v3 = -2147024882;
    goto LABEL_12;
  }
  GameInput = GameInputServerProxy::LoadGameInput(v7);
  if ( GameInput < 0 )
  {
    SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
    GameInputServerProxy::s_singleton = 0LL;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)GameInput, v9);
    v3 = GameInput;
  }
  else
  {
    if ( (unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)GameInputServerProxy::s_singleton + 1, 2uLL) )
      __fastfail(0xEu);
    *a2 = GameInputServerProxy::s_singleton;
  }
LABEL_13:
  ExclusiveSrwLock::~ExclusiveSrwLock((ExclusiveSrwLock *)&v11);
  return v3;
}
