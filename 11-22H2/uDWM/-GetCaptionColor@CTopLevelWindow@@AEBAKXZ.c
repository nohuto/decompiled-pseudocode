/*
 * XREFs of ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180051CE4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023280 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180023808 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x180023EB0 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetAccentBackground@CAccent@@SAJPEAK@Z @ 0x180039C68 (-GetAccentBackground@CAccent@@SAJPEAK@Z.c)
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x180051AD8 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ @ 0x180051D48 (-GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ.c)
 */

unsigned int __fastcall CTopLevelWindow::GetCaptionColor(CTopLevelWindow *this)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  CSystemBackdropVisual *v6; // rcx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 210);
  if ( !v1 )
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  v3 = v1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
LABEL_6:
      v6 = (CSystemBackdropVisual *)*((_QWORD *)this + 40);
      if ( v6 )
        return CSystemBackdropVisual::GetCurrentBaseColor(v6);
      return CTopLevelWindow::GetSolidColorCaptionColor(this);
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 0;
      goto LABEL_6;
    }
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  }
  if ( !*((_QWORD *)this + 37)
    || CTopLevelWindow::HasCaptionAreaColorOverride(this)
    || (int)CAccent::GetAccentBackground(&v8) < 0 )
  {
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  }
  return v8;
}
