/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x18006B160
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x18006AFE4 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(signed int a1, _DWORD *a2)
{
  int v2; // r9d
  int v3; // eax
  unsigned int v4; // ebx

  v2 = 1;
  if ( a1 <= 20 )
  {
    if ( a1 == 20 )
    {
      *a2 = 24;
      goto LABEL_6;
    }
    if ( a1 <= 13 )
    {
      if ( a1 < 12 && a1 >= 8 )
      {
        if ( a1 == 8 )
        {
          *a2 = 61;
          goto LABEL_6;
        }
        if ( a1 != 9 && a1 != 10 )
        {
          *a2 = 49;
          goto LABEL_6;
        }
      }
    }
    else
    {
      if ( a1 == 14 )
      {
        *a2 = 88;
LABEL_6:
        v3 = 3;
        goto LABEL_7;
      }
      if ( (unsigned int)(a1 - 15) <= 1 )
      {
        *a2 = 87;
        v3 = 2;
        goto LABEL_7;
      }
    }
LABEL_22:
    v4 = -2003292288;
    *a2 = 0;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292288, 0x355u, 0LL);
    return v4;
  }
  if ( a1 > 27 )
  {
    if ( a1 != 69 )
      goto LABEL_22;
    *a2 = 28;
  }
  else
  {
    switch ( a1 )
    {
      case 27:
      case 21:
      case 22:
        goto LABEL_22;
      case 23:
        *a2 = 11;
        break;
      case 26:
        *a2 = 2;
        break;
      default:
        goto LABEL_22;
    }
  }
  v3 = 1;
LABEL_7:
  a2[1] = v3;
  if ( a1 > 23 )
  {
    if ( a1 > 27 )
    {
      if ( (unsigned int)(a1 - 68) > 1 )
      {
        v4 = -2003292344;
        MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2003292344, 0x369u, 0LL);
        return v4;
      }
      goto LABEL_10;
    }
  }
  else if ( a1 >= 20 || a1 <= 16 )
  {
    goto LABEL_10;
  }
  v2 = 2;
LABEL_10:
  v4 = 0;
  a2[2] = v2 == 2;
  return v4;
}
