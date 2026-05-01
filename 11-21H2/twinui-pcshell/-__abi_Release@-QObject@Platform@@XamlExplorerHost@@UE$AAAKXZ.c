/*
 * XREFs of ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@UE$AAAKXZ @ 0x180146C80
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@W7E$AAAKXZ @ 0x1801FD8B0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@W7E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ @ 0x1801FD8D0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WBA@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WBI@E$AAAKXZ @ 0x1801FD8F0 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WBI@E$AAAKXZ.c)
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ @ 0x1801FD910 (-__abi_Release@-QObject@Platform@@XamlExplorerHost@@WCA@E$AAAKXZ.c)
 * Callees:
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1800100A0 (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180146CC0 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ??1XamlExplorerHost@@IE$AAA@XZ @ 0x18041FDB8 (--1XamlExplorerHost@@IE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__XamlExplorerHost__UE_AAAKXZ(__int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v4; // rbx

  v2 = __abi_FTMWeakRefData::Decrement(a1 + 112);
  if ( !v2 )
  {
    XamlExplorerHost::~XamlExplorerHost(a1);
    v4 = *(Platform::Details::ControlBlock **)(a1 + 112);
    Platform::Details::ControlBlock::ReleaseTarget(v4);
    Platform::Details::ControlBlock::__abi_Release(v4);
  }
  return v2;
}
