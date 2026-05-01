/*
 * XREFs of ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x1805F777C
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1805F70B8 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetCurrentThemeForOverrides@ImmersiveContextMenuHelper@@YAPEAXPEAUHWND__@@W4ImmersiveContextMenuOptions@@_N@Z @ 0x1805F753C (-GetCurrentThemeForOverrides@ImmersiveContextMenuHelper@@YAPEAXPEAUHWND__@@W4ImmersiveContextMen.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::OverrideBackgroundColor(HMENU a1, HWND a2, char a3)
{
  HRESULT ThemeColor; // ebx
  HTHEME CurrentThemeForOverrides; // rdi
  MENUINFO v7; // [rsp+30h] [rbp-38h] BYREF
  COLORREF color; // [rsp+88h] [rbp+20h] BYREF

  v7.cbSize = 40;
  v7.fMask = -2147483646;
  ThemeColor = -2147418113;
  memset(&v7.dwStyle, 0, 32);
  CurrentThemeForOverrides = ImmersiveContextMenuHelper::GetCurrentThemeForOverrides(a2, a3);
  if ( CurrentThemeForOverrides )
  {
    ThemeColor = GetThemeColor(CurrentThemeForOverrides, 9, 0, 3802, &color);
    if ( ThemeColor >= 0 )
    {
      v7.hbrBack = CreateSolidBrush(color);
      if ( SetMenuInfo(a1, &v7) )
        ThemeColor = 0;
      else
        ThemeColor = ResultFromKnownLastError();
    }
    CloseThemeData(CurrentThemeForOverrides);
  }
  return (unsigned int)ThemeColor;
}
