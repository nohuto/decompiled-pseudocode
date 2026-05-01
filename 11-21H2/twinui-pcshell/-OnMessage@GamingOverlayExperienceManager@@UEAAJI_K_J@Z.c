/*
 * XREFs of ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x1800380D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x1800381BC (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18032EA9C (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180332BEC (-HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180334058 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::OnMessage(GamingOverlayExperienceManager *this, int a2, int a3)
{
  __int64 v5; // r8
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v12; // ebx
  int v13; // ebx
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
  const wchar_t *v27; // rdx
  int v28; // eax
  int v29; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 786 )
    return 0LL;
  if ( a3 != 56 )
    goto LABEL_77;
  if ( GamingOverlayExperienceManager::HandleHolographicHotkey((GamingOverlayExperienceManager *)((char *)this - 152)) )
    return 0LL;
  if ( !*((_BYTE *)this + 640) )
    return 0LL;
LABEL_77:
  if ( IsDesktopInputContext() )
  {
    v5 = 7LL;
    if ( a3 > 63 )
    {
      if ( a3 <= 94 )
      {
        if ( a3 == 94 )
        {
          v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_4&source=GbEm";
        }
        else
        {
          v22 = a3 - 64;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 25;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( v26 )
                  {
                    if ( v26 != 1 )
                      return 0LL;
                    v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_3&source=GbEm";
                  }
                  else
                  {
                    v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_2&source=GbEm";
                  }
                }
                else
                {
                  v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_1&source=GbEm";
                }
              }
              else
              {
                v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_WEBCAMERA_CAPTURE&source=GbEm";
              }
            }
            else
            {
              v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_BROADCAST&source=GbEm";
            }
          }
          else
          {
            v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_MICROPHONE_CAPTURE&source=GbEm";
          }
        }
      }
      else
      {
        v12 = a3 - 95;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 != 1 )
                    return 0LL;
                  v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_10&source=GbEm";
                }
                else
                {
                  v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_9&source=GbEm";
                }
              }
              else
              {
                v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_8&source=GbEm";
              }
            }
            else
            {
              v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_7&source=GbEm";
            }
          }
          else
          {
            v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_6&source=GbEm";
          }
        }
        else
        {
          v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEBAR_CUSTOM_ACTION_5&source=GbEm";
        }
      }
      goto LABEL_73;
    }
    if ( a3 == 63 )
    {
      v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_GAME_RECORDING_INDICATOR&source=GbEm";
      goto LABEL_73;
    }
    if ( a3 > 54 )
    {
      v17 = a3 - 55;
      if ( !v17 )
      {
        v27 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_WEBCAMERA_CAPTURE&source=GbEm";
        goto LABEL_73;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 3;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 != 1 )
                return 0LL;
              v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_CAPTURE_GAME_SCREENSHOT&source=GbEm";
              goto LABEL_32;
            }
            v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_GAME_RECORD_CLIP&source=GbEm";
LABEL_35:
            v5 = 1LL;
            goto LABEL_73;
          }
          v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_TOGGLE_GAME_RECORDING&source=GbEm";
LABEL_38:
          v5 = 10LL;
          goto LABEL_73;
        }
        v27 = L"ms-gamebar://hotkey?ihkid=IHKID_ALT_GAME_GUIDE_OVERLAY&source=GbEm";
      }
      else
      {
        if ( GamingOverlayExperienceManager::GameBarSupportsGamepadCommands((GamingOverlayExperienceManager *)((char *)this - 152)) )
          return 0LL;
        v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAMEDVR_NEXUS&source=GbEm";
      }
    }
    else
    {
      if ( a3 == 54 )
      {
        v27 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_BROADCAST&source=GbEm";
        goto LABEL_73;
      }
      v6 = a3 - 48;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                if ( v10 != 1 )
                  return 0LL;
                v27 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_MICROPHONE_CAPTURE&source=GbEm";
              }
              else
              {
                v27 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_GAME_RECORDING_INDICATOR&source=GbEm";
              }
LABEL_73:
              v28 = GamingOverlayExperienceManager::LaunchGameBar((char *)this - 152, v27, v5);
              if ( v28 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xD32,
                  (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                  (const char *)(unsigned int)v28,
                  v29);
              return 0LL;
            }
            v27 = L"ms-gamebar://hotkey?ihkid=IHKID_CAPTURE_GAME_SCREENSHOT&source=GbEm";
LABEL_32:
            v5 = 4LL;
            goto LABEL_73;
          }
          v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAME_RECORD_CLIP&source=GbEm";
          goto LABEL_35;
        }
        v27 = L"ms-gamebar://hotkey?ihkid=IHKID_TOGGLE_GAME_RECORDING&source=GbEm";
        goto LABEL_38;
      }
      v27 = L"ms-gamebar://hotkey?ihkid=IHKID_GAME_GUIDE_OVERLAY&source=GbEm";
    }
    v5 = 0LL;
    goto LABEL_73;
  }
  return 0LL;
}
