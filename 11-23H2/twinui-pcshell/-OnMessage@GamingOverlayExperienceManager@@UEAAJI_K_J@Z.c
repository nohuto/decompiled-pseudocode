/*
 * XREFs of ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18006D530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x180075390 (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@details@wil@@QEAA_NXZ @ 0x1801DBAC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803FBE14 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1804001D4 (-HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180401954 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnMessage(GamingOverlayExperienceManager *this, int a2, int a3)
{
  __int64 result; // rax
  const char *v6; // r9
  __int64 v7; // r8
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  const wchar_t *v13; // rdx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // eax
  int v30; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 786 )
    return 0LL;
  try
  {
    if ( a3 == 56 )
    {
      if ( GamingOverlayExperienceManager::HandleHolographicHotkey((GamingOverlayExperienceManager *)((char *)this - 160)) )
        return 0LL;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::GetImpl'::`2'::impl) )
        return 0LL;
      if ( !*((_BYTE *)this + 672) )
        return 0LL;
    }
    if ( !IsDesktopInputContext() )
      return 0LL;
    v7 = 7LL;
    if ( a3 > 63 )
    {
      if ( a3 > 94 )
      {
        v24 = a3 - 95;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                v28 = v27 - 1;
                if ( v28 )
                {
                  if ( v28 != 1 )
                    return 0LL;
                  v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_10&source=GbEm";
                }
                else
                {
                  v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_9&source=GbEm";
                }
              }
              else
              {
                v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_8&source=GbEm";
              }
            }
            else
            {
              v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_7&source=GbEm";
            }
          }
          else
          {
            v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_6&source=GbEm";
          }
        }
        else
        {
          v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_5&source=GbEm";
        }
      }
      else if ( a3 == 94 )
      {
        v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_4&source=GbEm";
      }
      else
      {
        v19 = a3 - 64;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 25;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 != 1 )
                    return 0LL;
                  v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_3&source=GbEm";
                }
                else
                {
                  v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_2&source=GbEm";
                }
              }
              else
              {
                v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_1&source=GbEm";
              }
            }
            else
            {
              v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_WEBCAMERA_CAPTURE&source=GbEm";
            }
          }
          else
          {
            v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_BROADCAST&source=GbEm";
          }
        }
        else
        {
          v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_MICROPHONE_CAPTURE&source=GbEm";
        }
      }
      goto LABEL_74;
    }
    if ( a3 == 63 )
    {
      v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_GAME_RECORDING_INDICATOR&source=GbEm";
      goto LABEL_74;
    }
    if ( a3 > 54 )
    {
      v14 = a3 - 55;
      if ( !v14 )
      {
        v13 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_WEBCAMERA_CAPTURE&source=GbEm";
        goto LABEL_74;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 3;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 != 1 )
                return 0LL;
              v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_CAPTURE_GAME_SCREENSHOT&source=GbEm";
              goto LABEL_25;
            }
            v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_GAME_RECORD_CLIP&source=GbEm";
LABEL_27:
            v7 = 1LL;
            goto LABEL_74;
          }
          v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_GAME_RECORDING&source=GbEm";
LABEL_29:
          v7 = 10LL;
          goto LABEL_74;
        }
        v13 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_GAME_GUIDE_OVERLAY&source=GbEm";
      }
      else
      {
        if ( GamingOverlayExperienceManager::GameBarSupportsGamepadCommands((GamingOverlayExperienceManager *)((char *)this - 160)) )
          return 0LL;
        v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEDVR_NEXUS&source=GbEm";
      }
    }
    else
    {
      if ( a3 == 54 )
      {
        v13 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_BROADCAST&source=GbEm";
        goto LABEL_74;
      }
      v8 = a3 - 48;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                if ( v12 == 1 )
                {
                  v13 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_MICROPHONE_CAPTURE&source=GbEm";
                  goto LABEL_74;
                }
                return 0LL;
              }
              v13 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_GAME_RECORDING_INDICATOR&source=GbEm";
LABEL_74:
              v29 = GamingOverlayExperienceManager::LaunchGameBar((char *)this - 160, v13, v7);
              if ( v29 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDBC,
                  (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                  (const char *)(unsigned int)v29,
                  v30);
              return 0LL;
            }
            v13 = L"ms-gamebar://hotkey?ihkid=IHKID_CAPTURE_GAME_SCREENSHOT&source=GbEm";
LABEL_25:
            v7 = 4LL;
            goto LABEL_74;
          }
          v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAME_RECORD_CLIP&source=GbEm";
          goto LABEL_27;
        }
        v13 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_GAME_RECORDING&source=GbEm";
        goto LABEL_29;
      }
      v13 = L"ms-gamebar://hotkey?ihkid=IHKID_GAME_GUIDE_OVERLAY&source=GbEm";
    }
    v7 = 0LL;
    goto LABEL_74;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDC1,
                           (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v6);
  }
  return result;
}
