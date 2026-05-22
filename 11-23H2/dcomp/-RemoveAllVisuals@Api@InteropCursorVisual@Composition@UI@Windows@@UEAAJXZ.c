/*
 * XREFs of ?RemoveAllVisuals@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJXZ @ 0x180198D00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCursorVisual::Api::RemoveAllVisuals(
        Windows::UI::Composition::InteropCursorVisual::Api *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // edi
  int v4; // eax

  v1 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    v4 = Windows::UI::Composition::Visual::RemoveAllChildren((Windows::UI::Composition::InteropCursorVisual::Api *)((char *)this - 296));
    v3 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x10Eu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v3;
}
