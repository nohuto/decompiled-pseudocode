/*
 * XREFs of ?_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384B00
 * Callers:
 *     ?SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z @ 0x180383DC0 (-SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180384B5C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_SetWindowBand(RetailDemoExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 25);
  if ( !v2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x176,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v3);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, *((unsigned int *)this + 86));
}
