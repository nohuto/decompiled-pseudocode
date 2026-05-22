/*
 * XREFs of ?get_AutomationHostProvider@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800B61E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetAutomationHostProvider@CompositionIsland@Composition@UI@Windows@@AEAAJPEAPEAUIInspectable@@@Z @ 0x1800B6042 (-GetAutomationHostProvider@CompositionIsland@Composition@UI@Windows@@AEAAJPEAPEAUIInspectable@@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Api::get_AutomationHostProvider(
        Windows::UI::Composition::CompositionIsland::Api *this,
        struct IInspectable **a2)
{
  Windows::UI::Composition::CompositionIsland *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int AutomationHostProvider; // eax

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositionIsland::Api *)((char *)this - 128);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    AutomationHostProvider = Windows::UI::Composition::CompositionIsland::GetAutomationHostProvider(v2, a2);
    v5 = AutomationHostProvider;
    if ( AutomationHostProvider < 0 )
      DoStackCaptureDirect(AutomationHostProvider, 0x6CFu);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
