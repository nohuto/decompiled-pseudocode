/*
 * XREFs of ?StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z @ 0x180534E60
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532D90 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18020C1CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 */

const char *__fastcall StringifyCoreInputViewKind(int a1)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                v7 = v6 - 1;
                if ( v7 )
                {
                  if ( v7 == 1 )
                    return "Gamepad";
                  return "Unknown";
                }
                return "Dictation";
              }
              return "Clipboard";
            }
            return "Symbols";
          }
          return "Emoji";
        }
        return "Handwriting";
      }
      return "Keyboard";
    }
  }
  else if ( a1 )
  {
    v9 = a1 - 1;
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
            v13 = v12 - 1;
            if ( v13 )
            {
              if ( v13 != 1 )
                return "Unknown";
              return "Dictation";
            }
            return "Clipboard";
          }
          return "Symbols";
        }
        return "Emoji";
      }
      return "Handwriting";
    }
    return "Keyboard";
  }
  return "Default";
}
