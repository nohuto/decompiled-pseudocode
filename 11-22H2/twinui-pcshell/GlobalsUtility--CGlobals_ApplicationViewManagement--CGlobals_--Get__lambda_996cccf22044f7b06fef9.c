/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___ @ 0x1800DF874
 * Callers:
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x1800DF6FC (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___(
        LPCWSTR *a1)
{
  HKEY v2; // rcx
  LSTATUS v3; // eax
  unsigned __int64 v4; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  if ( v8 )
  {
    v2 = *(HKEY *)(v8 + 40);
    if ( v2 )
    {
      v3 = RegDeleteKeyW(v2, *a1);
      v4 = (unsigned int)v3;
      if ( v3 > 0 )
        v4 = (unsigned __int16)v3 | 0x80070000;
      if ( (int)(v4 + 0x80000000) >= 0 && (_DWORD)v4 != -2147024894 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
          (const char *)v4,
          v6);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
        (const char *)0x80270257LL,
        v6);
    }
  }
  return Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v8);
}
