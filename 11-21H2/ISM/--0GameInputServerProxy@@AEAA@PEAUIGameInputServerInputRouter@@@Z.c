/*
 * XREFs of ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x18003425C
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x18003360C (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

GameInputServerProxy *__fastcall GameInputServerProxy::GameInputServerProxy(
        GameInputServerProxy *this,
        struct IGameInputServerInputRouter *a2)
{
  __int64 v3; // rcx

  *((_QWORD *)this + 1) = 0x200000000LL;
  *(_QWORD *)this = &GameInputServerProxy::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &GameInputServerProxy::`vftable'{for `IGameInputServer'};
  *((_QWORD *)this + 3) = &GameInputServerProxy::`vftable'{for `IGameInputServerDownlevel'};
  *((_QWORD *)this + 4) = &GameInputServerProxy::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 5) = &GameInputServerProxy::`vftable'{for `INoMarshal'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = a2;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = -1LL;
  *((_QWORD *)this + 14) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_QWORD *)this + 30) = 0LL;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
