/*
 * XREFs of ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18044B790
 * Callers:
 *     <none>
 * Callees:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180065F3C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 */

__int64 __fastcall XamlLauncher::OnFirstSignAnimationFinished(XamlLauncher *this)
{
  HANDLE EventW; // rax

  if ( PerSessionState::HasLoginCompleted(this) )
  {
    if ( !CLauncherLoginEvent::s_hEvent )
    {
      EventW = CreateEventW(0LL, 1, 1, L"ShellLauncherLoginEvent");
      CLauncherLoginEvent::s_hEvent = EventW;
      if ( EventW )
        SetEvent(EventW);
    }
  }
  return 0LL;
}
