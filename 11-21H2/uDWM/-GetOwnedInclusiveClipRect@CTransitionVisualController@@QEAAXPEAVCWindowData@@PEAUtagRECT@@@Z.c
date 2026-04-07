/*
 * XREFs of ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800ED060
 * Callers:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800DA828 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___ @ 0x1800E973C (CTransitionVisualController--ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___.c)
 */

void __fastcall CTransitionVisualController::GetOwnedInclusiveClipRect(
        CTransitionVisualController *this,
        struct tagRECT *a2,
        struct tagRECT *a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct tagRECT **v5; // [rsp+38h] [rbp+10h] BYREF
  struct tagRECT *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *a3 = a2[3];
  v4 = *((_QWORD *)this + 12);
  if ( v4 != -1 || (unsigned int)GetDesktopID(1LL, &v4) )
  {
    v5 = &v6;
    CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___(
      (__int64)a2,
      (__int64)&v5,
      1);
  }
}
