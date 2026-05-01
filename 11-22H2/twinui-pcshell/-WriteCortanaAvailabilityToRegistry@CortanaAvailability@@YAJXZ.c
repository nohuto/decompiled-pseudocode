/*
 * XREFs of ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800C5528
 * Callers:
 *     _lambda_4c0f6ed1d632f9eabd9f454ff611597b_::operator() @ 0x1801E5160 (_lambda_4c0f6ed1d632f9eabd9f454ff611597b_--operator().c)
 *     _lambda_b945abeeb0d2b18f20f6e47375aac32a_::operator() @ 0x1801E5444 (_lambda_b945abeeb0d2b18f20f6e47375aac32a_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b430b1ad5f0505d09d17bcb4f79d3c75___::Run @ 0x1801E5640 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b430b1ad5f0505d09d17bcb4f79d3c75___--Run.c)
 * Callees:
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800C583C (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 *     ?SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z @ 0x1800C58F8 (-SetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800C5B20 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaAvailability::WriteCortanaAvailabilityToRegistry(
        CortanaAvailability *this,
        __int64 a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned __int8 *v4; // rdx
  unsigned int v5; // ebx
  char v6; // si
  int v7; // edi
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v14; // [rsp+30h] [rbp+8h] BYREF
  int Data; // [rsp+38h] [rbp+10h] BYREF

  CortanaRegKey = CortanaExperienceHelpers::GetCortanaRegKey(L"IsAvailable", (LPBYTE)&Data, a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
      (const char *)(unsigned int)CortanaRegKey,
      v12);
    v6 = 0;
    if ( v5 != -2147024894 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF6,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)v5,
        v12);
      return v5;
    }
  }
  else
  {
    v6 = Data == 1;
    v5 = 0;
  }
  v7 = CortanaAvailability::CheckCortanaAvailability((CortanaAvailability *)&v14, v4);
  if ( v7 < 0 )
  {
    v11 = 251LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v7,
      v12);
    return (unsigned int)v7;
  }
  v7 = CortanaExperienceHelpers::SetCortanaRegKey(L"IsAvailable", (const unsigned __int16 *)v14, v8, v9);
  if ( v7 < 0 )
  {
    v11 = 252LL;
    goto LABEL_12;
  }
  if ( v14 != v6 || v5 == -2147024894 )
    SendNotifyMessageW(HWND_BROADCAST, 0x1Au, 0LL, (LPARAM)L"TraySettings");
  return 0LL;
}
