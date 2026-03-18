/*
 * XREFs of ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x1400029A4
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400028E4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x14000262C (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     wcscmp_0 @ 0x1400085D4 (wcscmp_0.c)
 */

void __fastcall CDwmAppHost::OnSettingChange(CDwmAppHost *this, __int64 a2, const wchar_t *a3)
{
  int v3; // edx

  if ( a2 )
  {
    if ( a2 == 6 || a2 == 42 )
    {
      this = (CDwmAppHost *)(unsigned int)-(a3 != 0LL);
      v3 = a3 != 0LL ? 3 : 0;
      if ( !a3 )
        return;
      goto LABEL_17;
    }
    if ( a2 != 47 )
    {
      if ( a2 == 67 )
      {
        v3 = 2048;
      }
      else
      {
        if ( a2 != 8217 )
          return;
        v3 = 256;
      }
      goto LABEL_17;
    }
    if ( a3 && !(unsigned int)_o__wcsicmp(a3, L"devices") )
    {
      v3 = 3;
LABEL_17:
      CDwmAppHost::LpcNotifySettingsChange(this, v3);
    }
  }
  else if ( a3 && !wcscmp_0(a3, L"ImmersiveColorSet") )
  {
    v3 = 16;
    goto LABEL_17;
  }
}
