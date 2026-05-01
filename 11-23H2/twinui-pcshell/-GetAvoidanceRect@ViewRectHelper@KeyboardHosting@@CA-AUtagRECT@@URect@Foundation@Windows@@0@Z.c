/*
 * XREFs of ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18052F7C0
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18052FAEC (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x1802DE1E8 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetAvoidanceRect(__int64 a1, float *a2, float *a3)
{
  const struct Windows::Foundation::Rect *v6; // rdx
  const struct Windows::Foundation::Rect *v7; // rdx
  char v8; // r9
  float v9; // xmm1_4
  int v10; // r8d
  int v11; // eax
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14; // r8d
  float v15; // xmm1_4
  __int128 v17; // [rsp+20h] [rbp-18h]

  KeyboardHosting::ViewRectHelper::ValidateRect((struct Windows::Foundation::Rect *)a2);
  KeyboardHosting::ViewRectHelper::ValidateRect((struct Windows::Foundation::Rect *)a3);
  *(_OWORD *)a1 = 0LL;
  KeyboardHosting::IsRectNull((KeyboardHosting *)a3, v6);
  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)a2, v7) )
  {
    if ( !v8 )
    {
      v12 = a3[1];
      v13 = *a3 + a3[2];
      v14 = (int)v12;
      v15 = v12 + a3[3];
      *(_DWORD *)a1 = (int)*a3;
      *(_DWORD *)(a1 + 4) = v14;
      *(_DWORD *)(a1 + 8) = (int)v13;
      *(_DWORD *)(a1 + 12) = (int)v15;
    }
  }
  else
  {
    v9 = a2[1];
    v10 = (int)(float)(*a2 + a2[2]);
    v11 = (int)(float)(v9 + a2[3]);
    if ( v8 )
    {
      *(_DWORD *)a1 = (int)*a2;
      *(_DWORD *)(a1 + 4) = (int)v9;
      *(_DWORD *)(a1 + 8) = v10;
      *(_DWORD *)(a1 + 12) = v11;
    }
    else
    {
      LODWORD(v17) = (int)*a2;
      DWORD1(v17) = (int)v9;
      *((_QWORD *)&v17 + 1) = __PAIR64__(v11, v10);
      *(_OWORD *)a1 = v17;
    }
  }
  return a1;
}
