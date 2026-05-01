/*
 * XREFs of wil::details::functor_wrapper_void__lambda_d30de9bea7c208beeecc3353020bcb61__&_::Run @ 0x180196FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800A516C (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6ECC (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_d30de9bea7c208beeecc3353020bcb61____::Run(
        __int64 a1,
        char a2)
{
  CToastCenterExperienceManager **v2; // rbx
  CToastCenterExperienceManager *v3; // rcx
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(CToastCenterExperienceManager ***)(a1 + 8);
  *((_BYTE *)*v2 + 443) = *(_BYTE *)v2[1];
  v3 = *v2;
  if ( *((_DWORD *)*v2 + 36) == 2 )
  {
    if ( *((_BYTE *)v3 + 443) )
    {
      v4 = CToastCenterExperienceManager::Hide(v3, a2);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
    }
  }
  v5 = CToastCenterExperienceManager::RaisePropertyChangedEvent(*v2, L"NewToastShouldPeek", *((_BYTE *)*v2 + 443));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
