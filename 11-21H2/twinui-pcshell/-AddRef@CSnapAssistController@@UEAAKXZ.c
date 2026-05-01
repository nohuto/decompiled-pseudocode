/*
 * XREFs of ?AddRef@CSnapAssistController@@UEAAKXZ @ 0x18017F190
 * Callers:
 *     ?AddRef@CSnapAssistController@@W7EAAKXZ @ 0x18020F4B0 (-AddRef@CSnapAssistController@@W7EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WBA@EAAKXZ @ 0x18020F4D0 (-AddRef@CSnapAssistController@@WBA@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WBCA@EAAKXZ @ 0x18020F4F0 (-AddRef@CSnapAssistController@@WBCA@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WBI@EAAKXZ @ 0x18020F510 (-AddRef@CSnapAssistController@@WBI@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WCA@EAAKXZ @ 0x18020F530 (-AddRef@CSnapAssistController@@WCA@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WCI@EAAKXZ @ 0x18020F550 (-AddRef@CSnapAssistController@@WCI@EAAKXZ.c)
 *     ?AddRef@CSnapAssistController@@WDA@EAAKXZ @ 0x18020F570 (-AddRef@CSnapAssistController@@WDA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CSnapAssistController::AddRef(CSnapAssistController *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 38);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 38, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
