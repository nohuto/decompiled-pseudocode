/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FBC0
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800ACE10 (-GetTrustLevel@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositio_ea_1800ACE10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Visual,Windows::UI::Composition::ICompositionNotifyPropertyChangedPartner,Windows::UI::Composition::IVisualPartner,Windows::UI::Composition::Internal::IVisualInternal,Windows::UI::Composition::Private::IVisualPrivate>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 216) + 32LL);
  return result;
}
