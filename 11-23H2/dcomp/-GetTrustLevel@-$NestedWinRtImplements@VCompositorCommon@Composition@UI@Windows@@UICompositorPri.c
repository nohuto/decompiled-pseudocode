/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorPrivate_VisualReference@Private@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::Private::ICompositorPrivate_VisualReference>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 224) + 32LL);
  return result;
}
