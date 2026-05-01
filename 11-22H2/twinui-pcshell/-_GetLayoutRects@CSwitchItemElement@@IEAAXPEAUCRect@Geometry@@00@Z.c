/*
 * XREFs of ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1805735C0
 * Callers:
 *     ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1802E2D80 (-HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1802E38C0 (-v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboard.c)
 *     ?GetThumbnailLocation@CSwitchItemElement@@UEAA?AUCRect@Geometry@@XZ @ 0x180573070 (-GetThumbnailLocation@CSwitchItemElement@@UEAA-AUCRect@Geometry@@XZ.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     ?_CalcThumbnailRect@CSwitchItemElement@@IEAA?AUCRect@Geometry@@AEBU23@@Z @ 0x1805734BC (-_CalcThumbnailRect@CSwitchItemElement@@IEAA-AUCRect@Geometry@@AEBU23@@Z.c)
 */

void __fastcall CSwitchItemElement::_GetLayoutRects(
        CSwitchItemElement *this,
        struct Geometry::CRect *a2,
        struct Geometry::CRect *a3,
        struct Geometry::CRect *a4)
{
  int v5; // esi
  int v8; // r11d
  int v10; // r8d
  int v11; // edi
  int v12; // ebx
  int v13; // edx
  int v14; // r9d
  int v15; // r14d
  unsigned int v16; // ecx
  LANGID ThreadUILanguage_0; // ax
  int v18; // ebx
  int v19; // esi
  int v20; // eax
  int v21; // [rsp+20h] [rbp-58h]
  __int128 v22; // [rsp+28h] [rbp-50h]
  __int128 v23; // [rsp+38h] [rbp-40h]
  __int128 v24; // [rsp+48h] [rbp-30h] BYREF
  int v25[4]; // [rsp+58h] [rbp-20h] BYREF

  v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v8 = v5 - *((_DWORD *)this + 93);
  v10 = *((_DWORD *)this + 92);
  v11 = v8 - *((_DWORD *)this + 107);
  v12 = v8;
  v13 = *((_DWORD *)this + 94);
  v14 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15) - *((_DWORD *)this + 95);
  v15 = v11 - *((_DWORD *)this + 110);
  DWORD1(v23) = v13 + *((_DWORD *)this + 108);
  HIDWORD(v23) = *((_DWORD *)this + 111) + DWORD1(v23);
  v16 = v13 + *((_DWORD *)this + 98);
  v21 = v10;
  DWORD2(v23) = v11;
  LODWORD(v23) = v15;
  *(_QWORD *)&v22 = __PAIR64__(v16, v10);
  DWORD2(v22) = v8;
  HIDWORD(v22) = v16 + *((_DWORD *)this + 85);
  if ( *((_QWORD *)this + 75) )
  {
    v12 = v15;
    DWORD2(v22) = v15;
  }
  v25[1] = *((_DWORD *)this + 99) + v16 + *((_DWORD *)this + 85);
  v25[0] = v10;
  v25[2] = v8;
  v25[3] = v14;
  CSwitchItemElement::_CalcThumbnailRect((__int64)this, &v24, v25);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    LODWORD(v23) = v5 - v11;
    LODWORD(v22) = v5 - v12;
    DWORD2(v23) = v5 - v15;
    v18 = v5 - v21;
    v19 = v5 - DWORD2(v24);
    DWORD2(v22) = v18;
    v20 = v19 - v24;
    LODWORD(v24) = v19;
    DWORD2(v24) += v20;
  }
  if ( a2 )
    *(_OWORD *)a2 = v23;
  if ( a3 )
    *(_OWORD *)a3 = v22;
  if ( a4 )
    *(_OWORD *)a4 = v24;
}
