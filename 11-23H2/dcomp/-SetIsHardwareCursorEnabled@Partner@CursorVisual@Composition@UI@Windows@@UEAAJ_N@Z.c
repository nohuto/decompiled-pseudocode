/*
 * XREFs of ?SetIsHardwareCursorEnabled@Partner@CursorVisual@Composition@UI@Windows@@UEAAJ_N@Z @ 0x180175B50
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetIsHardwareCursorEnabled@CursorVisual@Composition@UI@Windows@@QEAAX_N@Z @ 0x180175AE8 (-SetIsHardwareCursorEnabled@CursorVisual@Composition@UI@Windows@@QEAAX_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CursorVisual::Partner::SetIsHardwareCursorEnabled(
        Windows::UI::Composition::CursorVisual::Partner *this,
        unsigned __int8 a2)
{
  Windows::UI::Composition::CursorVisual *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::CursorVisual::Partner *)((char *)this - 312);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 36);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::CursorVisual::SetIsHardwareCursorEnabled(v2, a2);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
