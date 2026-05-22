/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositionCommitBatch@Composition@UI@Windows@@UICompositionCommitBatch@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180090860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitBatch,Windows::UI::Composition::ICompositionCommitBatch>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 192) + 32LL);
  return result;
}
