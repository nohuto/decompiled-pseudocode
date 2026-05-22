/*
 * XREFs of ?ClearAll@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ @ 0x1801533D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionProperty@@@Z @ 0x1801540B8 (-UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionP.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::ClearAll(
        Windows::UI::Composition::CompositionPointerEventRouter::Partner *this)
{
  char *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  int updated; // eax

  v1 = (char *)this - 136;
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (v1[32] & 2) != 0 )
  {
    updated = Windows::UI::Composition::CompositionPointerEventRouter::UpdateAllConfigs(v1);
    v3 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0x2D4u);
    else
      v3 = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
