/*
 * XREFs of ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x1805DA9C8
 * Callers:
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1805DA850 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x1805DA754 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

void __fastcall JointDivider::PaintFocusIndicator(JointDivider *this, HDC a2, const struct Geometry::CRect *a3)
{
  int v3; // ebx
  int v5; // r10d
  int v6; // r9d
  LONG v7; // eax
  int Color; // eax
  const struct tagRECT *v9; // r8
  RECT v10; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_DWORD *)this + 14);
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 24) * *((_DWORD *)this + 20) / 100;
    v6 = 3 * *((_DWORD *)this + 20) / 100;
    v10.top = (*((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1)) / 2 - v5 / 2 + *((_DWORD *)a3 + 1);
    v10.bottom = v5 + v10.top;
    if ( v3 == 1 )
      v7 = *(_DWORD *)a3 + 1;
    else
      v7 = *((_DWORD *)a3 + 2) - v6 - 1;
    v10.left = v7;
    v10.right = v6 + v7;
    Color = CImmersiveColor::GetColor(3u);
    GDIHelpers::FillRectARGB(a2, &v10, v9, Color);
  }
}
