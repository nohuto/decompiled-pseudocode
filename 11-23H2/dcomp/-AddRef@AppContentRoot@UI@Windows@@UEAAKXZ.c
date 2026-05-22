/*
 * XREFs of ?AddRef@AppContentRoot@UI@Windows@@UEAAKXZ @ 0x18008D1D0
 * Callers:
 *     ?AddRef@AppContentRoot@UI@Windows@@W7EAAKXZ @ 0x1800AD2B0 (-AddRef@AppContentRoot@UI@Windows@@W7EAAKXZ.c)
 *     ?AddRef@AppContentRoot@UI@Windows@@WBA@EAAKXZ @ 0x1800AD2D0 (-AddRef@AppContentRoot@UI@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@AppContentRoot@UI@Windows@@WBI@EAAKXZ @ 0x1800AD2F0 (-AddRef@AppContentRoot@UI@Windows@@WBI@EAAKXZ.c)
 *     ?AddRef@AppContentRoot@UI@Windows@@WCA@EAAKXZ @ 0x1800AD310 (-AddRef@AppContentRoot@UI@Windows@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Windows::UI::AppContentRoot::AddRef(Windows::UI::AppContentRoot *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

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
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
