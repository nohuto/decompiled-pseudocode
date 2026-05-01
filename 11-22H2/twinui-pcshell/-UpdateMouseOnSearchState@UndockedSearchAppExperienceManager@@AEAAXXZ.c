/*
 * XREFs of ?UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046B4C8
 * Callers:
 *     _lambda_a21e1a2925ef670440b4b94eb1909895_::_lambda_invoker_cdecl_ @ 0x180461570 (_lambda_a21e1a2925ef670440b4b94eb1909895_--_lambda_invoker_cdecl_.c)
 *     ?TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046ACA8 (-TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall UndockedSearchAppExperienceManager::UpdateMouseOnSearchState(UndockedSearchAppExperienceManager *this)
{
  HWND v2; // rcx
  bool v3; // al
  RECT *v4; // rdi
  RECT *v5; // rsi
  POINT pt; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-30h] BYREF
  RECT rc; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 25) )
  {
    pt = 0LL;
    GetCursorPos(&pt);
    v2 = (HWND)*((_QWORD *)this + 25);
    Rect = 0LL;
    GetWindowRect(v2, &Rect);
    v3 = PtInRect(&Rect, pt);
    *((_BYTE *)this + 208) = v3;
    if ( v3 )
    {
      v4 = (RECT *)*((_QWORD *)this + 28);
      v5 = (RECT *)*((_QWORD *)this + 29);
      while ( v4 != v5 )
      {
        rc = *v4;
        if ( PtInRect(&rc, pt) )
        {
          *((_BYTE *)this + 208) = 0;
          return;
        }
        *((_BYTE *)this + 208) = 1;
        ++v4;
      }
    }
  }
}
