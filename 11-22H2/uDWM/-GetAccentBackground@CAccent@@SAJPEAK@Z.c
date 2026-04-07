/*
 * XREFs of ?GetAccentBackground@CAccent@@SAJPEAK@Z @ 0x180039C68
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180038D74 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180051CE4 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccent::GetAccentBackground(unsigned int *a1)
{
  __int64 result; // rax

  result = 2147500037LL;
  if ( CAccent::s_clrCurrentAccentBackground != 0xFFFFFF )
  {
    result = 0LL;
    *a1 = CAccent::s_clrCurrentAccentBackground;
  }
  return result;
}
