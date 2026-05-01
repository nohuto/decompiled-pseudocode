/*
 * XREFs of ?AddRef@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1801AF490
 * Callers:
 *     ?AddRef@CInsightsExperienceManager@@W7EAAKXZ @ 0x180298580 (-AddRef@CInsightsExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x1802985A0 (-AddRef@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CInsightsExperienceManager@@WBI@EAAKXZ @ 0x1802985C0 (-AddRef@CInsightsExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ @ 0x1802985E0 (-AddRef@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::AddRef(CVirtualTouchpadExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *((_QWORD *)this + 6);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
