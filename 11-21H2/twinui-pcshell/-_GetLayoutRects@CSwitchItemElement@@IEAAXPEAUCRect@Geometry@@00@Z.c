/*
 * XREFs of ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1804B8A80
 * Callers:
 *     ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1802346D0 (-HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180235200 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 *     ?GetThumbnailLocation@CSwitchItemElement@@UEAA?AUCRect@Geometry@@XZ @ 0x1804B8530 (-GetThumbnailLocation@CSwitchItemElement@@UEAA-AUCRect@Geometry@@XZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     ?_CalcThumbnailRect@CSwitchItemElement@@IEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1804B897C (-_CalcThumbnailRect@CSwitchItemElement@@IEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

void __fastcall CSwitchItemElement::_GetLayoutRects(
        CSwitchItemElement *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3,
        struct Geometry::CRect *a4)
{
  int v4; // r11d
  int v7; // edi
  int v9; // edx
  int v11; // ebx
  int v12; // esi
  int v13; // r9d
  int v14; // r13d
  int v15; // ecx
  LANGID ThreadUILanguage_0; // ax
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // [rsp+20h] [rbp-58h]
  __int128 v21; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+38h] [rbp-40h]
  __int128 v23; // [rsp+48h] [rbp-30h] BYREF
  int v24[4]; // [rsp+58h] [rbp-20h] BYREF

  v4 = *((_DWORD *)this + 92);
  v7 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v9 = *((_DWORD *)this + 94);
  v11 = v7 - *((_DWORD *)this + 93) - *((_DWORD *)this + 107);
  v12 = v7 - *((_DWORD *)this + 93);
  v13 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15) - *((_DWORD *)this + 95);
  v14 = v11 - *((_DWORD *)this + 110);
  DWORD1(v21) = v9 + *((_DWORD *)this + 108);
  HIDWORD(v21) = *((_DWORD *)this + 111) + DWORD1(v21);
  v15 = v9 + *((_DWORD *)this + 98);
  v24[2] = v12;
  DWORD1(v22) = v15;
  HIDWORD(v22) = v15 + *((_DWORD *)this + 85);
  if ( *((_QWORD *)this + 75) )
    v12 = v14;
  v20 = v4;
  v24[1] = *((_DWORD *)this + 99) + v15 + *((_DWORD *)this + 85);
  DWORD2(v21) = v11;
  LODWORD(v21) = v14;
  LODWORD(v22) = v4;
  DWORD2(v22) = v12;
  v24[0] = v4;
  v24[3] = v13;
  CSwitchItemElement::_CalcThumbnailRect((__int64)this, &v23, v24);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    LODWORD(v21) = v7 - v11;
    LODWORD(v22) = v7 - v12;
    DWORD2(v21) = v7 - v14;
    v17 = v7 - v20;
    v18 = v7 - DWORD2(v23);
    DWORD2(v22) = v17;
    v19 = v18 - v23;
    LODWORD(v23) = v18;
    DWORD2(v23) += v19;
  }
  if ( a2 )
    *(_OWORD *)a2 = v21;
  if ( a3 )
    *(_OWORD *)a3 = v22;
  if ( a4 )
    *(_OWORD *)a4 = v23;
}
