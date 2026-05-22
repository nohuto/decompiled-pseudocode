/*
 * XREFs of ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18007F0B0
 * Callers:
 *     ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AD010 (-Release@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotif_ea_1800AD010.c)
 *     ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AD030 (-Release@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotif_ea_1800AD030.c)
 *     ?Release@?$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotifyPropertyChangedPartner@234@UIVisualPartner@234@UIVisualInternal@Internal@234@UIVisualPrivate@Private@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AD050 (-Release@-$NestedWinRtImplements@VVisual@Composition@UI@Windows@@UICompositionNotif_ea_1800AD050.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Visual,Windows::UI::Composition::ICompositionNotifyPropertyChangedPartner,Windows::UI::Composition::IVisualPartner,Windows::UI::Composition::Internal::IVisualInternal,Windows::UI::Composition::Private::IVisualPrivate>::Release(
        __int64 a1)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx
  __int64 v4; // rdx

  v1 = (volatile signed __int32 *)(a1 - 208);
  v2 = _InterlockedDecrement(v1 + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    LOBYTE(v4) = 1;
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 64LL))(v1, v4);
  }
  return v2;
}
