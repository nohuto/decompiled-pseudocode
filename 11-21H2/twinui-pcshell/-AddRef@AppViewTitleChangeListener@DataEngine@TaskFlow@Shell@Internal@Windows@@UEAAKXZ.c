/*
 * XREFs of ?AddRef@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ @ 0x180138280
 * Callers:
 *     ?AddRef@VirtualDesktop@@W7EAAKXZ @ 0x1801F8350 (-AddRef@VirtualDesktop@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBA@EAAKXZ @ 0x1801F8370 (-AddRef@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBI@EAAKXZ @ 0x1801F8390 (-AddRef@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopController@@WCA@EAAKXZ @ 0x1801F83B0 (-AddRef@VirtualDesktopController@@WCA@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x180207840 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Imp_ea_180207840.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AddRef(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 9);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
