/*
 * XREFs of ?Deferred_InvokeTransformChanged@CompositionIsland@Composition@UI@Windows@@CAJPEAX@Z @ 0x18006B870
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B500 (-InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     wil::details::ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___::_ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___ @ 0x1801116BC (wil--details--ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___--_ScopeExitFn__lambda_b2cb.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Deferred_InvokeTransformChanged(
        Microsoft::WRL2::NestableRuntimeClass *a1)
{
  struct IUnknown *v1; // rcx
  unsigned int v2; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rsi
  Microsoft::WRL2::NestableRuntimeClass **v7; // [rsp+20h] [rbp-10h] BYREF
  char v8; // [rsp+28h] [rbp-8h]
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+50h] [rbp+20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+58h] [rbp+28h] BYREF

  v10 = 0LL;
  v9 = a1;
  v7 = &v9;
  v8 = 1;
  v1 = (struct IUnknown *)(((unsigned __int64)a1 + 128) & -(__int64)(a1 != 0LL));
  if ( !v1 )
  {
    v2 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
    goto LABEL_10;
  }
  v2 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         v1,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v10);
  if ( v2 )
  {
LABEL_10:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    wil::details::ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___::_ScopeExitFn__lambda_b2cb5666e9167eff148b60ff2fc879bb___(&v7);
    return v2;
  }
  v3 = v10;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v10 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    v2 = 0;
    goto LABEL_10;
  }
  v5 = *((_QWORD *)v9 + 3);
  if ( *(int *)(v5 + 88) > 0 && !*(_BYTE *)(v5 + 97) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  ++*(_DWORD *)(v5 + 92);
  Windows::UI::Composition::CompositionIsland::InvokeTransformChanged_Callback(v9);
  --*(_DWORD *)(v5 + 92);
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  return 0LL;
}
