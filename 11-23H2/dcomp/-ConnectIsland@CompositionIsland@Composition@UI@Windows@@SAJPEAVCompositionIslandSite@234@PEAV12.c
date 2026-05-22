/*
 * XREFs of ?ConnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x18006BCE4
 * Callers:
 *     ?ConnectIsland@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@@Z @ 0x18006B760 (-ConnectIsland@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@.c)
 * Callees:
 *     ??4?$RefPtr@VCompositionIslandSite@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionIslandSite@Composition@UI@Windows@@@Z @ 0x18006BDF4 (--4-$RefPtr@VCompositionIslandSite@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComp.c)
 *     ?NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006D690 (-NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Num.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x180111694 (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::ConnectIsland(
        struct Windows::UI::Composition::CompositionIslandSite *a1,
        struct Windows::UI::Composition::CompositionIsland *a2)
{
  const char *v4; // r9
  __int64 v5; // rax
  const char *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = &Windows::UI::Composition::CompositionIsland::s_sharedLock;
  AcquireSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  dword_180220AE0 = GetCurrentThreadId();
  if ( *((_DWORD *)a2 + 46) || *((_DWORD *)a1 + 45) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x375,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)0x8007139FLL,
      (int)"Objects already connected.",
      v7);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v9);
    return 2147947423LL;
  }
  else
  {
    if ( *((_BYTE *)a2 + 188) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x377,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        v4);
    *((_DWORD *)a2 + 46) = 1;
    *((_DWORD *)a1 + 45) = 1;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionIslandSite>::operator=((char *)a2 + 216, a1);
    v5 = *((_QWORD *)a1 + 30);
    *((_QWORD *)a1 + 23) = a2;
    *((_QWORD *)a2 + 28) = v5;
    *((_QWORD *)a1 + 24) = *((_QWORD *)a2 + 57);
    (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionIslandSite *))(*(_QWORD *)a1 + 296LL))(a1);
    *((_BYTE *)a2 + 360) = 0;
    Windows::UI::Composition::CompositionIslandSite::NotifyToIsland_ActualSizeChanged(a1, *((_QWORD *)a1 + 20));
    dword_180220AE0 = 0;
    ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
    return 0LL;
  }
}
