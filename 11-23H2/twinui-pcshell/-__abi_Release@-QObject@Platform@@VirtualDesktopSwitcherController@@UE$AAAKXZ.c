/*
 * XREFs of ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@UE$AAAKXZ @ 0x18078CC90
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAKXZ @ 0x1802B2BA0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAKXZ @ 0x1802B2BC0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAKXZ @ 0x1802B2BE0 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAKXZ @ 0x1802B2C00 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAKXZ @ 0x1802B2C20 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAKXZ @ 0x1802B2C40 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAKXZ @ 0x1802B2C60 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAKXZ @ 0x1802B2C80 (-__abi_Release@-QObject@Platform@@VirtualDesktopSwitcherController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180081D44 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x180081DFC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x18078C508 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
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
