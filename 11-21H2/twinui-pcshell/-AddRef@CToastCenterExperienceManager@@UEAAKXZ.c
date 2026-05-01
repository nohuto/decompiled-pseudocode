/*
 * XREFs of ?AddRef@CToastCenterExperienceManager@@UEAAKXZ @ 0x180154280
 * Callers:
 *     ?AddRef@CToastCenterExperienceManager@@W7EAAKXZ @ 0x1801F33B0 (-AddRef@CToastCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WBA@EAAKXZ @ 0x1801F33D0 (-AddRef@CToastCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WBI@EAAKXZ @ 0x1801F33F0 (-AddRef@CToastCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WCA@EAAKXZ @ 0x1801F3410 (-AddRef@CToastCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WCI@EAAKXZ @ 0x1801F3430 (-AddRef@CToastCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WDA@EAAKXZ @ 0x1801F3450 (-AddRef@CToastCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WDI@EAAKXZ @ 0x1801F3470 (-AddRef@CToastCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CToastCenterExperienceManager@@WEA@EAAKXZ @ 0x1801F3490 (-AddRef@CToastCenterExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::AddRef(CToastCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

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
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
