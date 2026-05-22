/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FA80
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AE910 (-GetTrustLevel@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@U_ea_1800AE910.c)
 *     ?GetTrustLevel@?$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@UIKeyFrameAnimation@234@UIKeyFrameAnimation2@234@UIKeyFrameAnimation3@234@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AE930 (-GetTrustLevel@-$NestedWinRtImplements@VKeyFrameAnimation@Composition@UI@Windows@@U_ea_1800AE930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::KeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation,Windows::UI::Composition::IKeyFrameAnimation2,Windows::UI::Composition::IKeyFrameAnimation3>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 336) + 32LL);
  return result;
}
