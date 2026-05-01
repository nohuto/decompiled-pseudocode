/*
 * XREFs of ?AddRef@UndockedSearchAppExperienceManager@@UEAAKXZ @ 0x180141CC0
 * Callers:
 *     ?AddRef@UndockedSearchAppExperienceManager@@W7EAAKXZ @ 0x1801F59F0 (-AddRef@UndockedSearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@UndockedSearchAppExperienceManager@@WBA@EAAKXZ @ 0x1801F5A10 (-AddRef@UndockedSearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@UndockedSearchAppExperienceManager@@WBI@EAAKXZ @ 0x1801F5A30 (-AddRef@UndockedSearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::AddRef(UndockedSearchAppExperienceManager *this)
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
