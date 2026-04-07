/*
 * XREFs of ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x1800325FC
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035F78 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180103F44 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     floor @ 0x180060EC8 (floor.c)
 */

void __fastcall CWindowList::GetPhysicalPtFromLogical(
        CWindowList *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5)
{
  LONG left; // edi
  LONG top; // esi
  float v9; // xmm7_4
  float v10; // xmm7_4

  left = a3->left;
  top = a3->top;
  if ( (*((_BYTE *)a2 + 372) & 1) != 0 )
  {
    v10 = (float)*((int *)a2 + 86) / (float)*((int *)a2 + 92);
    if ( v10 != 1.0 )
    {
      left = (int)floor((float)((float)left * v10) + 0.5);
      top = (int)floor((float)((float)top * v10) + 0.5);
    }
  }
  else
  {
    if ( (double)*((int *)a2 + 88) != 0.0 || (double)*((int *)a2 + 89) != 0.0 )
    {
      left -= (int)floor((float)*((int *)a2 + 88) + 0.5);
      top -= (int)floor((float)*((int *)a2 + 89) + 0.5);
    }
    v9 = *((float *)a2 + 83);
    if ( v9 != 1.0 )
    {
      left = (int)floor((float)((float)left * v9) + 0.5);
      top = (int)floor((float)((float)top * v9) + 0.5);
    }
    if ( (double)*((int *)a2 + 90) != 0.0 || (double)*((int *)a2 + 91) != 0.0 )
    {
      left += (int)floor((float)*((int *)a2 + 90) + 0.5);
      top += (int)floor((float)*((int *)a2 + 91) + 0.5);
    }
  }
  *a5 = top;
  *a4 = left;
}
