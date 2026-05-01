/*
 * XREFs of ?AddRef@VirtualDesktopCollection@@UEAAKXZ @ 0x18019F130
 * Callers:
 *     ?AddRef@VirtualDesktopCollection@@W7EAAKXZ @ 0x1802A2890 (-AddRef@VirtualDesktopCollection@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktopCollection@@WBA@EAAKXZ @ 0x1802A28B0 (-AddRef@VirtualDesktopCollection@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopCollection@@WBI@EAAKXZ @ 0x1802A28D0 (-AddRef@VirtualDesktopCollection@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopCollection@@WCA@EAAKXZ @ 0x1802A28F0 (-AddRef@VirtualDesktopCollection@@WCA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopCollection@@WCI@EAAKXZ @ 0x1802A2910 (-AddRef@VirtualDesktopCollection@@WCI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall VirtualDesktopCollection::AddRef(VirtualDesktopCollection *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 10);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
