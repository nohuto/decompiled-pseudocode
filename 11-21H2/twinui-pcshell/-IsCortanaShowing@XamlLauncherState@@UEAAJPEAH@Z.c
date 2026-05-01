/*
 * XREFs of ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x18012E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x18012E4A0 (-IsCortanaVisible@XamlLauncherState@@UEAA_NXZ.c)
 */

__int64 __fastcall XamlLauncherState::IsCortanaShowing(XamlLauncherState *this, int *a2)
{
  int IsCortanaVisible; // ecx
  __int64 result; // rax

  IsCortanaVisible = XamlLauncherState::IsCortanaVisible((XamlLauncherState *)((char *)this - 8));
  result = 0LL;
  *a2 = IsCortanaVisible;
  return result;
}
