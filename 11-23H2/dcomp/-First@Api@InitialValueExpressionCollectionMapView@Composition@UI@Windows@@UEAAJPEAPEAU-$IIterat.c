/*
 * XREFs of ?First@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z @ 0x1801A2440
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?First@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z @ 0x180194AF0 (-First@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAPEAU-$IIterator@PEAU-$IK.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollectionMapView::Api::First(
        __int64 a1,
        unsigned __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 16) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::InitialValueExpressionCollection::First(*(_QWORD *)(a1 + 16), a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0xAFu);
    else
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
