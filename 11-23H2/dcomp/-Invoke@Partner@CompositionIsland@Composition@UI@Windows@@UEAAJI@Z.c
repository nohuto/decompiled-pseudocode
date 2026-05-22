/*
 * XREFs of ?Invoke@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJI@Z @ 0x180112CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z @ 0x18006B610 (-UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::Partner::Invoke(
        Windows::UI::Composition::CompositionIsland::Partner *this,
        int a2)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v6; // rdi
  int v7; // eax

  v2 = (char *)this - 152;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    if ( a2 == *((_DWORD *)v2 + 109) )
    {
      v6 = *((_QWORD *)v2 + 3);
      if ( *(int *)(v6 + 88) > 0 && !*(_BYTE *)(v6 + 97) || (++*(_DWORD *)(v6 + 92), (v7 = *((_DWORD *)v2 + 106)) == 0) )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      *((_DWORD *)v2 + 106) = v7 - 1;
      Windows::UI::Composition::CompositionIsland::UpdateDeferredNotifications_Callback(
        (Microsoft::WRL2::ContextSession **)v2,
        0);
      --*(_DWORD *)(v6 + 92);
    }
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return 0LL;
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
