/*
 * XREFs of ?RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@@Z @ 0x18000C138
 * Callers:
 *     ?DestroyContent@VisualTreeIsland@Composition@UI@Windows@@MEAAXXZ @ 0x18000BFF0 (-DestroyContent@VisualTreeIsland@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RemoveListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorListenerPrivate@1345@@Z @ 0x180147870 (-RemoveListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorLis.c)
 * Callees:
 *     ?NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z @ 0x18006D31C (-NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnchor::RemoveListener(
        Windows::UI::Composition::CompositionAnchor *this,
        struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate *a2)
{
  __int64 i; // rcx
  int v4; // eax
  int v5; // eax

  for ( i = *((_QWORD *)this + 24); ; i += 56LL )
  {
    if ( i == *((_QWORD *)this + 25) )
      goto LABEL_11;
    if ( *(struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate **)i == a2 )
      break;
  }
  v4 = *(_DWORD *)(i + 44);
  if ( !v4 )
LABEL_11:
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  v5 = v4 - 1;
  *(_DWORD *)(i + 44) = v5;
  if ( !v5 )
  {
    memmove_0((void *)i, (const void *)(i + 56), *((_QWORD *)this + 25) - (i + 56));
    *((_QWORD *)this + 25) -= 56LL;
  }
  if ( *((_QWORD *)this + 24) == *((_QWORD *)this + 25) )
    Windows::UI::Composition::Visual::NotifyAnchorListening(*((Windows::UI::Composition::Visual **)this + 18), this, 0);
}
