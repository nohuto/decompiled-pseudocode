/*
 * XREFs of ?EndpointProc@CompositionIsland@Composition@UI@Windows@@CAJPEAXPEBXH@Z @ 0x18006BA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::EndpointProc(
        struct IUnknown *a1,
        const void *a2,
        int a3)
{
  unsigned int v6; // esi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  struct IUnknownVtbl *lpVtbl; // rbp
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = 0LL;
  if ( a1 )
  {
    v6 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
           a1,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
           &v13);
    if ( !v6 )
    {
      v7 = v13;
      v8 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v13 + 3);
      Microsoft::WRL2::ContextSession::BeginApiEntry(v8);
      if ( (*((_BYTE *)v7 + 32) & 2) != 0 )
      {
        if ( ((__int64)a1[4].lpVtbl & 2) == 0 )
        {
LABEL_8:
          Microsoft::WRL2::ContextSession::EndApiEntry(v8);
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
          return 0LL;
        }
        lpVtbl = a1[3].lpVtbl;
        if ( SLODWORD(lpVtbl[3].Release) > 0 && !BYTE1(lpVtbl[4].QueryInterface) )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        ++HIDWORD(lpVtbl[3].Release);
        v10 = CoreUICallReceive(
                a1[56].lpVtbl,
                &ICompositionIslandNotification_Receive<Windows::UI::Composition::CompositionIsland>::Type,
                &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_nojTCorKGaq7usLSlUi67Vt3n6A,
                211LL,
                a1,
                a2,
                a3);
        v6 = v10;
        if ( v10 >= 0 )
        {
          --HIDWORD(lpVtbl[3].Release);
          goto LABEL_8;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59A,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
          (const char *)(unsigned int)v10);
        --HIDWORD(lpVtbl[3].Release);
      }
      else
      {
        v6 = -2147483629;
        RoOriginateErrorW(
          2147483667LL,
          0LL,
          L"The given object has already been closed / disposed and may no longer be used.");
      }
      Microsoft::WRL2::ContextSession::EndApiEntry(v8);
    }
  }
  else
  {
    v6 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
  return v6;
}
