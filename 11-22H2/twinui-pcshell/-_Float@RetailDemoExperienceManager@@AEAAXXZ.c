/*
 * XREFs of ?_Float@RetailDemoExperienceManager@@AEAAXXZ @ 0x180458CA4
 * Callers:
 *     ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1804576B0 (-Float@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18045954C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x180459278 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1804592B8 (-_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_Float(RetailDemoExperienceManager *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 25) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xFF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v2.left);
  RetailDemoExperienceManager::_RestoreWorkingArea(this);
  v2 = *(struct tagRECT *)((char *)this + 364);
  RetailDemoExperienceManager::_SetFrameRect(this, &v2);
}
