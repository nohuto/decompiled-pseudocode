/*
 * XREFs of ?AddRef@CScreenClippingExperienceManager@@UEAAKXZ @ 0x1801AD8D0
 * Callers:
 *     ?AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x1802977F0 (-AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180297810 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILigh_ea_180297810.c)
 *     ?AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x180297830 (-AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
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
