/*
 * XREFs of ?get_PositionXSourceMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAW4InteractionSourceMode@3456@@Z @ 0x18011EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::get_PositionXSourceMode(
        Windows::UI::Composition::Interactions::VisualInteractionSource::Api *this,
        enum Windows::UI::Composition::Interactions::InteractionSourceMode *a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  char v6; // cl

  v3 = 0;
  *(_DWORD *)a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    v6 = *((_BYTE *)this + 72);
    if ( (v6 & 1) != 0 )
      *(_DWORD *)a2 = 2 - ((v6 & 2) != 0);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
