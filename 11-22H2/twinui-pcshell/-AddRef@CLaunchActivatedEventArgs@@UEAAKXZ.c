/*
 * XREFs of ?AddRef@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x1801BB490
 * Callers:
 *     ?AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1802AD0B0 (-AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1802AD0D0 (-AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBAA@EAAKXZ @ 0x1802AD0F0 (-AddRef@CLaunchActivatedEventArgs@@WBAA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1802AD110 (-AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1802AD130 (-AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WJI@EAAKXZ @ 0x1802AD150 (-AddRef@CLaunchActivatedEventArgs@@WJI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WKA@EAAKXZ @ 0x1802AD170 (-AddRef@CLaunchActivatedEventArgs@@WKA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WKI@EAAKXZ @ 0x1802AD190 (-AddRef@CLaunchActivatedEventArgs@@WKI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ @ 0x1802AD1B0 (-AddRef@CLaunchActivatedEventArgs@@WNI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WOI@EAAKXZ @ 0x1802AD1D0 (-AddRef@CLaunchActivatedEventArgs@@WOI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WPA@EAAKXZ @ 0x1802AD1F0 (-AddRef@CLaunchActivatedEventArgs@@WPA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WPI@EAAKXZ @ 0x1802AD210 (-AddRef@CLaunchActivatedEventArgs@@WPI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::AddRef(CLaunchActivatedEventArgs *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 34);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 34, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
