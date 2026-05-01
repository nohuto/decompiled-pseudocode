/*
 * XREFs of ?IsEnterprisePolicyEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5AA4
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5B20 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsEnterprisePolicyEnabled(CortanaAvailability *this, unsigned __int8 *a2)
{
  char v3; // bl
  int ExperiencePolicy_AllowCortana; // eax
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)this = 0;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_AllowCortana) )
    goto LABEL_5;
  v3 = 1;
  v9 = 1;
  ExperiencePolicy_AllowCortana = PolicyManager_GetExperiencePolicy_AllowCortana(&v9);
  v5 = ExperiencePolicy_AllowCortana;
  if ( ExperiencePolicy_AllowCortana >= 0 )
  {
    if ( v9 )
    {
LABEL_4:
      *(_BYTE *)this = v3;
      return 0LL;
    }
LABEL_5:
    v3 = 0;
    goto LABEL_4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
    (const char *)(unsigned int)ExperiencePolicy_AllowCortana,
    v7);
  return v5;
}
