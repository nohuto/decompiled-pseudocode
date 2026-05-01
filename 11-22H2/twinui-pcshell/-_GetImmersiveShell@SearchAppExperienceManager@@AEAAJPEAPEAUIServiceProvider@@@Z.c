/*
 * XREFs of ?_GetImmersiveShell@SearchAppExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x18045F440
 * Callers:
 *     ?_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18045F590 (-_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SearchAppExperienceManager::_GetImmersiveShell(
        SearchAppExperienceManager *this,
        struct IServiceProvider **a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  ppv = (__int64 *)((char *)this + 408);
  if ( *((_QWORD *)this + 51)
    || (Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 51),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     (LPVOID *)ppv),
        v5 = Instance,
        Instance >= 0) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(ppv);
    *a2 = (struct IServiceProvider *)*ppv;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EE,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    return v5;
  }
}
