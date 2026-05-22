/*
 * XREFs of ?get_Count@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x180006C30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006F60 (-EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api::get_Count(
        Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api *this,
        int *a2)
{
  Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection *v2; // rsi
  Microsoft::WRL2::ContextSession *v3; // rbx
  int valid; // eax
  unsigned int v6; // edi

  *a2 = 0;
  v2 = (Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api *)((char *)this - 136);
  v3 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::EnsureValidState(v2);
    v6 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0xC8u);
    }
    else
    {
      *a2 = (__int64)(*(_QWORD *)(*((_QWORD *)v2 + 19) + 224LL) - *(_QWORD *)(*((_QWORD *)v2 + 19) + 216LL)) >> 3;
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
