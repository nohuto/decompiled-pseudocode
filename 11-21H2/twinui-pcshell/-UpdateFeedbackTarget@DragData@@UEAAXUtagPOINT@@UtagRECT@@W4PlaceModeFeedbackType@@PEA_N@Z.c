/*
 * XREFs of ?UpdateFeedbackTarget@DragData@@UEAAXUtagPOINT@@UtagRECT@@W4PlaceModeFeedbackType@@PEA_N@Z @ 0x1805237F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?HitTest@DragData@@UEAA?AUDropTarget@WindowArrangementViewDragData@@AEBUCPoint@Geometry@@@Z @ 0x180522EF0 (-HitTest@DragData@@UEAA-AUDropTarget@WindowArrangementViewDragData@@AEBUCPoint@Geometry@@@Z.c)
 */

struct tagPOINT __fastcall DragData::UpdateFeedbackTarget(
        struct tagPOINT *a1,
        POINT a2,
        const RECT *a3,
        LONG a4,
        _BYTE *a5)
{
  struct tagPOINT result; // rax
  POINT v9; // [rsp+20h] [rbp-48h] BYREF
  LONG v10[6]; // [rsp+28h] [rbp-40h] BYREF

  *a5 = 0;
  if ( PtInRect(a3, a2) )
  {
    v9.y = 5;
  }
  else
  {
    v9 = a2;
    DragData::HitTest((__int64)a1, (__int64)v10, &v9);
    v9.y = v10[0];
  }
  v9.x = a4;
  result = v9;
  if ( __PAIR64__(v9.y, a4) != *(_QWORD *)&a1[12] )
  {
    a1[12] = v9;
    *a5 = 1;
  }
  return result;
}
