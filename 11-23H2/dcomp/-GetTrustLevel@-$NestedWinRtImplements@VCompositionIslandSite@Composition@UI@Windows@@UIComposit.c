/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionIslandSite@Composition@UI@Windows@@UICompositionDeferralHandlerPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008F9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIslandSite,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 136) + 32LL);
  return result;
}
