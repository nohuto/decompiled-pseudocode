/*
 * XREFs of ?put_PositionXChainingMode@Api@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJW4InteractionChainingMode@3456@@Z @ 0x18011F180
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@2345@@Z @ 0x18011DE74 (-SetChainingModeForAxis@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAXW4Scro.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::Api::put_PositionXChainingMode(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = a1 - 128;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    Windows::UI::Composition::Interactions::VisualInteractionSource::SetChainingModeForAxis(v2, 0, a2);
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
