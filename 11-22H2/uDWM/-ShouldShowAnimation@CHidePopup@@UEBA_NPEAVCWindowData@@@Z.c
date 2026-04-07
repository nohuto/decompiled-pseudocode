/*
 * XREFs of ?ShouldShowAnimation@CHidePopup@@UEBA_NPEAVCWindowData@@@Z @ 0x1800DC550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003EBFC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z @ 0x1800DEE60 (-_WillWindowEndCloaked@CStoryboard@@KA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CHidePopup::ShouldShowAnimation(CHidePopup *this, struct CWindowData *a2, __int64 a3)
{
  char v4; // di
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *i; // rbx
  RECT v7; // xmm1
  unsigned __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  RECT rcSrc2; // [rsp+28h] [rbp-40h] BYREF
  RECT rcSrc1; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+48h] [rbp-20h] BYREF

  v4 = 1;
  if ( (unsigned int)GetDesktopID(1LL, &v9, a3) )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             v9);
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      if ( ((__int64)i[42].Blink & 0xFFF) == 0x18 )
      {
        if ( !CStoryboard::_WillWindowEndCloaked((const struct CWindowData *)i) )
        {
          v7 = (RECT)*((_OWORD *)a2 + 3);
          rcSrc1 = (RECT)i[3];
          rcSrc2 = v7;
          if ( IntersectRect(&rcDst, &rcSrc1, &rcSrc2) )
            return 0;
        }
        return v4;
      }
    }
  }
  return v4;
}
