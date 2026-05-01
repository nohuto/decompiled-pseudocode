/*
 * XREFs of ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x18015EE10
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCStartExperienceManager@@J@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@J@Z @ 0x18015EE68 (--$InvokeAll@PEAVCStartExperienceManager@@J@-$EventSource@U-$ITypedEventHandler@PEAVStartExperie.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x18022C942 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnMessage(
        CStartExperienceManager *this,
        int a2,
        CStartExperienceManager *a3,
        const WCHAR *a4)
{
  CStartExperienceManager *v6; // rcx
  unsigned int v7; // r8d

  if ( a2 == 26 )
  {
    if ( !a4 || CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) != 2 )
      return 0LL;
    v6 = (CStartExperienceManager *)((char *)this - 48);
    v7 = 0;
LABEL_12:
    CStartExperienceManager::ReactivateHelper(v6, L"OnStartThemeChanged", v7);
    return 0LL;
  }
  if ( a2 == 798 )
  {
    v6 = (CStartExperienceManager *)((char *)this - 48);
    v7 = 1;
    goto LABEL_12;
  }
  if ( a2 == 1025 && a3 == (CStartExperienceManager *)((char *)this - 48) )
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,long>(
      (char *)this + 224,
      (char *)this - 48,
      (unsigned int)a4);
  return 0LL;
}
