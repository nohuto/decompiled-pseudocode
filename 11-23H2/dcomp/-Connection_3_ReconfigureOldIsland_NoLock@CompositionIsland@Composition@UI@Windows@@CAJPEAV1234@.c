/*
 * XREFs of ?Connection_3_ReconfigureOldIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAV1234@_N@Z @ 0x180111CB8
 * Callers:
 *     ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C (-UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite.c)
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Connection_3_ReconfigureOldIsland_NoLock(
        struct IUnknown *a1)
{
  unsigned int v2; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 lpVtbl; // rdx
  __int64 v7; // rcx
  struct IUnknown v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( !a1 )
  {
    v2 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v11);
    return v2;
  }
  v2 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v11);
  if ( v2 )
    goto LABEL_6;
  v3 = v11;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v11 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v2 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    goto LABEL_6;
  }
  AcquireSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  dword_180220AE0 = GetCurrentThreadId();
  lpVtbl = (__int64)a1[27].lpVtbl;
  a1[27].lpVtbl = 0LL;
  v7 = (__int64)a1[3].lpVtbl;
  a1[28].lpVtbl = 0LL;
  LODWORD(a1[23].lpVtbl) = 0;
  HIDWORD(a1[53].lpVtbl) = 0;
  LODWORD(a1[53].lpVtbl) = 0;
  ++HIDWORD(a1[54].lpVtbl);
  BYTE4(a1[23].lpVtbl) = 0;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v7, lpVtbl);
  dword_180220AE0 = 0;
  ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  if ( LOBYTE(a1[48].lpVtbl) )
  {
    v8.lpVtbl = a1->lpVtbl;
    LOBYTE(a1[48].lpVtbl) = 0;
    ((void (__fastcall *)(struct IUnknown *, _QWORD))v8.lpVtbl[13].AddRef)(a1, 0LL);
  }
  v9 = (__int64)a1[3].lpVtbl;
  v10 = (__int64)a1[58].lpVtbl;
  a1[58].lpVtbl = 0LL;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v9, v10);
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  return 0LL;
}
