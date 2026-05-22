/*
 * XREFs of ?AddRef@UIContext@UI@Windows@@UEAAKXZ @ 0x18008DB30
 * Callers:
 *     ?AddRef@UIContext@UI@Windows@@W7EAAKXZ @ 0x1800AD330 (-AddRef@UIContext@UI@Windows@@W7EAAKXZ.c)
 *     ?AddRef@UIContext@UI@Windows@@WBA@EAAKXZ @ 0x1800AD350 (-AddRef@UIContext@UI@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@UIContext@UI@Windows@@WBI@EAAKXZ @ 0x1800AD370 (-AddRef@UIContext@UI@Windows@@WBI@EAAKXZ.c)
 *     ?AddRef@UIContext@UI@Windows@@WCA@EAAKXZ @ 0x1800AD390 (-AddRef@UIContext@UI@Windows@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Windows::UI::UIContext::AddRef(Windows::UI::UIContext *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 9);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 9, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)Microsoft::WRL::Details::SafeUnknownIncrementReference(
                         (Microsoft::WRL::Details *)(2 * v1 + 16),
                         (volatile int *)((unsigned __int64)v1 >> 63));
}
