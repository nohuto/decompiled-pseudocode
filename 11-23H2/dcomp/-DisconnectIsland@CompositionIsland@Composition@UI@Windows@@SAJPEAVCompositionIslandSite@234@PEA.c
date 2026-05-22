/*
 * XREFs of ?DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x180009AB0
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800105AC (-Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?DisconnectIsland@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@@Z @ 0x180112290 (-DisconnectIsland@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSi.c)
 * Callees:
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::DisconnectIsland(
        struct Windows::UI::Composition::CompositionIslandSite *a1,
        struct Windows::UI::Composition::CompositionIsland *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  AcquireSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  dword_180220AE0 = GetCurrentThreadId();
  if ( __PAIR128__(*((_QWORD *)a1 + 23), *((_QWORD *)a2 + 27)) == __PAIR128__(
                                                                    (unsigned __int64)a2,
                                                                    (unsigned __int64)a1) )
  {
    (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionIslandSite *))(*(_QWORD *)a1 + 304LL))(a1);
    *((_BYTE *)a2 + 188) = 0;
    *((_DWORD *)a2 + 46) = 0;
    *((_DWORD *)a1 + 45) = 0;
    *((_QWORD *)a2 + 28) = 0LL;
    *((_QWORD *)a1 + 24) = 0LL;
    v4 = *((_QWORD *)a2 + 27);
    *((_QWORD *)a2 + 27) = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(*((_QWORD *)a2 + 3), v4);
    *((_QWORD *)a1 + 23) = 0LL;
    ++*((_DWORD *)a2 + 109);
    *((_QWORD *)a2 + 53) = 0LL;
    ++*((_DWORD *)a1 + 54);
    dword_180220AE0 = 0;
    ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
    if ( *((_BYTE *)a2 + 384) )
    {
      v5 = *(_QWORD *)a2;
      *((_BYTE *)a2 + 384) = 0;
      (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionIsland *, _QWORD))(v5 + 320))(a2, 0LL);
    }
    v6 = *((_QWORD *)a2 + 3);
    v7 = *((_QWORD *)a2 + 58);
    *((_QWORD *)a2 + 58) = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v6, v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x3A7,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)0x8007139FLL,
      (int)"Objects not connected to each other.",
      v9);
    dword_180220AE0 = 0;
    ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
    return 2147947423LL;
  }
}
