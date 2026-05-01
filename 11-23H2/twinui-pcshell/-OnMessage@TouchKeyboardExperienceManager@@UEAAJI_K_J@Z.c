/*
 * XREFs of ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x18004FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802DC01C (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180514700 (-OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18051BF2C (-UpdateVisibileViewsBorder@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnMessage(
        TouchKeyboardExperienceManager *this,
        int a2,
        int a3,
        const WCHAR *a4)
{
  int updated; // eax
  __int64 v9; // rdx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 26 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    {
      if ( CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 1) == 2 || a3 == 67 )
      {
        updated = TouchKeyboardExperienceManager::UpdateVisibileViewsBorder((TouchKeyboardExperienceManager *)((char *)this - 136));
        if ( updated < 0 )
        {
          v9 = 661LL;
LABEL_16:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v9,
            (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)updated,
            bIgnoreCase);
        }
      }
    }
    else if ( CompareStringOrdinal(a4, -1, L"ConvertibleSlateMode", -1, 1) == 2 )
    {
      TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
    }
    else if ( CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 1) == 2 || a3 == 67 )
    {
      updated = TouchKeyboardExperienceManager::UpdateVisibileViewsBorder((TouchKeyboardExperienceManager *)((char *)this - 136));
      if ( updated < 0 )
      {
        v9 = 674LL;
        goto LABEL_16;
      }
    }
  }
  else if ( a2 == 126 )
  {
    TouchKeyboardExperienceManager::OnDisplayChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  return 0LL;
}
