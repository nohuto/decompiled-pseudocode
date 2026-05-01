/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@UE$AAAKXZ @ 0x1802ED540
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@W7E$AAAKXZ @ 0x1802AF620 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAKXZ @ 0x1802AF640 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAKXZ @ 0x1802AF660 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAKXZ @ 0x1802AF680 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAKXZ @ 0x1802AF6A0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAKXZ @ 0x1802AF6C0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAKXZ @ 0x1802AF6E0 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAKXZ @ 0x1802AF700 (-__abi_Release@-QObject@Platform@@XamlAltTabViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180081D44 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x180081DFC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1802ED08A (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlAltTabViewController__UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  Platform::Details::ControlBlock *v4; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 128));
  if ( !v3 )
  {
    XamlAltTabViewController::~XamlAltTabViewController((__int64 *)a1);
    v4 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v4);
  }
  return v3;
}
