/*
 * XREFs of ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x18037DDD4
 * Callers:
 *     _lambda_db776e8ce77c2c191d2fdbaad842576b_::operator() @ 0x18037CC58 (_lambda_db776e8ce77c2c191d2fdbaad842576b_--operator().c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18037F470 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::GetFramePosition(
        CVirtualTouchpadExperienceManager *this,
        struct tagPOINT *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  const char *v8; // r9
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_OWORD *)&a2->x = 0LL;
  v3 = *((_QWORD *)this + 43);
  *(_OWORD *)v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 56LL))(v3, v9);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_OWORD *)&a2->x = *(_OWORD *)v9;
    if ( MapWindowPoints(*((HWND *)this + 44), 0LL, a2, 2u) || !GetLastError() )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1E4,
               (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
               v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DF,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
