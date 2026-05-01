/*
 * XREFs of ?AddRef@CPeopleBarFlyoutExperienceManager@@UEAAKXZ @ 0x1801AFD60
 * Callers:
 *     ?AddRef@CJumpViewExperienceManager@@W7EAAKXZ @ 0x1802974B0 (-AddRef@CJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1802974D0 (-AddRef@CJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1802974F0 (-AddRef@CJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WCA@EAAKXZ @ 0x180297510 (-AddRef@CJumpViewExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CJumpViewExperienceManager@@WCI@EAAKXZ @ 0x180297530 (-AddRef@CJumpViewExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::AddRef(CPeopleBarFlyoutExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *((_QWORD *)this + 7);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
