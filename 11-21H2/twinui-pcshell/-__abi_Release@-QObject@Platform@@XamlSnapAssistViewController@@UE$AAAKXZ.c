/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x1806122B0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ @ 0x1802120C0 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAKXZ @ 0x1802120E0 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ @ 0x180212100 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAKXZ @ 0x180212120 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ @ 0x180212140 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAKXZ @ 0x180212160 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WJI@E$AAAKXZ @ 0x180212180 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlSnapAssistViewController@@WKA@E$AAAKXZ @ 0x1802121A0 (-__abi_Release@-QObject@Platform@@XamlSnapAssistViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??1XamlSnapAssistViewController@@AE$AAA@XZ @ 0x180610DDC (--1XamlSnapAssistViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlSnapAssistViewController__UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  Platform::Details::ControlBlock *v4; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 128));
  if ( !v3 )
  {
    XamlSnapAssistViewController::~XamlSnapAssistViewController((__int64 *)a1);
    v4 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v4);
  }
  return v3;
}
