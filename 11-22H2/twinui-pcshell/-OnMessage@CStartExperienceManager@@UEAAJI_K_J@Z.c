/*
 * XREFs of ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x18018A660
 * Callers:
 *     <none>
 * Callees:
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180056668 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1800E33E4 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@J@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@J@Z @ 0x18018A788 (--$InvokeAll@PEAVCStartExperienceManager@@J@-$EventSource@U-$ITypedEventHandler@PEAVStartExperie.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1802D4B28 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnMessage(
        CStartExperienceManager *this,
        int a2,
        CStartExperienceManager *a3,
        const WCHAR *a4)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rdx
  CStartExperienceManager *v12; // rcx
  unsigned int v13; // r8d
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a2 - 26;
  if ( !v5 )
  {
    if ( !a4 || CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) != 2 )
      return 0LL;
    v12 = (CStartExperienceManager *)((char *)this - 48);
    v13 = 0;
    goto LABEL_20;
  }
  v6 = v5 - 772;
  if ( !v6 )
  {
    v12 = (CStartExperienceManager *)((char *)this - 48);
    v13 = 1;
LABEL_20:
    CStartExperienceManager::ReactivateHelper(v12, L"OnStartThemeChanged", v13);
    return 0LL;
  }
  v7 = v6 - 227;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 && a3 == (CStartExperienceManager *)((char *)this - 48) )
      {
        if ( *((_BYTE *)this + 715) )
        {
          *((_BYTE *)this + 715) = 0;
          v9 = CSingleViewShellExperience::Cloak((HSTRING *)this + 34);
          if ( v9 < 0 )
          {
            v10 = 907LL;
LABEL_10:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v10,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
              (const char *)(unsigned int)v9);
            return (unsigned int)v9;
          }
        }
      }
    }
    else if ( a3 == (CStartExperienceManager *)((char *)this - 48) )
    {
      v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
             (__int64)this + 152,
             (__int64)this - 48);
      if ( v9 < 0 )
      {
        v10 = 915LL;
        goto LABEL_10;
      }
    }
  }
  else if ( a3 == (CStartExperienceManager *)((char *)this - 48) )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,long>(
      (char *)this + 224,
      (char *)this - 48,
      (unsigned int)a4);
  }
  return 0LL;
}
