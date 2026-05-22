/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionCommitBatch@Composition@UI@Windows@@UICompositionCommitBatch@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18015AF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionCommitBatch,Windows::UI::Composition::ICompositionCommitBatch>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 200),
           a2,
           a3);
}
