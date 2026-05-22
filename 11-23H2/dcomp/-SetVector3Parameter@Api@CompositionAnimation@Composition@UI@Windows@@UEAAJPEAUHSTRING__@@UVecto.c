/*
 * XREFs of ?SetVector3Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector3@Numerics@Foundation@5@@Z @ 0x180089380
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::SetVector3Parameter(
        __int64 a1,
        HSTRING a2,
        const struct Windows::Foundation::Numerics::Vector3 *a3)
{
  Windows::UI::Composition::CompositionAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v3 = (Windows::UI::Composition::CompositionAnimation *)(a1 - 128);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v7 = Windows::UI::Composition::CompositionAnimation::SetVector3Parameter(v3, a2, a3);
    v8 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x70Bu);
    else
      v8 = 0;
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
