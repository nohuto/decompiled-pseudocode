/*
 * XREFs of ?IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x18008E770
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x18008E870 (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsDeveloperOverrideEnabled(
        CortanaAvailability *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  *(_BYTE *)this = 0;
  CortanaRegKey = CortanaExperienceHelpers::GetCortanaRegKey(
                    L"DevOverrideOneSettings",
                    (const unsigned __int16 *)&v9,
                    a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey == -2147024894 )
    return 0LL;
  if ( CortanaRegKey >= 0 )
  {
    if ( v9 == 1 )
      *(_BYTE *)this = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
    (const char *)(unsigned int)CortanaRegKey,
    v7);
  return v5;
}
