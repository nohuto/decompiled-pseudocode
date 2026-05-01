/*
 * XREFs of ?AddRef@CStartExperienceManager@@UEAAKXZ @ 0x18019EC80
 * Callers:
 *     ?AddRef@CStartExperienceManager@@W7EAAKXZ @ 0x180297BC0 (-AddRef@CStartExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WCA@EAAKXZ @ 0x180297BE0 (-AddRef@CStartExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WCI@EAAKXZ @ 0x180297C00 (-AddRef@CStartExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WDA@EAAKXZ @ 0x180297C20 (-AddRef@CStartExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WDI@EAAKXZ @ 0x180297C40 (-AddRef@CStartExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WEA@EAAKXZ @ 0x180297C60 (-AddRef@CStartExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CStartExperienceManager@@WEI@EAAKXZ @ 0x180297C80 (-AddRef@CStartExperienceManager@@WEI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::AddRef(CStartExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

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
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
