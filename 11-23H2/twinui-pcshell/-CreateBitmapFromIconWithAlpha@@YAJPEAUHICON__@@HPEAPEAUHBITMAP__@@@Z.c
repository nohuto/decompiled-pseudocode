/*
 * XREFs of ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1802DFAA4
 * Callers:
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x180551E60 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x180552600 (-_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z.c)
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x1805527D4 (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 *     CreateBitmapFromIcon @ 0x180552990 (CreateBitmapFromIcon.c)
 */

__int64 __fastcall CreateBitmapFromIconWithAlpha(HICON hicon, unsigned int a2, HBITMAP *a3)
{
  signed int HaveAlpha; // ebx
  HBITMAP hbmColor; // rcx
  char v8; // al
  HBITMAP v9; // rax
  signed int BitmapFromIcon; // eax
  ICONINFO piconinfo; // [rsp+30h] [rbp-40h] BYREF
  _BYTE pv[4]; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch]
  int v15; // [rsp+58h] [rbp-18h]
  unsigned int v16; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+A4h] [rbp+34h]

  *a3 = 0LL;
  if ( GetIconInfo(hicon, &piconinfo) || (HaveAlpha = ResultFromKnownLastError(), HaveAlpha >= 0) )
  {
    hbmColor = piconinfo.hbmColor;
    v8 = 0;
    LOBYTE(v16) = 0;
    if ( piconinfo.hbmColor )
    {
      HaveAlpha = _DoesBitmapHaveAlpha(piconinfo.hbmColor, (bool *)&v16);
      if ( HaveAlpha < 0 )
        goto LABEL_16;
      hbmColor = piconinfo.hbmColor;
      v8 = v16;
    }
    if ( v8 )
    {
      if ( GetObjectW(hbmColor, 32, pv) )
      {
        HaveAlpha = 0;
      }
      else
      {
        HaveAlpha = ResultFromKnownLastError();
        if ( HaveAlpha < 0 )
          goto LABEL_16;
      }
      if ( v14 == v15 && a2 == v14 )
      {
        v9 = piconinfo.hbmColor;
        piconinfo.hbmColor = 0LL;
        *a3 = v9;
LABEL_18:
        DeleteObject(piconinfo.hbmMask);
        return (unsigned int)HaveAlpha;
      }
      BitmapFromIcon = _ScaleBitmap(piconinfo.hbmColor, a2, a3);
    }
    else
    {
      v16 = a2;
      v17 = a2;
      BitmapFromIcon = CreateBitmapFromIcon(hicon, (__int64)a3);
    }
    HaveAlpha = BitmapFromIcon;
LABEL_16:
    if ( piconinfo.hbmColor )
      DeleteObject(piconinfo.hbmColor);
    goto LABEL_18;
  }
  return (unsigned int)HaveAlpha;
}
