/*
 * XREFs of ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18010FB9C
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18010F650 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmap::HrCheckPixelRect(CBitmap *this, const struct WICRect *a2, struct tagRECT *a3)
{
  unsigned int v5; // ebx
  LONG X; // eax
  LONG Y; // ecx
  INT Width; // edx
  unsigned int v9; // edx
  INT Height; // eax
  unsigned int v11; // eax
  unsigned int yBottom; // [rsp+20h] [rbp-48h]
  RECT rcSrc1; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  SetRect(a3, 0, 0, *((_DWORD *)this + 46), *((_DWORD *)this + 47));
  if ( !a2 )
    return v5;
  X = a2->X;
  Y = a2->Y;
  rcSrc1.left = X;
  rcSrc1.top = Y;
  if ( X < 0 )
  {
    yBottom = 619;
    goto LABEL_21;
  }
  Width = a2->Width;
  if ( Width < 0 )
  {
    yBottom = 620;
    goto LABEL_21;
  }
  v9 = X + Width;
  if ( v9 < X )
  {
    yBottom = 621;
    goto LABEL_21;
  }
  if ( v9 > 0x7FFFFFFF )
  {
    rcSrc1.right = -1;
    yBottom = 622;
    goto LABEL_21;
  }
  rcSrc1.right = v9;
  if ( Y < 0 )
  {
    yBottom = 624;
    goto LABEL_21;
  }
  Height = a2->Height;
  if ( Height < 0 )
  {
    yBottom = 625;
    goto LABEL_21;
  }
  v11 = Y + Height;
  if ( v11 < Y )
  {
    yBottom = 626;
    goto LABEL_21;
  }
  if ( v11 > 0x7FFFFFFF )
  {
    rcSrc1.bottom = -1;
    yBottom = 627;
LABEL_21:
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, yBottom);
    return v5;
  }
  rcSrc1.bottom = v11;
  IntersectRect(a3, &rcSrc1, a3);
  if ( IsRectEmpty(&rcSrc1) || !EqualRect(a3, &rcSrc1) )
    return 2147942487LL;
  return v5;
}
