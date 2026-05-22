/*
 * XREFs of ?RemoveAll@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D48 (-RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006F60 (-EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api::RemoveAll(
        Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api *this)
{
  Windows::UI::Composition::CompositionProjectedShadow **v1; // rsi
  Microsoft::WRL2::ContextSession *v2; // rbx
  int valid; // eax
  unsigned int v4; // edi
  unsigned int v6; // edx

  v1 = (Windows::UI::Composition::CompositionProjectedShadow **)((char *)this - 136);
  v2 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( ((_BYTE)v1[4] & 2) == 0 )
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_5;
  }
  valid = Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::EnsureValidState((Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection *)v1);
  v4 = valid;
  if ( valid < 0 )
  {
    v6 = 142;
    goto LABEL_9;
  }
  valid = Windows::UI::Composition::CompositionProjectedShadow::RemoveAllReceivers(v1[19]);
  v4 = valid;
  if ( valid < 0 )
  {
    v6 = 144;
LABEL_9:
    DoStackCaptureDirect(valid, v6);
    goto LABEL_5;
  }
  v4 = 0;
LABEL_5:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
