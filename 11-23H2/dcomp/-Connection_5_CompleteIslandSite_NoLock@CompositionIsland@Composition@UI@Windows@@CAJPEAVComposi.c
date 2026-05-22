/*
 * XREFs of ?Connection_5_CompleteIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x18011206C
 * Callers:
 *     ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C (-UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite.c)
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006D690 (-NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Num.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Connection_5_CompleteIslandSite_NoLock(
        struct Windows::UI::Composition::CompositionIslandSite *a1,
        struct Windows::UI::Composition::CompositionIsland *a2)
{
  unsigned int v4; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( !a1 )
  {
    v4 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v8);
    return v4;
  }
  v4 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         (struct IUnknown *)a1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v8);
  if ( v4 )
    goto LABEL_6;
  v5 = v8;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v8 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v5 + 32) & 2) == 0 )
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v6);
    goto LABEL_6;
  }
  *((_QWORD *)a1 + 23) = a2;
  *((_QWORD *)a1 + 24) = *((_QWORD *)a2 + 57);
  (*(void (__fastcall **)(struct Windows::UI::Composition::CompositionIslandSite *))(*(_QWORD *)a1 + 296LL))(a1);
  Windows::UI::Composition::CompositionIslandSite::NotifyToIsland_ActualSizeChanged((__int64)a1, *((_QWORD *)a1 + 20));
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  return 0LL;
}
