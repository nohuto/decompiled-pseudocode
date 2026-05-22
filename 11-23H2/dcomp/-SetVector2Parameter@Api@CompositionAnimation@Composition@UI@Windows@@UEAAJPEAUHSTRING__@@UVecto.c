/*
 * XREFs of ?SetVector2Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector2@Numerics@Foundation@5@@Z @ 0x18014FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z @ 0x18014FD04 (-SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::SetVector2Parameter(
        __int64 a1,
        HSTRING a2,
        __int64 a3)
{
  Windows::UI::Composition::CompositionAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v6; // edi
  int v7; // eax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (Windows::UI::Composition::CompositionAnimation *)(a1 - 128);
  v9[0] = a3;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v7 = Windows::UI::Composition::CompositionAnimation::SetVector2Parameter(
           v3,
           a2,
           (const struct Windows::Foundation::Numerics::Vector2 *)v9);
    v6 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x6F7u);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
