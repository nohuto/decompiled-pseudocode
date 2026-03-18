/*
 * XREFs of ?CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x1C0213534
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C0213458 (-CancelAutoPromotion@@YAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *CreateEntryFromLastEntry(void)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( result )
  {
    *(_OWORD *)result = xmmword_1C0335D20;
    *((_OWORD *)result + 1) = xmmword_1C0335D30;
    *((_OWORD *)result + 2) = xmmword_1C0335D40;
  }
  return result;
}
