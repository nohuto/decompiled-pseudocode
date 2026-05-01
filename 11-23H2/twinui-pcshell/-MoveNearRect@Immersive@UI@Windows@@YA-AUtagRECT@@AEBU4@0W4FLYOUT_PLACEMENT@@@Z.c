/*
 * XREFs of ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x18074B508
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18074B590 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::MoveNearRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        _DWORD *a3,
        int a4)
{
  int v6; // edx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r8d

  v6 = 0;
  if ( !a4 || (v7 = a4 - 1) == 0 )
  {
    v10 = a3[1] - a2->bottom;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = a3[3] - a2->top;
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v6 = *a3 - a2->right;
    goto LABEL_9;
  }
  if ( v9 == 1 )
  {
    v6 = a3[2] - a2->left;
LABEL_9:
    v10 = 0;
    goto LABEL_12;
  }
  v10 = 0;
  v6 = 0;
LABEL_12:
  *a1 = *a2;
  OffsetRect(a1, v6, v10);
  return a1;
}
