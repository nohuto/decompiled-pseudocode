/*
 * XREFs of ?put_IsPositionYRailsEnabled@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJE@Z @ 0x18011F060
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetRailsEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x18011E0DC (-SetRailsEnabledForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4Scro.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::put_IsPositionYRailsEnabled(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Api *this,
        char a2)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (char *)this - 128;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = 0;
    Windows::UI::Composition::Interactions::VisualInteractionSource::SetRailsEnabledForAxis((__int64)v2, 1, a2 != 0);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
