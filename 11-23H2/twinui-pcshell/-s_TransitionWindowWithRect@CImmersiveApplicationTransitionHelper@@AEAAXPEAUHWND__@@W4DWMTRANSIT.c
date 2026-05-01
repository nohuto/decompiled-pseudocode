/*
 * XREFs of ?s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@@Z @ 0x1803AA9E0
 * Callers:
 *     ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x1803AA8F8 (-_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct tagRECT *a4)
{
  int v7; // r8d
  int v8; // edx
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  if ( a4 )
  {
    v7 = -a4->top;
    v8 = -a4->left;
    rc = *a4;
    OffsetRect(&rc, v8, v7);
  }
  return DwmpTransitionWindowWithRects(a2, a3, (unsigned __int64)&rc & -(__int64)(a4 != 0LL), a4, 0LL, 0LL, 0LL);
}
