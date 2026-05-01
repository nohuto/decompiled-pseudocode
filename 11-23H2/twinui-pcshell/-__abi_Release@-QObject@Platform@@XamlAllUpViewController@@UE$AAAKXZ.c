/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@UE$AAAKXZ @ 0x180081CE0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ @ 0x1802B1960 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ @ 0x1802B1980 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ @ 0x1802B19A0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ @ 0x1802B19C0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ @ 0x1802B19E0 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ @ 0x1802B1A00 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ @ 0x1802B1A20 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ @ 0x1802B1A40 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAKXZ @ 0x1802B1A60 (-__abi_Release@-QObject@Platform@@XamlAllUpViewController@@WKI@E$AAAKXZ.c)
 * Callees:
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x1800815D0 (--1XamlAllUpViewController@@AE$AAA@XZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180081D44 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x180081DFC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlAllUpViewController__UE_AAAKXZ(__int64 *a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  Platform::Details::ControlBlock *v5; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 16);
  v3 = __abi_FTMWeakRefData::Decrement(a1 + 16);
  if ( !v3 )
  {
    XamlAllUpViewController::~XamlAllUpViewController(a1);
    v5 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v3;
}
