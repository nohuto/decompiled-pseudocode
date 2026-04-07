/*
 * XREFs of ?GetResizeBorderOffsets@CTopLevelWindow@@QEAA?AUtagRECT@@I@Z @ 0x1800E5090
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010204C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow::GetResizeBorderOffsets(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        unsigned int a3)
{
  __int64 v3; // rax
  LONG v6; // edx
  int v7; // eax
  LONG v8; // ecx
  int v9; // eax

  v3 = *((_QWORD *)this + 94);
  *retstr = 0LL;
  v6 = MulDiv(16, *(_DWORD *)(v3 + 344), 96);
  if ( a3 <= 7 && (v7 = 146, _bittest(&v7, a3)) )
  {
    v8 = -v6;
    retstr->left = -v6;
  }
  else
  {
    v8 = -v6;
  }
  if ( a3 <= 8 )
  {
    v9 = 292;
    if ( _bittest(&v9, a3) )
      retstr->right = v6;
  }
  if ( a3 - 3 <= 2 )
    retstr->top = v8;
  if ( a3 - 6 <= 2 )
    retstr->bottom = v6;
  return retstr;
}
