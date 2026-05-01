/*
 * XREFs of ?AddRef@VirtualDesktopController@@UEAAKXZ @ 0x180171060
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18029CAE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewE_ea_18029CAE0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x18029CB00 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewE_ea_18029CB00.c)
 *     ?AddRef@VirtualDesktop@@WBA@EAAKXZ @ 0x1802A2510 (-AddRef@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBI@EAAKXZ @ 0x1802A2530 (-AddRef@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopController@@WCA@EAAKXZ @ 0x1802A2550 (-AddRef@VirtualDesktopController@@WCA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WCI@EAAKXZ @ 0x1802A2570 (-AddRef@VirtualDesktop@@WCI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall VirtualDesktopController::AddRef(VirtualDesktopController *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 10);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
