/*
 * XREFs of ?put_CenterPoint@Api@CompositionClip@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x180156160
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetCenterPoint@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z @ 0x1801557D8 (-SetCenterPoint@CompositionClip@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionClip::Api::put_CenterPoint(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 144;
  v7[0] = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 144 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::CompositionClip::SetCenterPoint(
           (__int64 **)v2,
           (const struct Windows::Foundation::Numerics::Vector2 *)v7);
    v4 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x110u);
    else
      v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
