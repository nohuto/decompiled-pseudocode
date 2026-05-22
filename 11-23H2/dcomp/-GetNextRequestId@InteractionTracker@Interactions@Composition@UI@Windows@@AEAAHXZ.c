/*
 * XREFs of ?GetNextRequestId@InteractionTracker@Interactions@Composition@UI@Windows@@AEAAHXZ @ 0x1800B6C6A
 * Callers:
 *     ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z @ 0x18013B614 (-TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nume.c)
 *     ?TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@PEAH@Z @ 0x18013B820 (-TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nu.c)
 *     ?TryUpdatePositionWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013BA58 (-TryUpdatePositionWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@.c)
 *     ?TryUpdatePositionWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@PEAH@Z @ 0x18013BBE0 (-TryUpdatePositionWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEA.c)
 *     ?TryUpdateScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013BF5C (-TryUpdateScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJMAEAUVector3@Numeri.c)
 *     ?TryUpdateScaleWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAXMAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013C108 (-TryUpdateScaleWithAdditionalVelocity@InteractionTracker@Interactions@Composition@UI@Windows@@QE.c)
 *     ?TryUpdateScaleWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@AEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013C2B4 (-TryUpdateScaleWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCo.c)
 * Callees:
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::GetNextRequestId(
        Windows::UI::Composition::Interactions::InteractionTracker *this)
{
  int v1; // eax
  __int64 result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 83);
  if ( v1 == 0x7FFFFFFF )
    Microsoft::WRL2::FailFast::ForHR(-2147483637, retaddr);
  result = (unsigned int)(v1 + 1);
  *((_DWORD *)this + 83) = result;
  return result;
}
