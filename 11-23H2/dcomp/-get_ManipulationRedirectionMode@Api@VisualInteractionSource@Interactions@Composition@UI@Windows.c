/*
 * XREFs of ?get_ManipulationRedirectionMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAW4VisualInteractionSourceRedirectionMode@3456@@Z @ 0x18011E900
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::get_ManipulationRedirectionMode(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Api *this,
        enum Windows::UI::Composition::Interactions::VisualInteractionSourceRedirectionMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi

  *(_DWORD *)a2 = 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 34);
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
