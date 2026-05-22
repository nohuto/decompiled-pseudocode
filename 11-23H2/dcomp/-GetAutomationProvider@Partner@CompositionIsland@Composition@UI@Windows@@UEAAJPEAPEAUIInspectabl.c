/*
 * XREFs of ?GetAutomationProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180112590
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?GetAutomationProvider_Callback@CompositionIsland@Composition@UI@Windows@@QEAAJPEAPEAUIInspectable@@@Z @ 0x180112650 (-GetAutomationProvider_Callback@CompositionIsland@Composition@UI@Windows@@QEAAJPEAPEAUIInspectab.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Partner::GetAutomationProvider(
        Windows::UI::Composition::CompositionIsland::Partner *this,
        struct IInspectable **a2)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v6; // rdi
  int AutomationProvider_Callback; // eax
  unsigned int v8; // esi

  v2 = (char *)this - 144;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v6 = *((_QWORD *)v2 + 3);
    if ( *(int *)(v6 + 88) > 0 && !*(_BYTE *)(v6 + 97) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    ++*(_DWORD *)(v6 + 92);
    AutomationProvider_Callback = Windows::UI::Composition::CompositionIsland::GetAutomationProvider_Callback(
                                    (Windows::UI::Composition::CompositionIsland *)v2,
                                    a2);
    v8 = AutomationProvider_Callback;
    if ( AutomationProvider_Callback < 0 )
    {
      DoStackCaptureDirect(AutomationProvider_Callback, 0x80Du);
      --*(_DWORD *)(v6 + 92);
    }
    else
    {
      --*(_DWORD *)(v6 + 92);
      v8 = 0;
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return v8;
  }
  else
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return 2147483667LL;
  }
}
