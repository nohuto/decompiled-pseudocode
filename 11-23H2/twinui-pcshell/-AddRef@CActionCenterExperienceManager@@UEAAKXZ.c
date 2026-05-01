/*
 * XREFs of ?AddRef@CActionCenterExperienceManager@@UEAAKXZ @ 0x18019B5B0
 * Callers:
 *     ?AddRef@CActionCenterExperienceManager@@W7EAAKXZ @ 0x1802953C0 (-AddRef@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x1802953E0 (-AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x180295400 (-AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x180295420 (-AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x180295440 (-AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x180295460 (-AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x180295480 (-AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x1802954A0 (-AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x1802954C0 (-AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x1802954E0 (-AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WFI@EAAKXZ @ 0x180295500 (-AddRef@CActionCenterExperienceManager@@WFI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::AddRef(CActionCenterExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *((_QWORD *)this + 13);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 13, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
