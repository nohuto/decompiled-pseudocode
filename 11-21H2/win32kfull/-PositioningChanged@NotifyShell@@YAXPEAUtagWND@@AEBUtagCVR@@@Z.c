/*
 * XREFs of ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00F4C7C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00694C0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00F4CFC (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C0237004 (_anonymous_namespace_--WindowSizingUpdate.c)
 */

void __fastcall NotifyShell::PositioningChanged(NotifyShell *this, struct tagWND *a2, const struct tagCVR *a3)
{
  int v3; // eax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // r8d

  v3 = *((_DWORD *)a2 + 8);
  if ( (v3 & 0x80u) != 0 )
  {
    NotifyShell::CuratedWindowHidden(this, a2, a3);
    v3 = *((_DWORD *)a2 + 8);
  }
  if ( (v3 & 0x1100C0) == 0
    && (v3 & 3) != 3
    && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState(this) )
  {
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)this, (const struct tagWND *)0x10, v6) )
      NotifyShell::TrackedWindowPosChanged(this, 0LL, v8);
    if ( IsShellParticipatesInSizing(this, v7, v8) )
      anonymous_namespace_::WindowSizingUpdate(this);
  }
}
