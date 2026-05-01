/*
 * XREFs of ?GetInputAppState@TouchKeyboardExperienceManager@@UEAAJPEAW4ApplicationState@Text@Shell@Internal@Windows@@@Z @ 0x18006C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18020A518 (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetInputAppState(
        TouchKeyboardExperienceManager *this,
        enum Windows::Internal::Shell::Text::ApplicationState *a2)
{
  int InputAppState; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  InputAppState = TouchKeyboardExperienceManager::GetInputAppState((char *)this - 200);
  if ( !InputAppState )
    goto LABEL_10;
  v4 = InputAppState - 1;
  if ( !v4 )
  {
    *(_DWORD *)a2 = 1;
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_DWORD *)a2 = 3;
    return 0LL;
  }
  if ( (unsigned int)(v6 - 1) > 1 )
  {
LABEL_10:
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  *(_DWORD *)a2 = 4;
  return 0LL;
}
