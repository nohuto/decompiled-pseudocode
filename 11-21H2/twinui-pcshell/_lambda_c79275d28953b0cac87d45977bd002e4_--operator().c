/*
 * XREFs of _lambda_c79275d28953b0cac87d45977bd002e4_::operator() @ 0x1805F1198
 * Callers:
 *     ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180173A60 (-IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c79275d28953b0cac87d45977bd002e4_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *(_QWORD *)(v2 + 24) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v2 + 80) + 56LL))(*(_QWORD *)(v2 + 80), &v7);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *(_BYTE *)a1[1] = v7 == 0;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEB,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
