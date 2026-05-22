/*
 * XREFs of ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x180129B40
 * Callers:
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x180129BF8 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x18012AE18 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x18012B1E8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x18012B5FC (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::Clip(ManipulationInjector *this, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  __int64 v4; // rax
  char v6; // r11
  LONG v7; // r9d
  char v10; // bl
  int v11; // ecx
  LONG y; // edx
  LONG v13; // ecx

  v4 = (__int64)*a2;
  v6 = 0;
  v7 = a4 + a3->left;
  v10 = 1;
  if ( a2->x >= v7 )
  {
    v7 = (LONG)*a2;
    v11 = a3->right - a4;
    if ( (int)v4 < v11 )
      goto LABEL_5;
    v7 = v11 - 1;
  }
  a2->x = v7;
  v6 = 1;
LABEL_5:
  y = a4 + a3->top;
  if ( a2->y >= y )
  {
    y = a2->y;
    v13 = a3->bottom - a4;
    if ( y < v13 )
    {
      v10 = v6;
      if ( !v6 )
        return v10;
      goto LABEL_10;
    }
    y = v13 - 1;
  }
  a2->y = y;
LABEL_10:
  if ( *((_BYTE *)this + 13) )
    DbgPrint("Clipped: original (%d, %d) clipped (%d, %d)\n", v4, HIDWORD(v4), v7, y);
  return v10;
}
