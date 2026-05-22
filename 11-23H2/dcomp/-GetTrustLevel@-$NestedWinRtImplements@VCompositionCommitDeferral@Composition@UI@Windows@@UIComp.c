/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionCommitDeferral@Composition@UI@Windows@@UICompositionCommitDeferralPartner@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitDeferral,Windows::UI::Composition::ICompositionCommitDeferralPartner>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 120) + 32LL);
  return result;
}
