/*
 * XREFs of ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x1805F00C4
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802E2D4C (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?CalcTouchDragRect@@YAXAEBUtagPOINT@@PEAUtagRECT@@@Z @ 0x1805ECA00 (-CalcTouchDragRect@@YAXAEBUtagPOINT@@PEAUtagRECT@@@Z.c)
 *     ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805EF894 (-_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x1805EFF48 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1805F0228 (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805F02C0 (-_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnPointerUpdate(CDragVisual *this, unsigned int a2, struct tagPOINT a3)
{
  int v3; // eax
  char v7; // bp
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  int started; // eax
  struct tagRECT v11; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-78h] BYREF
  struct tagPOINT v13; // [rsp+58h] [rbp-50h] BYREF
  LONG y; // [rsp+C4h] [rbp+1Ch]

  y = a3.y;
  v3 = *((_DWORD *)this + 82);
  if ( v3 && v3 == a2 )
  {
    if ( *((_BYTE *)this + 325) )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      if ( (unsigned int)GetPointerInfo(a2, v12)
        && (v13.x != *((_DWORD *)this + 77) || v13.y != *((_DWORD *)this + 78))
        && Geometry::CRect::Contains((CDragVisual *)((char *)this + 240), (const struct tagPOINT *)((char *)this + 300)) )
      {
        *(_QWORD *)((char *)this + 308) = __PAIR64__(v8, v9);
        v11 = 0LL;
        CalcTouchDragRect((const struct tagPOINT *)((char *)this + 316), &v11);
        if ( !Geometry::CRect::Contains((Geometry::CRect *)&v11, &v13) )
          *((_BYTE *)this + 325) = 1;
      }
    }
    if ( *((_BYTE *)this + 325) )
    {
      if ( v7 || *(_QWORD *)((char *)this + 292) != __PAIR64__(y, a3.x) )
      {
        *(struct tagPOINT *)((char *)this + 292) = a3;
        if ( v7 )
          started = CDragVisual::_OnStartDrag(this, a2, a3);
        else
          started = CDragVisual::_OnContinueDrag(this, a2, a3);
        if ( started < 0 )
          CDragVisual::_OnPointerCaptureChanged(this, a2);
      }
    }
    else
    {
      CDragVisual::_OnPressDown(this, a3);
    }
  }
}
