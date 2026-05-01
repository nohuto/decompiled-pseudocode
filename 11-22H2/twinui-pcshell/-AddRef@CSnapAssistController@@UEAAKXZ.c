/*
 * XREFs of ?AddRef@CSnapAssistController@@UEAAKXZ @ 0x1801BC030
 * Callers:
 *     ?AddRef@CSnapAssistController@@W7EAAKXZ @ 0x1802AB580 (-AddRef@CSnapAssistController@@W7EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WBA@EAAKXZ @ 0x1802AB5A0 (-AddRef@CSnapAssistController@@WBA@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WBEI@EAAKXZ @ 0x1802AB5C0 (-AddRef@CSnapAssistController@@WBEI@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WBI@EAAKXZ @ 0x1802AB5E0 (-AddRef@CSnapAssistController@@WBI@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WCA@EAAKXZ @ 0x1802AB600 (-AddRef@CSnapAssistController@@WCA@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WCI@EAAKXZ @ 0x1802AB620 (-AddRef@CSnapAssistController@@WCI@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WDA@EAAKXZ @ 0x1802AB640 (-AddRef@CSnapAssistController@@WDA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CSnapAssistController::AddRef(CSnapAssistController *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 43);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 43, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
