/*
 * XREFs of ?AddRef@CScreenClippingExperienceManager@@UEAAKXZ @ 0x18017F480
 * Callers:
 *     ?AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x1801F3E30 (-AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CScreenClippingExperienceManager@@WBA@EAAKXZ @ 0x1801F3E50 (-AddRef@CScreenClippingExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1801F3E70 (-AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::AddRef(CScreenClippingExperienceManager *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v5; // rtt

  v1 = *((_QWORD *)this + 5);
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
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 + 1, v1);
    if ( v5 == v1 )
      return v3;
  }
  return 0x7FFFFFFF;
}
