/*
 * XREFs of _lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d_::operator() @ 0x1800E9BFC
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___ @ 0x1800E973C (CTransitionVisualController--ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d_::operator()(const RECT ***a1, __int64 a2)
{
  const RECT **v2; // rbx
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a2 + 664) & 1) != 0 && (*(_DWORD *)(a2 + 116) & 0x20000000) == 0 && (*(_BYTE *)(a2 + 670) & 8) == 0 )
  {
    v2 = *a1;
    UnionRect(&rcDst, **a1, (const RECT *)(a2 + 48));
    **v2 = rcDst;
  }
  return 0LL;
}
