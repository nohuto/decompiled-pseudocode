/*
 * XREFs of ?Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@PEAX@Z @ 0x180111E48
 * Callers:
 *     ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C (-UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18000B520 (--$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Det.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180060B30 (-SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ??4?$RefPtr@VCompositionIslandSite@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionIslandSite@Composition@UI@Windows@@@Z @ 0x18006BDF4 (--4-$RefPtr@VCompositionIslandSite@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComp.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?DestroySharedVisualTarget@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18011223C (-DestroySharedVisualTarget@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Connection_4_ReconfigureIsland_NoLock(
        struct Windows::UI::Composition::CompositionIslandSite *a1,
        struct Windows::UI::Composition::CompositionIsland *a2,
        void *a3)
{
  unsigned int v6; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  int v10; // ebp
  unsigned int v11; // esi
  const char *v12; // r9
  int v13; // eax
  Windows::UI::Composition::VisualTarget *v14; // rsi
  struct Windows::UI::Composition::Visual *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+68h] [rbp+10h] BYREF
  void *v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v17 = 0LL;
  if ( !a2 )
  {
    v6 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
    return v6;
  }
  v6 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         (struct IUnknown *)a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v17);
  if ( v6 )
  {
    if ( v17 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v17);
    return v6;
  }
  v8 = v17;
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v17 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
  v10 = 2;
  if ( (*((_BYTE *)v8 + 32) & 2) == 0 )
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v9);
LABEL_20:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
    return v11;
  }
  AcquireSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  dword_180220AE0 = GetCurrentThreadId();
  Windows::UI::Composition::CompositionIsland::DestroySharedVisualTarget(a2);
  if ( *((_QWORD *)a2 + 27) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  if ( a3 )
  {
    v17 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)a2 + 3);
    v13 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::VisualTarget,Windows::UI::Composition::Compositor *,void * &>(
            (Windows::UI::Composition::VisualTarget **)a2 + 46,
            &v17,
            &v18);
    v11 = v13;
    if ( v13 < 0 )
    {
      DoStackCaptureDirect(v13, 0x2DEu);
      dword_180220AE0 = 0;
      ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
      goto LABEL_19;
    }
    v14 = (Windows::UI::Composition::VisualTarget *)*((_QWORD *)a2 + 46);
    v15 = (struct Windows::UI::Composition::Visual *)(*(__int64 (__fastcall **)(struct Windows::UI::Composition::CompositionIsland *))(*(_QWORD *)a2 + 296LL))(a2);
    Windows::UI::Composition::VisualTarget::SetRoot(v14, v15);
  }
  else
  {
    v10 = 1;
  }
  *((_DWORD *)a2 + 46) = v10;
  if ( *((_BYTE *)a2 + 188) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      744LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionIslandSite>::operator=(
    (Microsoft::WRL2::NestableRuntimeClass **)a2 + 27,
    a1);
  *((_QWORD *)a2 + 28) = *((_QWORD *)a1 + 30);
  *((_BYTE *)a2 + 360) = 0;
  dword_180220AE0 = 0;
  ReleaseSRWLockExclusive(&Windows::UI::Composition::CompositionIsland::s_sharedLock);
  v11 = 0;
LABEL_19:
  Microsoft::WRL2::ContextSession::EndApiEntry(v9);
  if ( v8 )
    goto LABEL_20;
  return v11;
}
