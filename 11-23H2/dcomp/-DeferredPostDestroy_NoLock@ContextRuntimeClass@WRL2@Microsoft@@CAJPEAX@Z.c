/*
 * XREFs of ?DeferredPostDestroy_NoLock@ContextRuntimeClass@WRL2@Microsoft@@CAJPEAX@Z @ 0x180028060
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ @ 0x18006B72C (-IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextRuntimeClass::DeferredPostDestroy_NoLock(
        volatile signed __int32 **a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  Microsoft::WRL2::ContextSession *v4; // rbx
  int v5; // ecx
  volatile signed __int32 *v6; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  Microsoft::WRL2::ContextSession *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( !*a1 )
    Microsoft::WRL2::FailFast::Unexpected("Cannot allocate PostDestroyInfo");
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)v2 + 3);
  v9 = v4;
  if ( v4 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)v4 + 4) == 1 )
      (*(void (__fastcall **)(Microsoft::WRL2::ContextSession *))(*(_QWORD *)v4 + 80LL))(v4);
    v4 = v9;
  }
  if ( (v2[8] & 0x100) == 0 )
    goto LABEL_7;
  if ( (v2[8] & 1) == 0 )
  {
LABEL_24:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v9);
    goto LABEL_14;
  }
  if ( !Microsoft::WRL2::ContextSession::IsSessionThread(v4) )
  {
    RoOriginateErrorW(2147549454LL, 0LL, L"The caller must call Close / Dispose from the owning thread.");
    goto LABEL_24;
  }
LABEL_7:
  if ( (v2[8] & 0x10) != 0 )
  {
    if ( *((_DWORD *)v4 + 27) )
      Microsoft::WRL2::FailFast::Unexpected("ContextSession RIP");
    v4 = v9;
    EnterCriticalSection((LPCRITICAL_SECTION)v9 + 1);
    v5 = *((_DWORD *)v4 + 20);
    if ( v5 != *((_DWORD *)v4 + 21) + *((_DWORD *)v4 + 22) )
      Microsoft::WRL2::FailFast::Unexpected("ContextSession begin counts");
    *((_DWORD *)v4 + 20) = v5 + 1;
    Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)v2);
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  }
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(Microsoft::WRL2::ContextSession *, __int64))(*(_QWORD *)v9 + 64LL))(v9, a2);
  }
LABEL_14:
  v6 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, a2);
    }
  }
  v7 = (Microsoft::WRL2::NestableRuntimeClass *)*a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
  }
  operator delete(a1, 8uLL);
  return 0LL;
}
