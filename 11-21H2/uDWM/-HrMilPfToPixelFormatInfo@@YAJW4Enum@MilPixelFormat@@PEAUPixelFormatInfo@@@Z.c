/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1800592E8
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180059198 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, _DWORD *a2)
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
    }
    else if ( a1 <= 13 )
    {
      if ( a1 >= 12 || a1 < 8 )
        goto LABEL_20;
      if ( a1 == 8 )
      {
        *a2 = 61;
      }
      else
      {
        if ( a1 == 9 || a1 == 10 )
          goto LABEL_20;
        *a2 = 49;
      }
    }
    else
    {
      if ( a1 != 14 )
      {
        if ( (unsigned int)(a1 - 15) <= 1 )
        {
          *a2 = 87;
          v3 = 2;
          goto LABEL_7;
        }
LABEL_20:
        v4 = -2003292288;
        *a2 = 0;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292288, 0x328u);
        return v4;
      }
      *a2 = 88;
    }
    goto LABEL_34;
  }
  if ( a1 > 27 )
  {
    if ( a1 != 69 )
      goto LABEL_20;
    *a2 = 28;
LABEL_34:
    v3 = 3;
    goto LABEL_7;
  }
  switch ( a1 )
  {
    case 27:
    case 21:
    case 22:
      goto LABEL_20;
    case 23:
      *a2 = 11;
      break;
    case 26:
      *a2 = 2;
      break;
    default:
      goto LABEL_20;
  }
  v3 = 1;
LABEL_7:
  a2[1] = v3;
  if ( a1 > 23 )
  {
    if ( a1 <= 27 )
      goto LABEL_11;
    if ( (unsigned int)(a1 - 68) > 1 )
    {
      v4 = -2003292344;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292344, 0x33Cu);
      return v4;
    }
  }
  else if ( a1 < 20 && a1 > 16 )
  {
    goto LABEL_11;
  }
  v2 = 0;
LABEL_11:
  a2[2] = v2;
  return 0;
}
