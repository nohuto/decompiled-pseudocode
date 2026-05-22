/*
 * XREFs of ?Lookup@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1801A2570
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z @ 0x1801950C8 (-Lookup@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollectionMapView::Api::Lookup(
        Windows::UI::Composition::InitialValueExpressionCollectionMapView::Api *this,
        HSTRING a2,
        HSTRING *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v7; // edi
  int v8; // eax

  *a3 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::InitialValueExpressionCollection::Lookup(
           *((Windows::UI::Composition::InitialValueExpressionCollection **)this + 3),
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x5Eu);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v7;
}
