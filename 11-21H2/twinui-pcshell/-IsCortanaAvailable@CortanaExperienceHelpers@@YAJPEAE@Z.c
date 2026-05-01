/*
 * XREFs of ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x18008E728
 * Callers:
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x18008CB4C (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 * Callees:
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x18008E870 (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaExperienceHelpers::IsCortanaAvailable(
        CortanaExperienceHelpers *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  CortanaRegKey = CortanaExperienceHelpers::GetCortanaRegKey(L"IsAvailable", (const unsigned __int16 *)&v9, a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"internal\\shellcommonshell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
      (const char *)(unsigned int)CortanaRegKey,
      v7);
    return v5;
  }
  else
  {
    *(_BYTE *)this = v9 == 1;
    return 0LL;
  }
}
