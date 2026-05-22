/*
 * XREFs of ??$NotifyPropertyChanged@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@QEAAJIAEBUVector3@Numerics@Foundation@3@I@Z @ 0x180135294
 * Callers:
 *     ?SetMaxPosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@@Z @ 0x18013AF68 (-SetMaxPosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numeric.c)
 *     ?SetMinPosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@@Z @ 0x18013B098 (-SetMinPosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numeric.c)
 *     ?SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@_N@Z @ 0x18013B1E4 (-SetPositionInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVe.c)
 *     ?TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@W4InteractionTrackerPositionUpdateOption@2345@PEAH@Z @ 0x18013B614 (-TryUpdatePosition@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nume.c)
 *     ?TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Numerics@Foundation@5@W4InteractionTrackerClampingOption@2345@PEAH@Z @ 0x18013B820 (-TryUpdatePositionBy@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJAEAUVector3@Nu.c)
 * Callees:
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<Windows::Foundation::Numerics::Vector3>(
        gsl::details *a1,
        unsigned int a2,
        __int64 a3,
        int a4)
{
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = a4;
  if ( !a3 )
  {
    gsl::details::terminate(a1);
    __debugbreak();
  }
  *((_QWORD *)&v5 + 1) = a3;
  *(_QWORD *)&v5 = 12LL;
  return Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
           (__int64)a1,
           a2,
           52,
           &v5,
           0xFFFFFFFF,
           (unsigned __int64)&v6);
}
