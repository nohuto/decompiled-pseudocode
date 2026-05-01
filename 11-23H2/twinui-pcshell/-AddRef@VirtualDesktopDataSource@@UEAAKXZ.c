/*
 * XREFs of ?AddRef@VirtualDesktopDataSource@@UEAAKXZ @ 0x18019B060
 * Callers:
 *     ?AddRef@VirtualDesktopDataSource@@W7EAAKXZ @ 0x1802A1F30 (-AddRef@VirtualDesktopDataSource@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktopDataSource@@WBA@EAAKXZ @ 0x1802A1F50 (-AddRef@VirtualDesktopDataSource@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopDataSource@@WBI@EAAKXZ @ 0x1802A1F70 (-AddRef@VirtualDesktopDataSource@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopDataSource@@WCA@EAAKXZ @ 0x1802A1F90 (-AddRef@VirtualDesktopDataSource@@WCA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopDataSource@@WCI@EAAKXZ @ 0x1802A1FB0 (-AddRef@VirtualDesktopDataSource@@WCI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktopDataSource@@WDA@EAAKXZ @ 0x1802A1FD0 (-AddRef@VirtualDesktopDataSource@@WDA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall VirtualDesktopDataSource::AddRef(VirtualDesktopDataSource *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 11);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
