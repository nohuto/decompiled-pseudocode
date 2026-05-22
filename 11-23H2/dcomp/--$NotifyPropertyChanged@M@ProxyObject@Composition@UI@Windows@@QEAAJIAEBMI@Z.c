/*
 * XREFs of ??$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z @ 0x18011BB8C
 * Callers:
 *     ?put_PlaybackRate@Api@AnimationController@Composition@UI@Windows@@UEAAJM@Z @ 0x18000D6D0 (-put_PlaybackRate@Api@AnimationController@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?SetMinScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z @ 0x1800B6DDA (-SetMinScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetProgress@AnimationController@Composition@UI@Windows@@QEAAJM@Z @ 0x18011BE08 (-SetProgress@AnimationController@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetMaxScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z @ 0x18013B018 (-SetMaxScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?SetScaleInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM_N@Z @ 0x18013B358 (-SetScaleInertiaDecayRate@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJM_N@Z.c)
 *     ?TryUpdateScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJMAEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013BF5C (-TryUpdateScale@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJMAEAUVector3@Numeri.c)
 * Callees:
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<float>(
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
  *(_QWORD *)&v5 = 4LL;
  return Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
           (__int64)a1,
           a2,
           18,
           &v5,
           0xFFFFFFFF,
           (unsigned __int64)&v6);
}
