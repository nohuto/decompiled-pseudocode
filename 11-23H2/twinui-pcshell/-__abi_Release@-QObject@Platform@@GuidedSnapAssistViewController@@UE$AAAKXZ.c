/*
 * XREFs of ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@UE$AAAKXZ @ 0x18078A7C0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@W7E$AAAKXZ @ 0x1802B2740 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WBA@E$AAAKXZ @ 0x1802B2760 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WBI@E$AAAKXZ @ 0x1802B2780 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WCA@E$AAAKXZ @ 0x1802B27A0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WCI@E$AAAKXZ @ 0x1802B27C0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WDA@E$AAAKXZ @ 0x1802B27E0 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WDA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WJI@E$AAAKXZ @ 0x1802B2800 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WJI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@GuidedSnapAssistViewController@@WKA@E$AAAKXZ @ 0x1802B2820 (-__abi_Release@-QObject@Platform@@GuidedSnapAssistViewController@@WKA@E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180081D44 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x180081DFC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x180788CAC (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__GuidedSnapAssistViewController__UE_AAAKXZ(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  Platform::Details::ControlBlock *v4; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 128);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 128));
  if ( !v3 )
  {
    GuidedSnapAssistViewController::~GuidedSnapAssistViewController((__int64 *)a1);
    v4 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v4);
  }
  return v3;
}
