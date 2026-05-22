/*
 * XREFs of ??1GameInputServerProxy@@EEAA@XZ @ 0x1800FC01C
 * Callers:
 *     ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x1800FC1E0 (--_GGameInputServerProxy@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1GameInputWatcher@@QEAA@XZ @ 0x1800FC0D8 (--1GameInputWatcher@@QEAA@XZ.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x1800FC17C (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 */

void __fastcall GameInputServerProxy::~GameInputServerProxy(GameInputServerProxy *this, unsigned int a2)
{
  __int64 v3; // rcx
  GameInputServerProxy::Device **v4; // rbx
  GameInputServerProxy::Device *v5; // rcx
  GameInputServerProxy::Device **v6; // rax

  *(_QWORD *)this = &GameInputServerProxy::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &GameInputServerProxy::`vftable'{for `IGameInputServer'};
  *((_QWORD *)this + 3) = &GameInputServerProxy::`vftable'{for `IGameInputServerDownlevel'};
  *((_QWORD *)this + 4) = &GameInputServerProxy::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 5) = &GameInputServerProxy::`vftable'{for `INoMarshal'};
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (GameInputServerProxy::Device **)((char *)this + 216);
  while ( 1 )
  {
    v5 = *v4;
    v6 = *(GameInputServerProxy::Device ***)*v4;
    if ( *((GameInputServerProxy::Device ***)*v4 + 1) != v4 || v6[1] != v5 )
      __fastfail(3u);
    *v4 = (GameInputServerProxy::Device *)v6;
    v6[1] = (GameInputServerProxy::Device *)v4;
    if ( v5 == (GameInputServerProxy::Device *)v4 )
      break;
    GameInputServerProxy::Device::`scalar deleting destructor'(v5, a2);
    --*((_QWORD *)this + 29);
  }
  GameInputWatcher::~GameInputWatcher((GameInputServerProxy *)((char *)this + 88));
  SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>::~SharedUnknownBase<IGameInputServer,IGameInputServerDownlevel,IAgileObject,INoMarshal>(this);
}
