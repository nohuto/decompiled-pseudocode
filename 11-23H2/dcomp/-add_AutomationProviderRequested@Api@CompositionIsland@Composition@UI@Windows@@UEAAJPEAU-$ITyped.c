/*
 * XREFs of ?add_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x18006B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x18006AB7C (-AddAutomationProviderRequested_Helper@CompositionIsland@Composition@UI@Windows@@AEAAXPEAU-$ITyp.c)
 *     ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ @ 0x18006B72C (-IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::add_AutomationProviderRequested(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1 - 128;
  v4 = 0;
  *a3 = 0LL;
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    if ( Microsoft::WRL2::ContextSession::IsSessionThread(*(Microsoft::WRL2::ContextSession **)(v3 + 24)) )
    {
      Windows::UI::Composition::CompositionIsland::AddAutomationProviderRequested_Helper((__int64 *)v3, a2, a3);
    }
    else
    {
      v4 = -2147417842;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x63F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)0x8001010ELL,
        (int)"Must register event from UI thread",
        v9);
      DoStackCaptureDirect(-2147417842, 0x74Bu);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v4;
}
