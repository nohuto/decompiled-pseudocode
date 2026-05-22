/*
 * XREFs of ?First@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z @ 0x18014B230
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?First@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z @ 0x18014B344 (-First@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJPEAPEAU-$IIterator@PEAU-$IKeyVal.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplicitAnimationCollection::Api::First(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = a1 - 144;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 144 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::ImplicitAnimationCollection::First(v2, a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x24Bu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
