/*
 * XREFs of ?AddRef@VirtualDesktopPerMonitorCollection@@UEAAKXZ @ 0x180175B90
 * Callers:
 *     ?AddRef@VirtualDesktopPerMonitorCollection@@W7EAAKXZ @ 0x180206B40 (-AddRef@VirtualDesktopPerMonitorCollection@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktopPerMonitorCollection@@WBA@EAAKXZ @ 0x180206B60 (-AddRef@VirtualDesktopPerMonitorCollection@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopPerMonitorCollection@@WBI@EAAKXZ @ 0x180206B80 (-AddRef@VirtualDesktopPerMonitorCollection@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopPerMonitorCollection@@WCA@EAAKXZ @ 0x180206BA0 (-AddRef@VirtualDesktopPerMonitorCollection@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall VirtualDesktopPerMonitorCollection::AddRef(VirtualDesktopPerMonitorCollection *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 9);
  while ( 1 )
  {
    if ( v1 < 0 )
      return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                             (Microsoft::WRL::Details *)(2 * v1 + 16),
                             (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
