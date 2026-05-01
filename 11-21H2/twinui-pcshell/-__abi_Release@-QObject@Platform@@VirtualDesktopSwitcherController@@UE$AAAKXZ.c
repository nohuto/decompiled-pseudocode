/*
 * XREFs of ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x180612FD0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAKXZ @ 0x180212520 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAKXZ @ 0x180212540 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAKXZ @ 0x180212560 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAKXZ @ 0x180212580 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAKXZ @ 0x1802125A0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAKXZ @ 0x1802125C0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAKXZ @ 0x1802125E0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAKXZ @ 0x180212600 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x180612844 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__VirtualDesktopSwitcherController__UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  Platform::Details::ControlBlock *v4; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 128));
  if ( !v3 )
  {
    VirtualDesktopSwitcherController::~VirtualDesktopSwitcherController((__int64 *)a1);
    v4 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v4);
  }
  return v3;
}
