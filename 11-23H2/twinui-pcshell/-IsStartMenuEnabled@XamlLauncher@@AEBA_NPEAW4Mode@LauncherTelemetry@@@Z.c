/*
 * XREFs of ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x18019845C
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1801982C0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180501EA0 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x1801FF4F4 (-IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ.c)
 */

bool __fastcall XamlLauncher::IsStartMenuEnabled(XamlLauncher *this, enum LauncherTelemetry::Mode *a2)
{
  bool result; // al
  char v5; // cl

  if ( IsStartMenuSuppressedByShellConfigRegistry() )
  {
    if ( a2 )
      *(_DWORD *)a2 = 25;
    return 0;
  }
  else
  {
    v5 = *((_BYTE *)this + 368);
    if ( v5 || *((_BYTE *)this + 370) || (result = 1, *((_BYTE *)this + 371)) )
      result = 0;
    if ( a2 )
    {
      if ( v5 )
      {
        *(_DWORD *)a2 = 3;
      }
      else if ( *((_BYTE *)this + 370) )
      {
        *(_DWORD *)a2 = 21;
      }
      else
      {
        *(_DWORD *)a2 = *((_BYTE *)this + 371) != 0 ? 0x18 : 0;
      }
    }
  }
  return result;
}
